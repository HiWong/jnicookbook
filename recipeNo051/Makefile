include ../Makefile.common

all: main.$(ARCH) compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo051/Main.java

recipeNo051_main.o: c/recipeNo051_main.c
	$(CC) -g -o lib/recipeNo051_main.o -c c/recipeNo051_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: recipeNo051_main.o
	ld -o lib/recipeNo051_main \
	$(LD_FLAGS) \
	lib/recipeNo051_main.o

main.linux:
	$(CC) -g -o lib/recipeNo051_main c/recipeNo051_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo051_main

clean: clean-common

include ../Makefile.clean
