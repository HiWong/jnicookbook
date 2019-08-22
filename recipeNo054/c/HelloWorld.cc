#include <string>
#include <iostream>

class HelloWorld {
  public:
    bool displayMessage(const std::wstring &str);
};

bool HelloWorld::displayMessage(const std::wstring &str)
{
  std::wcout << str << std::endl; 
  return true;
}

extern "C" {

bool displayMessageWrapper(wchar_t *str)
{
  HelloWorld hw;
  return hw.displayMessage(std::wstring(str));
}

}

