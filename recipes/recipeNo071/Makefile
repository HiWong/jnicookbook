include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo071_ErrnoGenerator.c -o lib/libErrnoGenerator.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo071/ErrnoGenerator.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo071.ErrnoGenerator

clean: clean-common
	$(call rm-test,c/recipeNo071_ErrnoGenerator.h)

include ../Makefile.clean
