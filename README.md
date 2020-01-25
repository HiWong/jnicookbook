[![Price](https://img.shields.io/badge/price-FREE-0098f7.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
[![GitHub](https://img.shields.io/badge/license-GPLv3-green.svg)](https://github.com/mkowsiak/jnicookbook/blob/master/LICENSE.md)
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
    /Library/Java/JavaVirtualMachines/jdk-13.0.1.jdk/...
    ...
    > make test
    /Library/Java/JavaVirtualMachines/jdk-13.0.1.jdk/...
    library: :./lib
    Hello world!

<p align="center">
  <img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/compile.gif">
</p>
    
# Ready for Java 8 and onwards

JNI Cookbook samples were adapted to `Java 13` release. You shouldn't experience any issues while working with most recent release of Java. If you have stuck with `Java 8` - for any reasons - you should be able to use samples as well.

JNI Cookbook samples were tested with:

* JDK 1.8
* JDK 9
* JDK 10
* JDK 11
* JDK 12 
* JDK 13

# Debugging

Debugging JNI code is not quite like sitting on cloud nine. You have to attach to JVM where JNI code is running and debug native code using external tools (e.g.: `gdb`, `CLion`). When it comes to debugging JNI code, you can find some hints inside JNICookbook as well. Even more, you can find a screencast that demonstates how to debug JNI code using `IntelliJ IDEA` and `CLion`

<p align="center">
  <a href="https://youtu.be/8Cjeq4l5COU"><img src="https://raw.githubusercontent.com/mkowsiak/jnicookbook/master/image/CLion.gif"></a>
</p>

# Requirements

At the moment, JNI Cookbook targets Linux and macOS. It should work on both platforms without any issues.

# Setting up macOS system for JNI Cookbook

Make sure to install [XCode](https://itunes.apple.com/pl/app/xcode/id497799835?mt=12). Once installed, perform installation of `Command Line Tools`.

Make sure to install [OpenJDK](https://download.java.net/java/GA/jdk13.0.2/d4173c853231432d94f001e99d882ca7/8/GPL/openjdk-13.0.2_osx-x64_bin.tar.gz) or [Java SE Development Kit 13](https://www.oracle.com/technetwork/java/javase/downloads/jdk13-downloads-5672538.html)).

Once installed, make sure to set `JAVA_HOME` following way

```
export JAVA_HOME=$(/usr/libexec/java_home -v 13)
```

# Setting up Ubuntu system for JNI Cookbook

```
sudo apt install openjdk-13-jdk
sudo apt install git
sudo apt install make
sudo apt install gcc
sudo apt install g++

# Inside JNI Cookbook, all the Java stuff is based on JAVA_HOME
# variable - you need it inside the env.
export JAVA_HOME=`readlink -f $(which java) | sed 's|/bin/java||'`

# We need ./lib on LD_LIBRARY_PATH
# Rememer that inside JNI code we no longer use java.library.path
# when it comes to resolving location of the shared library.
# Inside JNI we base on system's way of locating the lib.
export LD_LIBRARY_PATH=./lib:${LD_LIBRARY_PATH}
```

# Setting up Scala

JNI Cookbook contains `Scala` based samplesi. These samples are using `JNA` to call native code. Please make sure to install most recent version of `Scala` and `sbt`. This will allow you to avoid following error:

```
Exception in thread "main" java.io.IOError: 
    java.lang.RuntimeException: /packages cannot be represented as URI
```

At the time of writing these versions were, respectivelly: [Scala 2.13.1](https://downloads.lightbend.com/scala/2.13.1/scala-2.13.1.tgz) and [sbt 1.3.7](https://piccolo.link/sbt-1.3.7.tgz).

# Table of content

|Recipe № | Short description |
|---|---|
|[recipe&nbsp;№&nbsp;001](http://jnicookbook.owsiak.org/recipe-No-001/)|running simple JNI code [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo001)|
|[recipe&nbsp;№&nbsp;002](http://jnicookbook.owsiak.org/recipe-No-002/)|passing int value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo002)|
|[recipe&nbsp;№&nbsp;003](http://jnicookbook.owsiak.org/recipe-No-003/)|passing double value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo003)|
|[recipe&nbsp;№&nbsp;004](http://jnicookbook.owsiak.org/recipe-No-004/)|passing long value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo004)|
|[recipe&nbsp;№&nbsp;005](http://jnicookbook.owsiak.org/recipe-No-005/)|passing short value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo005)|
|[recipe&nbsp;№&nbsp;006](http://jnicookbook.owsiak.org/recipe-No-006/)|passing char value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo006)|
|[recipe&nbsp;№&nbsp;007](http://jnicookbook.owsiak.org/recipe-No-007/)|passing byte value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo007)|
|[recipe&nbsp;№&nbsp;008](http://jnicookbook.owsiak.org/recipe-No-008/)|passing boolean value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo008)|
|[recipe&nbsp;№&nbsp;009](http://jnicookbook.owsiak.org/recipe-No-009/)|passing java.lang.String value from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo009)|
|[recipe&nbsp;№&nbsp;010](http://jnicookbook.owsiak.org/recipe-No-010/)|passing java.lang.String value from C to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo010)|
|[recipe&nbsp;№&nbsp;011](http://jnicookbook.owsiak.org/recipe-No-011/)|passing primitive types from C to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo011)|
|[recipe&nbsp;№&nbsp;012](http://jnicookbook.owsiak.org/recipe-No-012/)|passing primitives array from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo012)|
|[recipe&nbsp;№&nbsp;013](http://jnicookbook.owsiak.org/recipe-No-013/)|passing primitives array from Java to C and back (commit changes) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo013)|
|[recipe&nbsp;№&nbsp;014](http://jnicookbook.owsiak.org/recipe-No-014/)|passing memory allocated in C back to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo014)|
|[recipe&nbsp;№&nbsp;015](http://jnicookbook.owsiak.org/recipe-No-015/)|handling SIGSEGV/SIGBUS in JNI code (stop JVM from crashing) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo015)|
|[recipe&nbsp;№&nbsp;016](http://jnicookbook.owsiak.org/recipe-No-016/)|handling exit calls from external library called via JNI (atexit) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo016)|
|[recipe&nbsp;№&nbsp;017](http://jnicookbook.owsiak.org/recipe-No-017/)|handling exit calls from external library called via JNI (-Dexit) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo017)|
|[recipe&nbsp;№&nbsp;018](http://jnicookbook.owsiak.org/recipe-No-018)|dynamic loading of library in JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo018)|
|[recipe&nbsp;№&nbsp;019](http://jnicookbook.owsiak.org/recipe-No-019/)|throwing exception from C code [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo019)|
|[recipe&nbsp;№&nbsp;020](http://jnicookbook.owsiak.org/recipe-No-020/)|accessing fields of object passed as argument [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo020)|
|[recipe&nbsp;№&nbsp;021](http://jnicookbook.owsiak.org/recipe-No-021/)|calling function from different source file [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo021)|
|[recipe&nbsp;№&nbsp;022](http://jnicookbook.owsiak.org/recipe-No-022/)|Java based daemon [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo022)|
|[recipe&nbsp;№&nbsp;023](http://jnicookbook.owsiak.org/recipe-No-023/)|calling code from another shared library [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo023)|
|[recipe&nbsp;№&nbsp;024](http://jnicookbook.owsiak.org/recipe-No-024/)|calling JNI methods from Threads and how to debug them using gdb [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo024)|
|recipe&nbsp;№&nbsp;025|calling C++ code from C wrapper [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo025)|
|recipe&nbsp;№&nbsp;026|passing 2D arrays from Java to C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo026)|
|[recipe&nbsp;№&nbsp;027](http://jnicookbook.owsiak.org/recipe-no-027/)|Calling class methods from multiple threads [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo027)|
|recipe&nbsp;№&nbsp;028|Calling JVM class from C (first draft for thread based computations) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo028)|
|[recipe&nbsp;№&nbsp;029](http://jnicookbook.owsiak.org/recipe-no-029/)|Running Java as daemon – main daemon’s loop in Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo029)|
|[recipe&nbsp;№&nbsp;030](http://jnicookbook.owsiak.org/recipe-no-030/)|Abstract method and native implementation [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo030)|
|recipe&nbsp;№&nbsp;031|Running simple JNI code from inside JAR file [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo031)|
|recipe&nbsp;№&nbsp;032|Calling JVM from multiple C threads [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo032)|
|recipe&nbsp;№&nbsp;033|Comparing execution time of "Hello world!" executed from JNI/JNA/ProcessBuilder [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo033)|
|recipe&nbsp;№&nbsp;034|Running simple JNI code from Outer class and Inner class [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo034)|
|recipe&nbsp;№&nbsp;035|Running simple JNI code from inside JAR file with libraries it depends on [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo035)|
|recipe&nbsp;№&nbsp;037|Passing HashMap to C code via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo037)|
|recipe&nbsp;№&nbsp;038|Passing HashMap to C code via JNI (using two arrays) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo038)|
|recipe&nbsp;№&nbsp;039|Calling (from C) Java method that returns 2D array [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo039)|
|recipe&nbsp;№&nbsp;040|Passing ByteBuffer to C code via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo040)|
|recipe&nbsp;№&nbsp;042|Passing Set of Strings to C code via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo042)|
|recipe&nbsp;№&nbsp;043|Settings environment variable inside JVM via JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo043)|
|recipe&nbsp;№&nbsp;044|Getting info (inside JNI code) regarding current thread using java.lang.Thread [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo044)|
|[recipe&nbsp;№&nbsp;045](http://jnicookbook.owsiak.org/recipe-no-045/)|Returning vector<vector<float> > from C++ to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo045)|
|recipe&nbsp;№&nbsp;046|Filling java.util.List (passed to JNI) with data - inside C++ [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo046)|
|recipe&nbsp;№&nbsp;047|Filling java.util.HashMap (passed to JNI) with data - inside C++ [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo047)|
|recipe&nbsp;№&nbsp;048|Returning map<int, int> from C++ to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo048)|
|recipe&nbsp;№&nbsp;049|Redirecting JVM's System.out to file inside C code [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo049)|
|recipe&nbsp;№&nbsp;050|How to find location of JAR from JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo050)|
|recipe&nbsp;№&nbsp;051|Very simple, Java based, 'Hello world' code - calling it from C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo051)|
|recipe&nbsp;№&nbsp;052|Registering native symbols without System.load [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo052)|
|recipe&nbsp;№&nbsp;053|Accessing elements of array - GetByteArrayElements vs. GetPrimitiveArrayCritical [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo053)|
|recipe&nbsp;№&nbsp;054|Hello Scala! [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo054)|
|recipe&nbsp;№&nbsp;055|Unboxing primitive types from wrapper objects - method per type [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo055)|
|recipe&nbsp;№&nbsp;056|Unboxing primitive types from wrapper objects - one method and IsInstanceOf [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo056)|
|recipe&nbsp;№&nbsp;057|Hello Scala! I am passing structures! [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo057)|
|recipe&nbsp;№&nbsp;058|Passing "unsigned long" to JNI [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo058)|
|recipe&nbsp;№&nbsp;059|Using code from static library inside JNI based code [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo059)|
|recipe&nbsp;№&nbsp;060|How to run Java code (with Log4j) from C [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo060)|
|recipe&nbsp;№&nbsp;061|Passing std::map<std::string, std::string> from C++ to Java [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo061)|
|recipe&nbsp;№&nbsp;063|Accessing fields of inner class [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo063)|
|recipe&nbsp;№&nbsp;064|Running simple JNI code - using JDK9 modules [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo064)|
|recipe&nbsp;№&nbsp;065|Very simple, Java based, 'Hello world' code - calling it from Objective-C (macOS only) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo065)|
|recipe&nbsp;№&nbsp;066|Embedding JVM inside macOS application bundle and calling JVM from Objective-C (macOS only) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo066)|
|recipe&nbsp;№&nbsp;067|Iterating over objects inside java.util.List - using get method [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo067)|
|recipe&nbsp;№&nbsp;068|Iterating over objects inside java.util.List - using java.util.Iterator [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo068)|
|recipe&nbsp;№&nbsp;069|Iterating over objects inside array of Objects (SimpleBean[]) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNo069)|
|[recipe&nbsp;№&nbsp;D001](http://jnicookbook.owsiak.org/recipe-No-D001/)|debugging JNI code with CLion [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNoD001)|
|recipe&nbsp;№&nbsp;D003|Profiling JNI based code using Instruments.app (macOS only) [[source]](https://github.com/mkowsiak/jnicookbook/tree/master/recipeNoD003)|

[![Download](https://img.shields.io/badge/download-click%20here-red.svg)](https://github.com/mkowsiak/jnicookbook/archive/master.zip)
