include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo004_PassLong.c -o lib/libPassLong.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo004/PassLong.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo004.PassLong

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo004_PassLong.h
	-rm -rfv lib/*
