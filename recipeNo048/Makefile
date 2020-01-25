include ../Makefile.common

all: compilejava compilec

compilec:
	c++ -std=c++11 -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo048_MapOfInts.cc -o lib/libMapOfInts.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo048/MapOfInts.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo048.MapOfInts

clean: clean-common
	$(call rm-test,c/recipeNo048_MapOfInts.h)

include ../Makefile.clean
