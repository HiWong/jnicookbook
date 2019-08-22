#include <string>
#include <iostream>

class HelloWorld {
  public:
    bool displayMessageW(const std::wstring &str);
    bool displayMessage(const std::string &str);
};

bool HelloWorld::displayMessageW(const std::wstring &str)
{
  std::wcout << str << std::endl; 
  return true;
}

bool HelloWorld::displayMessage(const std::string &str)
{
  std::cout << str << std::endl; 
  return true;
}

extern "C" {

bool displayMessageWWrapper(wchar_t *str)
{
  HelloWorld hw;
  return hw.displayMessageW(std::wstring(str));
}

bool displayMessageWrapper(char *str)
{
  HelloWorld hw;
  return hw.displayMessage(std::string(str));
}



}

