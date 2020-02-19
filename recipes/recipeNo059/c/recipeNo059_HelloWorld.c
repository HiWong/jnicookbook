#include <stdio.h>
#include "jni.h"
#include "recipeNo059_HelloWorld.h"

void anotherFunction ();

JNIEXPORT void JNICALL Java_recipeNo059_HelloWorld_displayMessage
  (JNIEnv * env, jclass obj) {

  printf ("Hello world!\n");
  /* We are calling function from another source */

  anotherFunction ();
}
