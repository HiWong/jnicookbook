#include <stdio.h>
#include <jni.h>
#include "recipeNo025_HelloWorld.h"
#include "extern.h"
#include "Simple.h"

/* All we do here is letting developer know that we are running
   and call C++ code via testSimple() */
JNIEXPORT void JNICALL Java_recipeNo025_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj) {

	printf("Hello world!\n");

	// Instantiate object of class Simple and call method
	jni::Simple test( 3 );
	test.showVal();
	
	// Call via wrapper - in case you have to compile JNI using C
        testSimple();

}
