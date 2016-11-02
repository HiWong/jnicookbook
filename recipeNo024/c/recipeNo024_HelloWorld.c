#include <stdio.h>
#include "jni.h"
#include "recipeNo024_HelloWorld.h"

void mode_1() {
	printf("Mode 1\n");
}

void mode_2() {
	printf("Mode 2\n");
}

void mode_3() {
	printf("Mode 3\n");
}

void mode_default() {
	printf("Mode default\n");
}

JNIEXPORT void JNICALL Java_recipeNo024_HelloWorld_displayMessage
  (JNIEnv *env, jclass obj, int mode) {

	while(1) {
		sleep(10);
		switch (mode) {
			case 1: mode_1();
				break;
			case 2: mode_2();
				break;
			case 3: mode_3();
				break;
			default:
				mode_default();
		}
	}
}
