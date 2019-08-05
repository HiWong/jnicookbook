[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

# recipe № 050 - how to get location of JAR file

From time to time you would like to know what is the location of class loaded by class loader. When it comes to `JAR`, sometimes it's good to know it's exact location on file system. In `Java` it's fairly easy to achieve

```
return new File( Main.class
                .getProtectionDomain()
                .getCodeSource()
                .getLocation()
                .toURI())
                .getPath();
```

It may become a little bit cumbersome while you want to do it using `JNI` based calls. There is simply lots of code you have to write. Take a look at the sources inside `c` directory to get the feeling of how to do it.

# Building and running

The easiest way to build and run codes is to clone the repo and run the sample.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook/recipeNo050
    > make all
    > make test
    > make clean
    
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
