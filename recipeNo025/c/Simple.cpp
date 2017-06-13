#include <iostream>
#include <string>
#include "extern.h"

/* Supper simple C++ class. We want to call it from Java */

class Simple {
  public:
    Simple(int val);
    void showVal();
    ~Simple();
  private:
    int val;
};

Simple::Simple(int val): val(val) {}

/* All we want to do, is to show value that we have passed
   from Java to C, and then, to C++ */ 
void Simple::showVal() {
  std::cout << "You have passed: " << val << "!" << std::endl;
}

Simple::~Simple() {
  std::cout << "done!" << std::endl;
}

/* This code will be called from C. It's marked as extern "C" */
void testSimple() {
  Simple two( 2 );
  two.showVal();
}

/* If you want to test it from CLI, go ahead */
int main()
{
  Simple one( 1 );
  one.showVal();

  testSimple();

  return 0;
}


