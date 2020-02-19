[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 057 - Hello Scala! I am passing structures!

This is my second sample related to Scala. This time I am mixing C++, Java (JNA) and Scala - boy there are lots of stuff here.

In this sample I call method (extern "C") that returns Data structure.


```
typedef struct data {
  int field;
} DATA;

DATA GetData(wchar_t *str);
```

I am returning `44` - as usual. Do you know what that number means? ;)

For smooth JNA call, I am introducing `recipeNo057.Data` class that will serve as structure holder. This class is used in Scala, later on.

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo057
    > make all
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
