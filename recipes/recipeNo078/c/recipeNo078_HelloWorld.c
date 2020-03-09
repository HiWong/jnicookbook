#include <stdio.h>
#include "jni.h"
#include "recipeNo078_HelloWorld.h"
#include <string.h>
#include <pthread.h>

void huge_static();

JNIEXPORT void JNICALL Java_recipeNo078_HelloWorld_displayMessage
  (JNIEnv * env, jclass obj) {

  size_t stack_size; 

  stack_size = pthread_get_stacksize_np(pthread_self());

  printf("[JNI wrapper] Stack size: %zd\n", stack_size); 
  printf("[JNI wrapper] I will call huge_static()\n"); 

  huge_static();

  printf("[JNI wrapper] Back in the wrapper\n");

}
