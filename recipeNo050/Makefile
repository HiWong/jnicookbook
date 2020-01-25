include ../Makefile.common

all: main.$(ARCH) compilejava jar

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo050/Main.java

recipeNo050_main.o: c/recipeNo050_main.c
	$(CC) -g -o lib/recipeNo050_main.o -c c/recipeNo050_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: recipeNo050_main.o
	ld -o lib/recipeNo050_main \
	$(LD_FLAGS) \
	lib/recipeNo050_main.o

main.linux:
	$(CC) -g -o lib/recipeNo050_main c/recipeNo050_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo050_main

jar:
	jar cfm lib/libjava.jar Manifest.txt -C target recipeNo050/Main.class
	

clean: clean-common

include ../Makefile.clean

