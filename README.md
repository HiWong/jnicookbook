# jnicookbook
JNI Cookbook samples

JNI Cookbook page can be found here: [JNI Cookbook](http://jnicookbook.owsiak.org)

This repository is a companion to a JNI Cook Book. You can find here all the samples used in the book.

    cd jnicookbook
    make all
    make test
    make clean

# Table of content

recipe № 001 - running simple JNI code

recipe № 002 - passing int value from Java to C

recipe № 003 - passing double value from Java to C

recipe № 004 - passing long value from Java to C

recipe № 005 - passing short value from Java to C

recipe № 006 - passing char value from Java to C

recipe № 007 - passing byte value from Java to C

recipe № 008 - passing boolean value from Java to C

recipe № 009 - passing java.lang.String value from Java to C

recipe № 010 - passing java.lang.String value from C to Java

recipe № 011 - passing primitive types from C to Java

recipe № 012 - passing primitives array from Java to C

recipe № 013 - passing primitives array from Java to C and back (commit changes)

recipe № 014 - passing memory allocated in C back to Java

recipe № 015 - handling SIGSEGV/SIGBUS in JNI code (stop JVM from crashing)

recipe № 016 - handling exit calls from external library called via JNI (atexit)

recipe № 017 - handling exit calls from external library called via JNI (-Dexit)

recipe № 018 - dynamic loading of library in JNI

recipe № 019 - throwing exception from C code

recipe № 020 - accessing fields of object passed as argument

recipe № 021 - calling function from different source file

recipe № 022 - Java based daemon

recipe № 023 - calling code from another shared library

recipe № 024 - calling JNI methods from Threads and how to debug them using gdb

recipe № 025 - calling C++ code from C wrapper

recipe № 026 - passing 2D arrays from Java to C

recipe № 027 - Calling class methods from multiple threads

recipe № 028 - Calling JVM class from C (first draft for thread based computations)

recipe № 029 - Running Java as daemon – main daemon’s loop in Java

recipe № 030 - Abstract method and native implementation

recipe № 031 - Running simple JNI code from inside JAR file

recipe № 032 - Calling JVM from multiple C threads

recipe № 033 - Comparing execution time of "Hello world!" executed from JNI/JNA/ProcessBuilder

recipe № 034 - Running simple JNI code from Outer class and Inner class

recipe № 035 - Running simple JNI code from inside JAR file with libraries it depends on

recipe № 037 - Passing HashMap to C code via JNI

recipe № 038 - Passing HashMap to C code via JNI (using two arrays)

recipe № 039 - Passing two dimentional array to C code via JNI

recipe № D001 - debugging JNI code with CLion (sample code)
