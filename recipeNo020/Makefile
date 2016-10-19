include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo020_PassObject.c -o lib/libPassObject.$(EXT)


compilejava:
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo020/OtherClass.java
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo020/CustomClass.java
	$(JAVA_HOME)/bin/javac -cp target -d target java/recipeNo020/PassObject.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo020.PassObject

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo020.PassObject

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo020_PassObject.h
	-rm -rfv lib/*
