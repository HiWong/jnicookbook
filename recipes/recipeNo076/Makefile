include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo076_Main.c -o lib/libBuildObject.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo076/Wrapper.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo076/Main.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo076.Main

clean: clean-common
	$(call rm-test,c/recipeNo076_Main.h)

include ../Makefile.clean
