#include <vector>
#include "jni.h"
#include "recipeNo046_FillTheList.h"
using namespace std;

JNIEXPORT void JNICALL Java_recipeNo046_FillTheList_fillTheList
  (JNIEnv *env, jclass cls, jobject obj) {

  vector<int> vect { 1, 2, 3 }; 

  jclass listClass = env->FindClass("java/util/List");
  if(listClass == NULL) {
    return;                  // alternatively, throw exception (recipeNo019)
  }

  jclass integerClass = env->FindClass("java/lang/Integer");
  if(integerClass == NULL) {
    return;                  // alternatively, throw exception (recipeNo019)
  }

  jmethodID addMethodID = env->GetMethodID(listClass, "add", "(Ljava/lang/Object;)Z");
  if(addMethodID == NULL) {
    return;                  //                 - || -  
  }

  jmethodID integerConstructorID = env->GetMethodID(integerClass, "<init>", "(I)V"); 
  if(integerConstructorID == NULL) {
    return;                  //                 - || -
  }

  for(int i : vect) {
    // Now, we have object created by Integer(i) 
    jobject integerValue = env->NewObject(integerClass, integerConstructorID, i);
    if(integerValue == NULL) {
      return;
    }
    env->CallBooleanMethod(obj, addMethodID, integerValue);
  }

  env->DeleteLocalRef(listClass);
  env->DeleteLocalRef(integerClass);

}
