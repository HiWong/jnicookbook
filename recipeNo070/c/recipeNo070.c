#include <stdio.h>
#include <stdlib.h>
#include "data_struct.h"

/* All we are doing here is allocating data
   inside structure passed as argument */

int retrieveData(struct DataStruct *ptr) {
 
  int *array = malloc(sizeof(int) * 4);

  if( array == NULL ) {

    return 1;

  }

  array[0] = 1;
  array[1] = 2;
  array[2] = 3;
  array[3] = 4;
 
  ptr->data   = (void*) array;
  
  ptr->width  = 2;
  ptr->height = 2;

  return 0;

}

