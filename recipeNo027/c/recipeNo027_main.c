#include <stdio.h>
#include <jni.h>
#include <pthread.h>

#define NUM_THREADS 6

pthread_mutex_t mutexjvm;
pthread_t threads[NUM_THREADS];

struct JVM {
  JNIEnv *env;
  JavaVM *jvm;
};

void invoke_class(JNIEnv* env);

void *jvmThreads(void* myJvm) {

  struct JVM *myJvmPtr = (struct JVM*) myJvm;
  JavaVM *jvmPtr = myJvmPtr -> jvm;
  JNIEnv *env = myJvmPtr -> env;

  pthread_mutex_lock (&mutexjvm);
  printf("I will call JVM\n");
  (*jvmPtr)->AttachCurrentThread(jvmPtr, (void**) &(env), NULL);
  invoke_class( env );
  (*jvmPtr)->DetachCurrentThread(jvmPtr);
  pthread_mutex_unlock (&mutexjvm);
  pthread_exit(NULL);
}

JNIEnv* create_vm(struct JVM *jvm)
{
    JNIEnv* env;
    JavaVMInitArgs vm_args;
    JavaVMOption options;
    options.optionString = "-Djava.class.path=./target:../target";

    vm_args.options = &options;
    vm_args.ignoreUnrecognized = 0;
    vm_args.version = JNI_VERSION_1_6;
    vm_args.nOptions = 1;

    int status = JNI_CreateJavaVM(&jvm->jvm, (void**)&env, &vm_args);
    if (status < 0 || !env)
        printf("Error\n");
    return env;
}

void invoke_class(JNIEnv* env)
{
    jclass Main_class;
    jmethodID fun_id;
    Main_class = (*env)->FindClass(env, "recipeNo027/Main");
    fun_id = (*env)->GetStaticMethodID(env, Main_class, "fun", "()I");
    (*env)->CallStaticIntMethod(env, Main_class, fun_id);
}

int main(int argc, char **argv)
{
    struct JVM myJvm;
    myJvm.env = create_vm(&myJvm);

    if(myJvm.env == NULL)
        return 1;

    pthread_mutex_init(&mutexjvm, NULL);
    for(int i=0; i<NUM_THREADS; i++){
        pthread_create(&threads[i], NULL, jvmThreads, (void*) &myJvm);
        pthread_join(threads[i], 0);
    }
    (*myJvm.jvm)->DestroyJavaVM(myJvm.jvm);
}
