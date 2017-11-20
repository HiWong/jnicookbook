include ../Makefile.common

all: compilejava compilec

compilec:
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo042_PassSet.c -o lib/libPassSet.$(EXT)


compilejava:
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo042/PassSet.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo042.PassSet

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo042.PassSet

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo042_PassSet.h
	-rm -rfv lib/*
