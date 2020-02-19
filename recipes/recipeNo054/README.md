[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 054 - Hello Scala!

This is my first sample related to Scala. And this time, I mix it with JNA. I am not quite a fan of JNA, but hey, why not trying something new :)

In this sample I call method of class HelloWorld.


```
class HelloWorld {
  public:
    bool displayMessage(wchar_t *str);
};

bool HelloWorld::displayMessage(wchar_t *str)
{
  ...
}
```

note that in order to make `C++` symbols visible for `JVM` we have to go via `extern C`. In this case, I have one to one mapping of `C` style method for each `C++` method inside `HelloWorld` class. In this case, there is only one function.

```
extern "C" {

bool displayMessageWrapper(wchar_t *str)
{
  ...
}

}
```

Once everything is compiled, you can see how `WString` object is passed to `C++` and used inside native code.

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo054
    > make all
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
