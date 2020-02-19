#include <stdio.h>
#include "jni.h"
#include "recipeNo034_HelloWorld.h"
#include "recipeNo034_HelloWorld_NativeWrapper.h"

JNIEXPORT void JNICALL Java_recipeNo034_HelloWorld_displayMessage
  (JNIEnv * env, jclass obj) {

  printf ("Hello world from enclosing class!\n");

}

JNIEXPORT void JNICALL
Java_recipeNo034_HelloWorld_00024NativeWrapper_displayMessage (JNIEnv * env,
                                                               jobject obj) {
  printf ("Hello world from inner class!\n");
}
