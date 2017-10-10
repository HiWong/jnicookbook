#include <stdio.h>
#include "jni.h"
#include "recipeNo037_PassHashMap.h"

JNIEXPORT int JNICALL Java_recipeNo037_PassHashMap_displayHashMap
  (JNIEnv *env, jclass obj, jobject objarg) {
	
  /* Get objarg's class - objarg is the one we pass from
     Java */
  jclass clsHashMap = (*env)->GetObjectClass(env, objarg); 

  /* Remember that you can alway get method signature using javap tool
     > javap -s -p java.util.HashMap | grep -A 1 key
         public java.util.Set<K> keySet();
           descriptor: ()Ljava/util/Set;
  */
 
  jmethodID midKeySet = 
    (*env)->GetMethodID(env, clsHashMap, "keySet", "()Ljava/util/Set;"); 

  /* We have to make sure that method exists */
  if (midKeySet == NULL) {
    return -1; /* method not found */ 
  } 

  /* Now, it's time for getting Set of keys */
  jobject objKeySet = (*env)->CallObjectMethod(env, objarg, midKeySet);

  /* Then, we can proceed to accessing keys */
  jclass clsSet = (*env)->GetObjectClass(env, objKeySet);

  /* The same story goes here - use javap to get propper descriptor
     > javap -s -p java.util.Set | grep -A 1 toArray
         public abstract java.lang.Object[] toArray();
           descriptor: ()[Ljava/lang/Object;
  */

  jmethodID midToArray =
    (*env)->GetMethodID(env, clsSet, "toArray", "()[Ljava/lang/Object;");

  if (midKeySet == NULL) {
    return -2; /* method not found */
  }

  jobjectArray arrayOfKeys = (*env)->CallObjectMethod(env, objKeySet, midToArray);

  int arraySize = (*env)->GetArrayLength(env, arrayOfKeys);

  for (int i=0; i < arraySize; ++i) 
  {
    jstring objKey = (*env)->GetObjectArrayElement(env, arrayOfKeys, i);
    const char* c_string_key = (*env)->GetStringUTFChars(env, objKey, 0);

    /* Once we have key, we can retrieve value for that key */
    jmethodID midGet =
      (*env)->GetMethodID(env, clsHashMap, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    
    /* It's time to get Value for Key */
    jobject objValue = (*env)->CallObjectMethod(env, objarg, midGet, objKey);
    const char* c_string_value = (*env)->GetStringUTFChars(env, objValue, 0);
  
    printf("[key, value] = [%s, %s]\n", c_string_key, c_string_value);

    (*env)->ReleaseStringUTFChars(env, objKey, c_string_key);
    (*env)->DeleteLocalRef(env, objKey);

    (*env)->ReleaseStringUTFChars(env, objValue, c_string_value);
    (*env)->DeleteLocalRef(env, objValue);
  }

  return 0;

}
