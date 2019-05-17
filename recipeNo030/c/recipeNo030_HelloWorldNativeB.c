#include "jni.h"
#include "recipeNo030_HelloWorldNativeB.h"

JNIEXPORT void JNICALL Java_recipeNo030_HelloWorldNativeB_displayMessage
  (JNIEnv * env, jobject obj) {

  printf ("NativeB\n");
}
