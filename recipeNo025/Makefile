include ../Makefile.common

all: compilejava compilec

compilec:
	g++ -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo025_HelloWorld.cpp c/simple.cc c/main.cc -o lib/libHelloWorld.$(EXT)
	g++ -g -o lib/main c/simple.cc c/main.cc

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo025/HelloWorld.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo025.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo025_HelloWorld.h
	-rm -rf lib/*
