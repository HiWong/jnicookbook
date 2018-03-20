include ../Makefile.common

all: compilejava compilec

compilec:
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo038_PassHashMap.c -o lib/libPassHashMap.$(EXT)


compilejava:
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo038/PassHashMap.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo038.PassHashMap

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo038_PassHashMap.h
	-rm -rfv lib/*
