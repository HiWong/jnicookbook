#include <stdio.h>
#include "jni.h"
#include "recipeNo031_HelloWorld.h"

JNIEXPORT void JNICALL Java_recipeNo031_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");

}
