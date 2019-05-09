#ifndef SIMPLE_H_
#define SIMPLE_H_

/* Supper simple C++ class. We want to call it from Java */

namespace jni {
  class Simple {
  public:
    Simple (int val);
    void showVal ();
     ~Simple ();
  private:
    int val;
  };
}
#endif
