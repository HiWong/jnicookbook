#include <iostream>
#include <string>
#include "extern.h"
#include "Simple.h"

/* This code will be called from C. It's marked as extern "C" */
void testSimple() {
  jni::Simple two( 2 );
  two.showVal();
}

/* If you want to test it from CLI, go ahead */
int main()
{
  jni::Simple one( 1 );
  one.showVal();

  testSimple();

  return 0;
}


