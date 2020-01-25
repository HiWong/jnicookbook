include ../Makefile.common

all: main.$(ARCH) compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo027/Main.java

recipeNo027_main.o: c/recipeNo027_main.c
	$(CC) -o lib/recipeNo027_main.o -c c/recipeNo027_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: recipeNo027_main.o
	ld -o lib/recipeNo027_main \
	$(LD_FLAGS) \
	lib/recipeNo027_main.o

main.linux:
	$(CC) -g -o lib/recipeNo027_main c/recipeNo027_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo027_main	

clean: clean-common

include ../Makefile.clean
