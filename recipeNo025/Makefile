include ../Makefile.common

all: compilejava compilec

compilec:
	g++ -O2 -fPIC -fpermissive -I. -I.. -I/usr/include -I/usr/local/include/libavcodec -I/usr/local/include/libavdevice -I/usr/local/include/libavformat -I/usr/local/include/libswscale -I/System/Library/Frameworks/JavaVM.framework/Versions/A/Headers -DUNIX -c -o c/recipeNo025_HelloWorld.o c/recipeNo025_HelloWorld.cpp
	g++ -g -shared c/recipeNo025_HelloWorld.o -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo025/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo025.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo025.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo025_HelloWorld.h
	-rm c/*.o
	-rm -rf lib/*
