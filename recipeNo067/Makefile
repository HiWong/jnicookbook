include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo067_PassList.c -o lib/libPassList.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo067/SimpleBean.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo067/PassList.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo067.PassList

clean:
	-rm -rfv target/*
	-rm c/recipeNo067_PassList.h
	-rm -rf lib/*
