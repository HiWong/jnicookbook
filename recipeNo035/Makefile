include ../Makefile.common

all: compilejava compilec jar

compilec:
	cc -shared -fpic c/shared_lib.c -o lib/libSharedLib.so
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/chdir_wrapper.c -o lib/libChdir.so
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -Llib -lSharedLib c/recipeNo035_HelloWorld.c -o lib/libHelloWorld.lib

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo035/HelloWorld.java
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo035/Chdir.java
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo035/Main.java

jar:
	jar cfe recipeNo035.jar recipeNo035.Main -C target . lib	

test: compilejava compilec jar
	$(JAVA_HOME)/bin/java -jar recipeNo035.jar

clean: clean-common
	$(call rm-test,recipeNo035.jar)
	$(call rm-test,c/recipeNo035_HelloWorld.h)
	$(call rm-test,c/recipeNo035_Chdir.h)

include ../Makefile.clean
