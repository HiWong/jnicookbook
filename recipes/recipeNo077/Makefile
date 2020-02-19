include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo077_Main.c -o lib/libBuildObject.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo077/Wrapper.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo077/Main.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo077.Main

clean: clean-common
	$(call rm-test,c/recipeNo077_Main.h)

include ../Makefile.clean
