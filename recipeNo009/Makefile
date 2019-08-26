include ../Makefile.common

all: compilejava compilec

compilec:
	$(CC) -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo009_PassString.c -o lib/libPassString.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo009/PassString.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo009.PassString

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo009_PassString.h
	-rm -rfv lib/*
