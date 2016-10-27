include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo021_HelloWorld.c c/recipeNo021_AnotherFunction.c -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo021/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo021.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo021.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo021_HelloWorld.h
	-rm -rf lib/*
