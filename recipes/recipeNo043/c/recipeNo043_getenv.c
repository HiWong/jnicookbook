#include <stdio.h>
#include <stdlib.h>
#include "jni.h"
#include "recipeNo043_GetEnv.h"

JNIEXPORT void JNICALL Java_recipeNo043_GetEnv_getenv
  (JNIEnv * env, jclass obj, jstring strkey) {

  // we have to get string bytes into C string
  const char *c_str_key;
  c_str_key = (*env)->GetStringUTFChars (env, strkey, NULL);
  if (c_str_key == NULL) {
    return;
  }

  char *value = getenv (c_str_key);

  printf ("Getting env variable: '%s' - it has value: '%s'\n", c_str_key,
          value);

  // after using it, remember to release the memory
  (*env)->ReleaseStringUTFChars (env, strkey, c_str_key);

}
