include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo010_ReturnString.c -o lib/libReturnString.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo010/ReturnString.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo010.ReturnString

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo010_ReturnString.h
	-rm -rfv lib/*
