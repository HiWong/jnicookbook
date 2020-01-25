include ../Makefile.common

all: compilejava compilec

compilec:
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo039_PassArray2D.c -o lib/libPassArray2D.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo039/PassArray2D.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo039.PassArray2D

clean: clean-common
	$(call rm-test,c/recipeNo039_PassArray2D.h)

include ../Makefile.clean
