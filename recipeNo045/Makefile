include ../Makefile.common

all: compilejava compilec

compilec:
	c++ -std=c++11 -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo045_VectorOfVectors.cc -o lib/libVectorOfVectors.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo045/VectorOfVectors.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo045.VectorOfVectors

clean:
	-rm -rfv target/*
	-rm c/recipeNo045_VectorOfVectors.h
	-rm -rf lib/*
