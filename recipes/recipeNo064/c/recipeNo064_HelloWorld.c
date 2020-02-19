#include <stdio.h>
#include "jni.h"
#include "recipeNo064_HelloWorld.h"

JNIEXPORT void JNICALL Java_recipeNo064_HelloWorld_displayMessage
  (JNIEnv * env, jclass obj) {

  printf ("Hello world!\n");

}
