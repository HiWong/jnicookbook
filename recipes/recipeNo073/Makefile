include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo073_ErrnoGenerator.c -o lib/libErrnoGenerator.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo073/ErrnoWrapper.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo073/ErrnoGenerator.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo073.ErrnoGenerator

clean: clean-common
	$(call rm-test,c/recipeNo073_ErrnoGenerator.h)

include ../Makefile.clean
