[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
<p align="center">
  <a href="http://jnicookbook.owsiak.org/"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/JNICookbook.png"></a>
</p>

Inside this repository you can find JNI related codes that I have collected over years of working with JNI. You can also find a companion book, where I describe some topics in details.  JNI Cookbook page can be found here: [JNI Cookbook](http://jnicookbook.owsiak.org)

# Building and running

The easiest way to build and run codes is to clone the repo and run all tests.

    > git clone https://github.com/mkowsiak/jnicookbook.git
    > cd jnicookbook
    > make all
    > make test
    > make clean
    
Remember that you can always run each and every sample separatelly. Simply call `make` inside given recipe. Let's say you want to run `recipeNo001`. All you have to do is to run

    > cd jnicookbook/recipeNo001
    > make
    /Library/Java/JavaVirtualMachines/jdk1.8.0_192.jdk...
    ...
    > make test
    /Library/Java/JavaVirtualMachines/jdk1.8.0_192.jdk...
    library: :./lib
    Hello world!
    
# Ready for Java 10 and onwards

JNI Cookbook samples were adapted to Java 10 release. You shouldn't experience any issues while working with most recent release of Java. If you have stuck with Java 8 - for any reasons - you should be able to use samples as well.

# Debugging

Debugging JNI code is not quite like sitting on cloud nine. You have to attach to JVM where JNI code is running and debug native code using external tools (e.g.: `gdb`, `CLion`). When it comes to debugging JNI code, you can find some hints inside JNICookbook as well. Even more, you can find a screencast that demonstates how to debug JNI code using `IntelliJ IDEA` and `CLion`

<p align="center">
  <a href="https://youtu.be/8Cjeq4l5COU"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/debug.png"></a>
</p>

# Requirements

At the moment, JNI Cookbook targets Linux and macOS. It should work on both platforms without any issues.

# Table of content

|Recipe № | Short description |
|---|---|
|[recipe № 001](http://jnicookbook.owsiak.org/recipe-No-001/)|running simple JNI code [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo001)|
|[recipe № 002](http://jnicookbook.owsiak.org/recipe-No-002/)|passing int value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo002)|
|[recipe № 003](http://jnicookbook.owsiak.org/recipe-No-003/)|passing double value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo003)|
|[recipe № 004](http://jnicookbook.owsiak.org/recipe-No-004/)|passing long value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo004)|
|[recipe № 005](http://jnicookbook.owsiak.org/recipe-No-005/)|passing short value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo005)|
|[recipe № 006](http://jnicookbook.owsiak.org/recipe-No-006/)|passing char value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo006)|
|[recipe № 007](http://jnicookbook.owsiak.org/recipe-No-007/)|passing byte value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo007)|
|[recipe № 008](http://jnicookbook.owsiak.org/recipe-No-008/)|passing boolean value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo008)|
|[recipe № 009](http://jnicookbook.owsiak.org/recipe-No-009/)|passing java.lang.String value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo009)|
|[recipe № 010](http://jnicookbook.owsiak.org/recipe-No-010/)|passing java.lang.String value from C to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo010)|
|[recipe № 011](http://jnicookbook.owsiak.org/recipe-No-011/)|passing primitive types from C to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo011)|
|[recipe № 012](http://jnicookbook.owsiak.org/recipe-No-012/)|passing primitives array from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo012)|
|[recipe № 013](http://jnicookbook.owsiak.org/recipe-No-013/)|passing primitives array from Java to C and back (commit changes) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo013)|
|[recipe № 014](http://jnicookbook.owsiak.org/recipe-No-014/)|passing memory allocated in C back to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo014)|
|[recipe № 015](http://jnicookbook.owsiak.org/recipe-No-015/)|handling SIGSEGV/SIGBUS in JNI code (stop JVM from crashing) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo015)|
|[recipe № 016](http://jnicookbook.owsiak.org/recipe-No-016/)|handling exit calls from external library called via JNI (atexit) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo016)|
|[recipe № 017](http://jnicookbook.owsiak.org/recipe-No-017/)|handling exit calls from external library called via JNI (-Dexit) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo017)|
|[recipe № 018](http://jnicookbook.owsiak.org/recipe-No-018)|dynamic loading of library in JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo018)|
|[recipe № 019](http://jnicookbook.owsiak.org/recipe-No-019/)|throwing exception from C code [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo019)|
|[recipe № 020](http://jnicookbook.owsiak.org/recipe-No-020/)|accessing fields of object passed as argument [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo020)|
|[recipe № 021](http://jnicookbook.owsiak.org/recipe-No-021/)|calling function from different source file [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo021)|
|[recipe № 022](http://jnicookbook.owsiak.org/recipe-No-022/)|Java based daemon [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo022)|
|[recipe № 023](http://jnicookbook.owsiak.org/recipe-No-023/)|calling code from another shared library [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo023)|
|[recipe № 024](http://jnicookbook.owsiak.org/recipe-No-024/)|calling JNI methods from Threads and how to debug them using gdb [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo024)|
|recipe № 025|calling C++ code from C wrapper [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo025)|
|recipe № 026|passing 2D arrays from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo026)|
|[recipe № 027](http://jnicookbook.owsiak.org/recipe-no-027/)|Calling class methods from multiple threads [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo027)|
|recipe № 028|Calling JVM class from C (first draft for thread based computations) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo028)|
|[recipe № 029](http://jnicookbook.owsiak.org/recipe-no-029/)|Running Java as daemon – main daemon’s loop in Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo029)|
|[recipe № 030](http://jnicookbook.owsiak.org/recipe-no-030/)|Abstract method and native implementation [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo030)|
|recipe № 031|Running simple JNI code from inside JAR file [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo031)|
|recipe № 032|Calling JVM from multiple C threads [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo032)|
|recipe № 033|Comparing execution time of "Hello world!" executed from JNI/JNA/ProcessBuilder [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo033)|
|recipe № 034|Running simple JNI code from Outer class and Inner class [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo034)|
|recipe № 035|Running simple JNI code from inside JAR file with libraries it depends on [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo035)|
|recipe № 037|Passing HashMap to C code via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo037)|
|recipe № 038|Passing HashMap to C code via JNI (using two arrays) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo038)|
|recipe № 039|Calling (from C) Java method that returns 2D array [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo039)|
|recipe № 040|Passing ByteBuffer to C code via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo040)|
|recipe № 042|Passing Set of Strings to C code via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo042)|
|recipe № 043|Settings environment variable inside JVM via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo043)|
|recipe № 044|Getting info (inside JNI code) regarding current thread using java.lang.Thread [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo044)|
|[recipe № D001](http://jnicookbook.owsiak.org/recipe-No-D001/)|debugging JNI code with CLion (sample code)|
[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
