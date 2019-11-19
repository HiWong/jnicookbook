include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo063_Main.c -o lib/libInnerClass.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo063/OuterClass.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo063/Main.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo063.Main

clean:
	-rm -rfv target/*
	-rm c/recipeNo063_Main.h
	-rm -rf lib/*
