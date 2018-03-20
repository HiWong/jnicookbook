include ../Makefile.common

all: compilejava compilec

ifeq ($(ARCH),darwin)
SHARED_OPTION=-dynamiclib
CC_LIB=$(CURDIR)/lib/libAnotherFunction.$(EXT)
else
SHARED_OPTION=-shared
CC_LIB=-L./lib -lAnotherFunction
endif

compilec:
	cc -g $(SHARED_OPTION) c/recipeNo023_AnotherFunction.c -o lib/libAnotherFunction.$(EXT)
	cc -g $(SHARED_OPTION) -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo023_HelloWorld.c $(CC_LIB) -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo023/HelloWorld.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path="$(CURDIR)/lib:$(CURDIR)/" -cp target recipeNo023.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo023_HelloWorld.h
	-rm -rf lib/*
