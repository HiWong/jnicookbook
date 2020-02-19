include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo074_ErrnoGenerator.c -o lib/libErrnoGenerator.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo074/ErrnoGenerator.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo074.ErrnoGenerator

clean: clean-common
	$(call rm-test,c/recipeNo074_ErrnoGenerator.h)

include ../Makefile.clean
