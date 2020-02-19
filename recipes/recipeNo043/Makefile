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

clean: clean-common
	$(call rm-test,c/recipeNo043_GetEnv.h)
	$(call rm-test,c/recipeNo043_SetEnv.h)

include ../Makefile.clean
