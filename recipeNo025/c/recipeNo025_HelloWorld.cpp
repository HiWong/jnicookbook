#include <stdio.h>
#include <jni.h>
#include "recipeNo025_HelloWorld.h"
#include "extern.h"

JNIEXPORT void JNICALL Java_recipeNo025_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");
	testSimple();

}
