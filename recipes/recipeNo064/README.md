[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 064 - Simple `Hello world!` application - module based

This one is a super simple, plain stupid sample. What you can find here is a famous `Hello world!`. This time, `JNI` style. In this sample code I am calling very simple method inside `C` based shared library  - `displayMessage`. In addition to all that, this time we are going towards modules.

There are two modules: `recipeNo064` and `client`.

`recipeNo064` exports package that contains `HelloWorld` class.

```
package recipeNo064;

public class HelloWorld {

  public static native void displayMessage();
  static { System.loadLibrary("HelloWorld"); }
  
  public static void main(String[] args) {
    HelloWorld.displayMessage();
  }
}
```

`client` module depends on `recipeNo064` and calls method from `HelloWorld`.

```
package client;

import recipeNo064.*;

public class CallHelloWorld {
  public static void main(String [] arg) {
    HelloWorld.displayMessage();
  }
}
```

Somewhere, below all that there is a native code that we call.

```
JNIEXPORT void JNICALL Java_recipeNo001_HelloWorld_displayMessage
  (JNIEnv * env, jclass obj) {

  printf ("Hello world!\n");

}
```

As you can see, from the start, `JNI's` syntax is quite esoteric. However, remember that this is just a matter of convention. You can find it at [Oracle's pages](https://docs.oracle.com/en/java/javase/12/docs/specs/jni/index.html).

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo064
    > make all
    > make jar
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
