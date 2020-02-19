include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo034_HelloWorld.c -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo034/HelloWorld.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo034.HelloWorld

clean: clean-common
	$(call rm-test,c/recipeNo034_HelloWorld.h)
	$(call rm-test,c/recipeNo034_HelloWorld_NativeWrapper.h)

include ../Makefile.clean
