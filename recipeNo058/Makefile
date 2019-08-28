include ../Makefile.common

all: compilejava compilec

compilec:
	$(CC) -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo058_PassLongAsString.c -o lib/libPassLongAsString.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo058/PassLongAsString.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo058.PassLongAsString

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo058_PassLongAsString.h
	-rm -rfv lib/*

