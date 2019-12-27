include ../Makefile.common

all: main.$(ARCH) compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo065/Main.java

recipeNo065_main.o: c/recipeNo065_main.m
	$(CC) -g -o lib/recipeNo065_main.o -c c/recipeNo065_main.m \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: recipeNo065_main.o
	ld -o lib/recipeNo065_main \
	$(LD_FLAGS) \
	-framework Foundation \
	lib/recipeNo065_main.o

main.linux:
	$(CC) -g -o lib/recipeNo065_main c/recipeNo065_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo065_main

clean:
	-rm -rfv target/*
	-rm -rf lib/*

