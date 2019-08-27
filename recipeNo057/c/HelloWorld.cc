#include <string>

extern "C" {

typedef struct data {
  int field;
} DATA;
 
DATA GetData(wchar_t *str)
{

  DATA result;
  result.field = 44;

  return result;
}

}

