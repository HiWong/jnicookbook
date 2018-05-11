#include <stdio.h>
#include <stdlib.h>
#include "jni.h"
#include "recipeNo043_SetEnv.h"

JNIEXPORT void JNICALL Java_recipeNo043_SetEnv_setenv
  (JNIEnv *env, jclass obj, jstring strkey, jstring strval) {

	// we have to get string bytes into C string
	const char *c_str_key;
	c_str_key = (*env)->GetStringUTFChars(env, strkey, NULL);
	if(c_str_key == NULL) {
		return;
	}

	const char *c_str_val;
	c_str_val = (*env)->GetStringUTFChars(env, strval, NULL);
	if(c_str_val == NULL) {
		return;
	}
	
	printf("Setting env variable: '%s' with value: '%s'\n", c_str_key, c_str_val);

	// set variable; overwrite it in case it already
	// exists
	setenv(c_str_key, c_str_val, 1);

	// after using it, remember to release the memory
	(*env)->ReleaseStringUTFChars(env, strkey, c_str_key);
	(*env)->ReleaseStringUTFChars(env, strval, c_str_val);

}
