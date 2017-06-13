include ../Makefile.common

all: compilejava compilec

compilec:
	g++ -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo025_HelloWorld.cpp c/Simple.cpp -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo025/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo025.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo025.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo025_HelloWorld.h
	-rm -rf lib/*
