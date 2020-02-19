#include <stdio.h>
#include "jni.h"
#include "recipeNo035_HelloWorld.h"
#include "shared_lib.h"

JNIEXPORT void JNICALL Java_recipeNo035_HelloWorld_displayMessage
  (JNIEnv * env, jclass obj) {

  printf ("Hello world from JNI!\n");
  messageFromSharedLib ();
}
