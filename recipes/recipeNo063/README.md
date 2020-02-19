[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 063 - Accessing fields of inner class

In this sample you can find information on how to access fields of inner class.

We are working with the `OuterClass` defined following way

```
package recipeNo063;

public class OuterClass {

  public class InnerClass {
    public int icval = 42;
  }

  public int ocval = 44;
  public InnerClass ic = new InnerClass();

}
```

This sample is quite similar to sample <a href="ihttp://jnicookbook.owsiak.org/recipe-No-020/">recipe № 020</a>. The difference is we declare `InnerClass` inside `OuterClass`.

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo063
    > make all
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
