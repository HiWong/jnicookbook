# jnicookbook
JNI Cookbook samples

JNI Cookbook page can be found here: [JNI Cookbook](http://jnicookbook.owsiak.org)

This repository is a companion to a JNI Cook Book. You can find here all the samples used in the book.

    cd jnicookbook
    make all
    make test
    make clean

# Table of content

|Recipe № | Short description |
|---|---|
|[recipe № 001](http://jnicookbook.owsiak.org/recipe-No-001/)|running simple JNI code|
|[recipe № 002](http://jnicookbook.owsiak.org/recipe-No-002/)|passing int value from Java to C|
|[recipe № 003](http://jnicookbook.owsiak.org/recipe-No-003/)|passing double value from Java to C|
|[recipe № 004](http://jnicookbook.owsiak.org/recipe-No-004/)|passing long value from Java to C|
|[recipe № 005](http://jnicookbook.owsiak.org/recipe-No-005/)|passing short value from Java to C|
|[recipe № 006](http://jnicookbook.owsiak.org/recipe-No-006/)|passing char value from Java to C|
|[recipe № 007](http://jnicookbook.owsiak.org/recipe-No-007/)|passing byte value from Java to C|
|[recipe № 008](http://jnicookbook.owsiak.org/recipe-No-008/)|passing boolean value from Java to C|
|[recipe № 009](http://jnicookbook.owsiak.org/recipe-No-009/)|passing java.lang.String value from Java to C|
|[recipe № 010](http://jnicookbook.owsiak.org/recipe-No-010/)|passing java.lang.String value from C to Java|
|[recipe № 011](http://jnicookbook.owsiak.org/recipe-No-011/)|passing primitive types from C to Java|
|[recipe № 012](http://jnicookbook.owsiak.org/recipe-No-012/)|passing primitives array from Java to C|
|[recipe № 013](http://jnicookbook.owsiak.org/recipe-No-013/)|passing primitives array from Java to C and back (commit changes)|
|[recipe № 014](http://jnicookbook.owsiak.org/recipe-No-014/)|passing memory allocated in C back to Java|
|[recipe № 015](http://jnicookbook.owsiak.org/recipe-No-015/)|handling SIGSEGV/SIGBUS in JNI code (stop JVM from crashing)|
|[recipe № 016](http://jnicookbook.owsiak.org/recipe-No-016/)|handling exit calls from external library called via JNI (atexit)|
|[recipe № 017](http://jnicookbook.owsiak.org/recipe-No-017/)|handling exit calls from external library called via JNI (-Dexit)|
|[recipe № 018](http://jnicookbook.owsiak.org/recipe-No-018)|dynamic loading of library in JNI|
|[recipe № 019](http://jnicookbook.owsiak.org/recipe-No-019/)|throwing exception from C code|
|[recipe № 020](http://jnicookbook.owsiak.org/recipe-No-020/)|accessing fields of object passed as argument|
|[recipe № 021](http://jnicookbook.owsiak.org/recipe-No-021/)|calling function from different source file|
|[recipe № 022](http://jnicookbook.owsiak.org/recipe-No-022/)|Java based daemon|
|[recipe № 023](http://jnicookbook.owsiak.org/recipe-No-023/)|calling code from another shared library|
|[recipe № 024](http://jnicookbook.owsiak.org/recipe-No-024/)|calling JNI methods from Threads and how to debug them using gdb|
|recipe № 025|calling C++ code from C wrapper|
|recipe № 026|passing 2D arrays from Java to C|
|[recipe № 027](http://jnicookbook.owsiak.org/recipe-no-027/)|Calling class methods from multiple threads|
|recipe № 028|Calling JVM class from C (first draft for thread based computations)|
|[recipe № 029](http://jnicookbook.owsiak.org/recipe-no-029/)|Running Java as daemon – main daemon’s loop in Java|
|[recipe № 030](http://jnicookbook.owsiak.org/recipe-no-030/)|Abstract method and native implementation|
|recipe № 031|Running simple JNI code from inside JAR file|
|recipe № 032|Calling JVM from multiple C threads|
|recipe № 033|Comparing execution time of "Hello world!" executed from JNI/JNA/ProcessBuilder|
|recipe № 034|Running simple JNI code from Outer class and Inner class|
|recipe № 035|Running simple JNI code from inside JAR file with libraries it depends on|
|recipe № 037|Passing HashMap to C code via JNI|
|recipe № 038|Passing HashMap to C code via JNI (using two arrays)|
|recipe № 039|Calling (from C) Java method that returns 2D array |
|recipe № 040|Passing ByteBuffer to C code via JNI|
|recipe № 042|Passing Set of Strings to C code via JNI|
|recipe № 043|Settings environment variable inside JVM via JNI|
|recipe № 044|Getting info (inside JNI code) regarding current thread using java.lang.Thread|
|[recipe № D001](http://jnicookbook.owsiak.org/recipe-No-D001/)|debugging JNI code with CLion (sample code)|
