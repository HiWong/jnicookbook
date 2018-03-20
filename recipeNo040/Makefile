include ../Makefile.common

all: compilejava compilec

compilec:
	cc -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo040_PassByteBuffer.c -o lib/libPassByteBuffer.$(EXT)


compilejava:
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/recipeNo040/PassByteBuffer.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo040.PassByteBuffer

.PHONY: clean
clean:
	-rm -rfv target/*
	-rm c/recipeNo040_PassByteBuffer.h
	-rm -rfv lib/*
