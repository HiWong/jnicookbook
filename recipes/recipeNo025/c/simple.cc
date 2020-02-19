#include <iostream>
#include <string>
#include "extern.h"
#include "Simple.h"

jni::Simple::Simple (int val):val (val) {
}

/* All we want to do, is to show value that we have passed
   from Java to C, and then, to C++ */
void jni::Simple::showVal () {
  std::cout << "You have passed: " << val << "!" << std::endl;
}

jni::Simple::~Simple () {
  std::cout << "done!" << std::endl;
}
