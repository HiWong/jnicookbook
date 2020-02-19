#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/errno.h>
#include "recipeNo075_Main.h"

JNIEXPORT jobject JNICALL Java_recipeNo075_Main_buildObject
  (JNIEnv *env, jobject obj) {

  char* str =
  "The Son of a foreign mother, in his blood old heroes\n"
  "And his name will be forty and four";

  // Let's prepare result holder - Wrapper obj
  jclass    wCls           = (*env)->FindClass( env, "recipeNo075/Wrapper" );
  jmethodID wConstructorID = (*env)->GetMethodID( env, wCls, "<init>", "(ILjava/lang/String;)V" );

  // once we have everything in place, we can create new object and pass
  // it back to Java
  jobject wObj = (*env)->NewObject( env, wCls, wConstructorID, 44, (*env)->NewStringUTF( env, str ) );
   
  return wObj;

}

