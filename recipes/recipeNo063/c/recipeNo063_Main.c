#include <jni.h>

JNIEXPORT jint JNICALL Java_recipeNo063_Main_getInnerValueNative
  (JNIEnv *env, jobject obj, jobject outerClassObj) {

    // First of all, we have to access OuterClass and we need it's Class
    jclass cls_OuterClass = (*env) -> GetObjectClass( env, outerClassObj);

    // Once we have a Class of OuterClass we can get the value
    jfieldID fid_ocval    = (*env) -> GetFieldID( env, cls_OuterClass, "ocval", "I" );
    int value_ocval       = (*env) -> GetIntField( env, outerClassObj, fid_ocval); 

    // Now, let's descent. We have to go one level down. Straight to InnerClass
    // We have to get the object that represents InnerClass inside OuterClass 
    jfieldID fid_ic       = (*env) -> GetFieldID( env, cls_OuterClass, "ic", "LrecipeNo063/OuterClass$InnerClass;");
    jobject obj_ic        = (*env) -> GetObjectField( env, outerClassObj, fid_ic);

    // Once we have it, we can get it's Class object 
    jclass cls_InnerClass = (*env) -> GetObjectClass( env, obj_ic);

    // And access fields of the class InnerClass
    jfieldID fid_icval    = (*env) -> GetFieldID( env, cls_InnerClass, "icval", "I" ); 
    int value_icval       = (*env) -> GetIntField( env, obj_ic, fid_icval );

    // We can return sum of the fields to make sure we have accessed both
    // fields and we have correct values
    return value_ocval + value_icval;

}

