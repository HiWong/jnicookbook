include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo024_HelloWorld.c -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo024/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo024.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo024.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo024_HelloWorld.h
	-rm -rf lib/*
