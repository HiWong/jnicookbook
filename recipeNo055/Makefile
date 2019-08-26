include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo055_PassObject.c -o lib/libPassObject.$(EXT)


compilejava:
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo055/PassObject.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo055.PassObject

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo055_PassObject.h
	-rm -rfv lib/*
