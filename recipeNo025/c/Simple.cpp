#include <iostream>
#include <string>
#include "extern.h"

class Simple {
public:
  Simple(int val);
  void showVal();
  ~Simple();
private:
  int val;
};

Simple::Simple(int val): val(val) {}
 
void Simple::showVal() {
  std::cout << "You have passed: " << val << "!" << std::endl;
}

Simple::~Simple() {
  std::cout << "done!" << std::endl;
}

void testSimple() {
  Simple two( 2 );
  two.showVal();
}

int main()
{
  Simple one( 1 );
  one.showVal();

  testSimple();

  return 0;
}


