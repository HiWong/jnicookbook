include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo044_GetCurrentThread.c -o lib/libGetCurrentThread.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo044/GetCurrentThread.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo044.GetCurrentThread

clean: clean-common
	$(call rm-test,c/recipeNo044_GetCurrentThread.h)

include ../Makefile.clean

