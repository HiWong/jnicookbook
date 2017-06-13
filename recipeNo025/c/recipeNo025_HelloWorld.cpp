#include <stdio.h>
#include <jni.h>
#include "recipeNo025_HelloWorld.h"
#include "extern.h"

/* All we do here is letting developer know that we are running
   and call C++ code via testSimple() */
JNIEXPORT void JNICALL Java_recipeNo025_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");
	testSimple();

}
