#include <stdio.h>
#include <stdint.h>
#include "jni.h"
#include "recipeNo053_MainPrimitiveArray.h"
#include "recipeNo053_MainArrayElements.h"

void compute(uint8_t *input, uint64_t *output) {
  for(long i=0; i<64000000; i++) {
    output[i] = input[i] + 1;
  }
}

JNIEXPORT void JNICALL Java_recipeNo053_MainPrimitiveArray_getPrimitiveArray
  (JNIEnv *env, jclass cls, jbyteArray input, jlongArray output) {

  uint8_t  *in  = (uint8_t *)  (*env)->GetPrimitiveArrayCritical(env, input, 0);
  uint64_t *out = (uint64_t *) (*env)->GetPrimitiveArrayCritical(env, output, 0);

  compute(in, out);
  
  (*env)->ReleasePrimitiveArrayCritical(env, output, out, JNI_COMMIT);
  (*env)->ReleasePrimitiveArrayCritical(env, input, in, JNI_ABORT);

}

JNIEXPORT void JNICALL Java_recipeNo053_MainArrayElements_getArrayElements
  (JNIEnv *env, jclass cls, jbyteArray input , jlongArray output) {

  jbyte *in  = (*env)->GetByteArrayElements(env, input, 0);
  jlong *out = (*env)->GetLongArrayElements(env, output, 0);

  compute((uint8_t *) in, (uint64_t *) out);

  (*env)->ReleaseLongArrayElements(env, output, out, JNI_COMMIT);
  (*env)->ReleaseByteArrayElements(env, input, in, JNI_ABORT);

}

