include ../Makefile.common

all: compilejava compilec

compilec:
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo033_HelloWorldJNI.c -o lib/libHelloWorldJNI.$(EXT)
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo033_HelloWorldJNA.c -o lib/libHelloWorldJNA.$(EXT)
	cc c/main.c -o lib/main

compilejava:
	$(JAVA_HOME)/bin/javac -d target -cp ./jar/jna-4.2.2.jar java/recipeNo033/HelloWorldJNA.java
	$(JAVA_HOME)/bin/javac -d target java/recipeNo033/HelloWorldJNI.java
	$(JAVA_HOME)/bin/javac -d target java/recipeNo033/HelloWorldProcess.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo033.HelloWorldJNI

test: testprocess testjni testjna

testprocess:
	$(JAVA_HOME)/bin/java -Drecipe033=$(PWD)/lib/ -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo033.HelloWorldProcess $(RECIPE_NO_033_ITER)

testjni:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo033.HelloWorldJNI $(RECIPE_NO_033_ITER)

testjna:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp ./lib:target:./jar/jna-4.2.2.jar recipeNo033.HelloWorldJNA $(RECIPE_NO_033_ITER)

clean:
	-rm -rfv target/*
	-rm c/recipeNo033_HelloWorldJNI.h
	-rm -rf lib/*
