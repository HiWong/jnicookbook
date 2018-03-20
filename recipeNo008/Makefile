include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo008_PassBoolean.c -o lib/libPassBoolean.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo008/PassBoolean.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo008.PassBoolean

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo008_PassBoolean.h
	-rm -rfv lib/*
