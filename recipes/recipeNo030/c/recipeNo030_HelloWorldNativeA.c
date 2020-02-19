#include "jni.h"
#include "recipeNo030_HelloWorldNativeA.h"

JNIEXPORT void JNICALL Java_recipeNo030_HelloWorldNativeA_displayMessage
  (JNIEnv * env, jobject obj) {

  printf ("NativeA\n");
}
