#include <stdio.h>
#include "jni.h"
#include "recipeNo033_HelloWorldJNI.h"

JNIEXPORT void JNICALL Java_recipeNo033_HelloWorldJNI_displayMessageJNI
  (JNIEnv * env, jclass obj) {

  printf ("Hello world!\n");

}
