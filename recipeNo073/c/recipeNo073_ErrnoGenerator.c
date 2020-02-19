#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/errno.h>
#include "recipeNo073_ErrnoGenerator.h"

JNIEXPORT jobject JNICALL Java_recipeNo073_ErrnoGenerator_generateErrno
  (JNIEnv * env, jobject obj, jboolean shouldIFail) {

  // Heavily oversized buffer for errno description
  char errorBuffer[1024];

  FILE *fp = NULL;

  // Let's prepare result holder - ErrnoWrapper obj
  jclass    ewCls           = (*env)->FindClass( env, "recipeNo073/ErrnoWrapper" );
  jmethodID ewConstructorID = (*env)->GetMethodID( env, ewCls, "<init>", "(Ljava/lang/Object;ILjava/lang/String;)V" );
 
  // Setting errno to 0 - before system call
  // e.g.: The CERT ® C Coding Standard: 98 Rules for Developing Safe, Reliable, and Secure Systems, Second Edition
  // advises to do so
  errno = 0;

  // This one will most probably fail
  if(shouldIFail) {
    fp = fopen("/this_will_fail", "r");
  } else {
    fp = fopen("/tmp/some-file", "w");
  }

  jobject ewObj = NULL;

  // We will pass back either null, inside ErrnoWrapper.obj, or String "Hello from JNI!"
  if( fp == NULL ) {
    // Let's get errno and errno related message in case there was an error while
    // calling system routine
    sprintf( errorBuffer, "[C] %s: errno: %d message: %s", shouldIFail?"true ":"false", errno, strerror(errno) );
    printf("%s\n", errorBuffer);

    ewObj = (*env)->NewObject( env, ewCls, ewConstructorID, NULL, errno, (*env)->NewStringUTF( env, strerror(errno)) );
   
  } else {
    sprintf( errorBuffer, "[C] %s: everything is fine - don't check errno", shouldIFail?"true ":"false" );
    printf("%s\n", errorBuffer);

    ewObj = (*env)->NewObject( env, ewCls, ewConstructorID, (*env)->NewStringUTF( env, "Hello from JNI!"), 0, NULL);

  }

  return ewObj;

}

