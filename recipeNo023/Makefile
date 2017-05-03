include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -undefined dynamic_lookup c/recipeNo023_AnotherFunction.c -install_name libAnotherFunction.$(EXT) -o lib/libAnotherFunction.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo023_HelloWorld.c -L./lib -lAnotherFunction -install_name libHelloWorld.$(EXT) -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo023/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo023.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path="/Users/michalo/workspace/jnicookbook/recipeNo023/lib:/Users/michalo/workspace/jnicookbook/recipeNo023" -cp target recipeNo023.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo023_HelloWorld.h
	-rm -rf lib/*
