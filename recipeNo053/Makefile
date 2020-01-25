include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo053_Main.c -o lib/libMain.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo053/MainPrimitiveArray.java
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo053/MainArrayElements.java

test:
	time $(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo053.MainPrimitiveArray
	time $(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo053.MainArrayElements

clean: clean-common
	$(call rm-test,c/recipeNo053_MainPrimitiveArray.h)
	$(call rm-test,c/recipeNo053_MainArrayElements.h)

include ../Makefile.clean
