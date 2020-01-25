include ../Makefile.common

all: compilejava compilec

compilec:
	c++ -std=c++11 -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo046_FillTheList.cc -o lib/libFillTheList.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo046/FillTheList.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo046.FillTheList

clean: clean-common
	$(call rm-test,c/recipeNo046_FillTheList.h)

include ../Makefile.clean
