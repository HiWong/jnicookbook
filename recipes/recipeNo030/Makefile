include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo030_HelloWorldNativeA.c -o lib/libHelloWorldNativeA.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo030_HelloWorldNativeB.c -o lib/libHelloWorldNativeB.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo030/AbstractHelloWorld.java
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo030/HelloWorldNativeA.java
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo030/HelloWorldNativeB.java
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo030/Main.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo030.Main

clean: clean-common
	$(call rm-test,c/recipeNo030_HelloWorldNativeA.h)
	$(call rm-test,c/recipeNo030_HelloWorldNativeB.h)

include ../Makefile.clean
