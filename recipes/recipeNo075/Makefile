include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo075_Main.c -o lib/libBuildObject.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo075/Wrapper.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo075/Main.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo075.Main

clean: clean-common
	$(call rm-test,c/recipeNo075_Main.h)

include ../Makefile.clean
