include ../Makefile.common

all: compilejava compilec

compilec:
	c++ -std=c++11 -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo047_FillTheMap.cc -o lib/libFillTheMap.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo047/FillTheMap.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo047.FillTheMap

clean:
	-rm -rfv target/*
	-rm c/recipeNo047_FillTheMap.h
	-rm -rf lib/*
