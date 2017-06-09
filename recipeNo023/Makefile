include ../Makefile.common

all: compilejava compilec

ifeq ($(ARCH),darwin)
CC_MAC_OS=-undefined dynamic_lookup -install_name libAnotherFunction.$(EXT)
CC_MAC_OS_NAME=-install_name libHelloWorld.$(EXT)
endif

compilec:
	cc -g -shared -fpic c/recipeNo023_AnotherFunction.c $(CC_MAC_OS) -o lib/libAnotherFunction.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo023_HelloWorld.c -L./lib -lAnotherFunction $(CC_MAC_OS_NAME) -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo023/HelloWorld.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo023.HelloWorld

test:
	$(JAVA_HOME)/bin/java -Djava.library.path="/Users/michalo/workspace/jnicookbook/recipeNo023/lib:/Users/michalo/workspace/jnicookbook/recipeNo023" -cp target recipeNo023.HelloWorld

clean:
	-rm -rfv target/*
	-rm c/recipeNo023_HelloWorld.h
	-rm -rf lib/*
