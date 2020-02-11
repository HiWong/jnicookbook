include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo031_HelloWorld.c -o lib/libHelloWorld.lib

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo031/HelloWorld.java
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo031/Main.java

jar:
	$(JAVA_HOME)/bin/jar cfe recipeNo031.jar recipeNo031.Main -C target . lib	

test: compilejava compilec jar
	$(JAVA_HOME)/bin/java -jar recipeNo031.jar

clean: clean-common
	$(call rm-test,recipeNo031.jar)
	$(call rm-test,c/recipeNo031_HelloWorld.h)

include ../Makefile.clean
