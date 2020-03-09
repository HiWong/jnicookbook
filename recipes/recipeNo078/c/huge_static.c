#include <stdio.h>

void huge_static() {

  // I want to have 1MB data blob
  // inside function
  char huge_static_block[1024*1024];

  printf ("[huge_static] Hello world!\n");

}
