include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo003_PassDouble.c -o lib/libPassDouble.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo003/PassDouble.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo003.PassDouble

clean:
	-rm -rfv target/*
	-rm c/recipeNo003_PassDouble.h
	-rm -rf lib/*
