#include <string>
#include <jni.h> 

extern "C" {

#pragma pack(push,1)
typedef struct Data {
  int  field_1;
  int  field_2;
  unsigned int b_1;
  unsigned int b_2;
} Data;
#pragma pack(pop)

Data* GetDataAllocated()
{

  Data *result = (Data*)malloc(sizeof(Data));

  result->field_1 = 44;
  result->field_2 = 42;
  result->b_1 = JNI_TRUE;
  result->b_2 = JNI_FALSE;

  return result;
}


Data GetDataValue()
{

  Data retVal;

  retVal.field_1 = 44;
  retVal.field_2 = 42;
  retVal.b_1 = JNI_FALSE;
  retVal.b_2 = JNI_TRUE;

  return retVal;
}

}
