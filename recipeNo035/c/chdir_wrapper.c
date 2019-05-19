#include <unistd.h>

#include <stdio.h>
#include "jni.h"
#include "recipeNo035_Chdir.h"

JNIEXPORT void JNICALL Java_recipeNo035_Chdir_chdirwrapper
  (JNIEnv * env, jclass obj, jstring str) {

  // we have to get string bytes into C string
  const char *c_str;
  c_str = (*env)->GetStringUTFChars (env, str, NULL);
  if (c_str == NULL) {
    return;
  }

  printf ("Changing dir to: %s\n", c_str);

  chdir (c_str);

  // after using it, remember to release the memory
  (*env)->ReleaseStringUTFChars (env, str, c_str);
}
