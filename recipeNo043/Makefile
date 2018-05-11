include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo043_setenv.c -o lib/libsetenv.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo043_getenv.c -o lib/libgetenv.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo043/GetEnv.java
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo043/SetEnv.java
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo043/Main.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo043.Main

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo043_GetEnv.h
	-rm c/recipeNo043_SetEnv.h
	-rm -rfv lib/*
