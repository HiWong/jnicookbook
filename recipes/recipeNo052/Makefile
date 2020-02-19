include ../Makefile.common

all: main.$(ARCH) compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo052/Main.java

recipeNo052_main.o: c/recipeNo052_main.c
	$(CC) -g -fPIC -o lib/recipeNo052_main.o -c c/recipeNo052_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: recipeNo052_main.o
	ld -o lib/recipeNo052_main \
	$(LD_FLAGS) \
	lib/recipeNo052_main.o

main.linux:
	$(CC) -g -o lib/recipeNo052_main c/recipeNo052_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo052_main

clean: clean-common

include ../Makefile.clean
