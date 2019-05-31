#include <vector>
#include "jni.h"
#include "recipeNo045_VectorOfVectors.h"
using namespace std;

JNIEXPORT jobject JNICALL Java_recipeNo045_VectorOfVectors_getVector
  (JNIEnv *env, jclass obj) {

  vector<vector<float> > vect { 
                                 { 1.1, 1.2, 1.3 }, 
                                 { 2.1, 2.2, 2.3 }, 
                                 { 3.1, 3.2, 3.3 } 
                              };

  jclass vectorClass = env->FindClass("java/util/Vector");
  if(vectorClass == NULL) {
    return NULL;                  // alternatively, throw exception (recipeNo019)
  }

  jclass floatClass = env->FindClass("java/lang/Float");
  if(vectorClass == NULL) {
    return NULL;                  // alternatively, throw exception (recipeNo019)
  }


  jmethodID vectorConstructorID = env->GetMethodID(vectorClass, "<init>", "()V");
  if(vectorConstructorID == NULL) {
    return NULL;                  // alternatively, throw exception (recipeNo019)
  }

  jmethodID addMethodID = env->GetMethodID(vectorClass, "add", "(Ljava/lang/Object;)Z");
  if(addMethodID == NULL) {
    return NULL;
  }

  jmethodID floatConstructorID = env->GetMethodID(floatClass, "<init>", "(F)V"); 
  if(floatConstructorID == NULL) {
    return NULL;
  }

  // Outer vector
  jobject outerVector = env->NewObject(vectorClass, vectorConstructorID);
  if(outerVector == NULL) {
    return NULL;                  // as above
  }

  for(vector<float> i : vect) {

    // Inner vector
    jobject innerVector = env->NewObject(vectorClass, vectorConstructorID);

    for(float f : i) {
      // Now, we have object created by Float(f) 
      jobject floatValue = env->NewObject(floatClass, floatConstructorID, f);
      if(floatValue == NULL) {
        return NULL;
      }

      env->CallBooleanMethod(innerVector, addMethodID, floatValue);
    }

    env->CallBooleanMethod(outerVector, addMethodID, innerVector);

  }

  env->DeleteLocalRef(vectorClass);
  env->DeleteLocalRef(floatClass);

  return outerVector;

}
