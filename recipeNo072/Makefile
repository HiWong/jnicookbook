include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo072_ErrnoGenerator.c -o lib/libErrnoGenerator.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo072/ErrnoException.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo072/ErrnoGenerator.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo072.ErrnoGenerator

clean: clean-common
	$(call rm-test,c/recipeNo072_ErrnoGenerator.h)

include ../Makefile.clean
