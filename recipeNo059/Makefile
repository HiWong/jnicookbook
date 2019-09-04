include ../Makefile.common

all: compilejava static_lib shared_lib

static_lib:
	cc -c c/recipeNo059_AnotherFunction.c -o lib/recipeNo059_AnotherFunction.o
	ar -rvs lib/libAnotherFunction.a lib/recipeNo059_AnotherFunction.o
shared_lib:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo059_HelloWorld.c $(CC_LIB) lib/libAnotherFunction.a -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo059/HelloWorld.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path="$(CURDIR)/lib:$(CURDIR)/" -cp target recipeNo059.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo059_HelloWorld.h
	-rm -rf lib/*
