#include <stdio.h>
#include <jni.h>
#include "data.h"
#include "recipeNo025_HelloWorld.h"

JNIEXPORT void JNICALL Java_recipeNo025_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");

}
