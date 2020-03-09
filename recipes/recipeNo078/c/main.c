#include "recipeNo078_HelloWorld.h"
#include <pthread.h>

int main() {
  
  size_t stack_size; 

  stack_size = pthread_get_stacksize_np(pthread_self());
  
  printf("[main] Stack size: %zd\n", stack_size); 
  
  Java_recipeNo078_HelloWorld_displayMessage(NULL, NULL);

}
  
