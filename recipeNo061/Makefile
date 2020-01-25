include ../Makefile.common

all: main.$(ARCH) compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo061/Main.java

main.darwin:
	clang++ -std=c++11 -stdlib=libc++ -g -o lib/recipeNo061_main c/recipeNo061_main.cc \
	$(JVM_INCLUDE) \
	$(LD_FLAGS_JAVA)

main.linux:
	g++ -std=c++14 -g -o lib/recipeNo061_main c/recipeNo061_main.cc \
	$(JVM_INCLUDE) \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo061_main

clean: clean-common

include ../Makefile.clean
