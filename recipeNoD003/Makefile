include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNoD003_AllocateMemory.c -o lib/libAllocateMemory.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNoD003/AllocateMemory.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNoD003.AllocateMemory 

clean:
	-rm -rfv target/*
	-rm c/recipeNoD003_AllocateMemory.h
	-rm -rf lib/*
