#include <stdio.h>
#include "jni.h"
#include "recipeNo021_HelloWorld.h"

void anotherFunction();

JNIEXPORT void JNICALL Java_recipeNo021_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");
	/* We are calling function from another source */

	anotherFunction();
}
