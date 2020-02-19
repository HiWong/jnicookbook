[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 052 - Calling native method without creating shared library

This sample shows how to register native method that is not exported via shared library. Let's say there is a very simple method (in Java class)

```
public native static int addOne(int a);
```

and we want to call it. However, for the sake of example, I will not use `System.load` or `System.loadLibrary` in order to load the native code. Instead, I will call `RegisterNatives` inside `C` part of the code.

> Look, ma, no System.load.
>
>   -- anonymous JNI developer

In this sample, most of the source code is related to initializing `JVM`, then, I am instantiating the class and calling the method `RegisterNatives`. This way, native symbols are available for `JVM` even though they don't follow typical naming convention for native code called from `JVM`.

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo052
    > make all
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
