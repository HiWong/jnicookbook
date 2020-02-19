#include <stdio.h>
#include <stdlib.h>
#include "jni.h"
#include "recipeNoD003_AllocateMemory.h"

JNIEXPORT jboolean JNICALL Java_recipeNoD003_AllocateMemory_allocate
  (JNIEnv * env, jclass obj, jint size) {

  printf("Allocating memory: %u\n", size);
  char *ptr = malloc( size );
  if(ptr == NULL) {
    return JNI_FALSE;
  }
  return JNI_TRUE;
}
