include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic c/externalLib.c -o lib/libExternalLib.$(EXT)
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -o lib/libSigTerm.$(EXT) c/recipeNo016_SigTerm.c -Wl,-rpath,lib -Llib -lExternalLib 

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo016/SigTerm.java
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo016/SigTermNoHandler.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo016.SigTerm
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo016.SigTermNoHandler

clean: clean-common
	$(call rm-test,c/recipeNo016_SigTerm.h)
	$(call rm-test,c/recipeNo016_SigTermNoHandler.h)

include ../Makefile.clean
