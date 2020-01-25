include ../Makefile.common

all: compilejava compilec

compilec:
	# This is the final library for JNI calls
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo019_ThrowException.c -o lib/libThrowException.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo019/ThrowException.java

test:	compilec compilejava
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo019.ThrowException

clean: clean-common
	$(call rm-test,c/recipeNo019_ThrowException.h)

include ../Makefile.clean
