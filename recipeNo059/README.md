[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 059 - Calling code from static library

In this sample, there are two source files

```
recipeNo059_AnotherFunction.c  \
recipeNo059_AnotherFunction.h --- external library we want to use in our code

recipeNo059_HelloWorld.c      --- this is a JNI code that will use external library
```

These files will serve different purposes. `AnotherFunction` will be used as source for the static library. `HelloWorld` will be used to generate shared library that will be oaded from Java code.

If you are looking for sample where multiple source files are compiled and put into single shared library, take a look here: <a href="http://jnicookbook.owsiak.org/recipe-No-021/">calling function from different source file</a>.

If you are looking for sample where one shared library (`JNI` based) calls another shared library, take a look here: <<a href="http://jnicookbook.owsiak.org/recipe-No-023/">calling code from another shared library</a>.

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo059
    > make all
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
