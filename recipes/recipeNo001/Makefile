include ../Makefile.common

all: compilejava lib/libHelloWorld.$(EXT)

lib/libHelloWorld.$(EXT): c/recipeNo001_HelloWorld.c
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) $< -o $@

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo001/HelloWorld.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo001.HelloWorld

clean: clean-common
	$(call rm-test,c/recipeNo001_HelloWorld.h)

include ../Makefile.clean
