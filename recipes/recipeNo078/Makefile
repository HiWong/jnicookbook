include ../Makefile.common

all: compilejava lib/libHelloWorld.$(EXT) lib/main

lib/libHelloWorld.$(EXT): c/recipeNo078_HelloWorld.c c/huge_static.c
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) $^ -o $@

lib/main: c/main.c
	cc -g -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -Llib -lHelloWorld $< -o $@

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo078/HelloWorld.java

test: test_ok test_fail

test_fail:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo078.HelloWorld

test_ok:
	$(JAVA_HOME)/bin/java -Xss2m -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo078.HelloWorld	

clean: clean-common
	$(call rm-test,c/recipeNo078_HelloWorld.h)
	-rm hs_err_*

include ../Makefile.clean
