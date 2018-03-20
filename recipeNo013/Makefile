include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo013_PassArrayBack.c -o lib/libPassArrayBack.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo013/PassArrayBack.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo013.PassArrayBack

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo013_PassArrayBack.h
	-rm -rfv lib/*
