#include <map>
#include "jni.h"
#include "recipeNo047_FillTheMap.h"
using namespace std;

JNIEXPORT void JNICALL Java_recipeNo047_FillTheMap_fillTheMap
  (JNIEnv *env, jclass cls, jobject obj) {

  map<int, int> map;
  map[0] = 0;
  map[1] = 1;
  map[2] = 2;
  map[3] = 3;

  jclass mapClass = env->FindClass("java/util/Map");
  if(mapClass == NULL) {
    return;                  // alternatively, throw exception (recipeNo019)
  }

  jclass integerClass = env->FindClass("java/lang/Integer");
  if(integerClass == NULL) {
    return;                  // alternatively, throw exception (recipeNo019)
  }

  jmethodID putMethodID = env->GetMethodID(mapClass, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
  if(putMethodID == NULL) {
    return;                  //                 - || -  
  }

  jmethodID integerConstructorID = env->GetMethodID(integerClass, "<init>", "(I)V"); 
  if(integerConstructorID == NULL) {
    return;                  //                 - || -
  }

  for (auto const& pair: map) {
    jobject key = env->NewObject(integerClass, integerConstructorID, pair.first);
    jobject value = env->NewObject(integerClass, integerConstructorID, pair.second);
    if(key == NULL || value == NULL) {
      return;
    }
    env->CallObjectMethod(obj, putMethodID, key, value);
  }

  env->DeleteLocalRef(mapClass);
  env->DeleteLocalRef(integerClass);

}
