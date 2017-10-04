include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo033_HelloWorld.c -o lib/libHelloWorld.$(EXT)
	cc -g c/main.c -o lib/main

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo033/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo033.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Drecipe033=$(PWD) -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo033.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo033_HelloWorld.h
	-rm -rf lib/*
