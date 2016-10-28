include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic c/recipeNo023_AnotherFunction.c -o lib/libAnotherFunction.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo023_HelloWorld.c -L./lib -lAnotherFunction -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo023/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo023.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo023.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo023_HelloWorld.h
	-rm -rf lib/*
