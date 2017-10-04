#include <stdio.h>
#include "jni.h"
#include "recipeNo033_HelloWorld.h"

JNIEXPORT void JNICALL Java_recipeNo033_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");

}
