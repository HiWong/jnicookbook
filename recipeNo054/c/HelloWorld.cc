#include <string>
#include <iostream>

class HelloWorld {
  public:
    bool displayMessage(wchar_t *str);
};

bool HelloWorld::displayMessage(wchar_t *str)
{
  std::wcout << str << std::endl; 
  return true;
}

extern "C" {

bool displayMessageWrapper(wchar_t *str)
{
  HelloWorld hw;
  return hw.displayMessage(str);
}

}

