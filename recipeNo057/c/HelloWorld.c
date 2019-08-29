#include <jni.h> 
#include <stdbool.h>
#include <stdlib.h>

#pragma pack(push,1)
typedef struct Data {
  int  field_1;
  int  field_2;
} Data;
#pragma pack(pop)

Data* GetDataAllocated()
{

  Data *result = (Data*)malloc(sizeof(Data));

  result->field_1 = 44;
  result->field_2 = 42;

  return result;
}

static Data retVal;

Data GetDataValue()
{
  retVal.field_1 = 44;
  retVal.field_2 = 42;

  return retVal;
}

