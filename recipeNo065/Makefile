include ../Makefile.common

all: main.$(ARCH)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo065/Main.java

recipeNo065_main.o: c/recipeNo065_main.m
	$(CC) -g -o lib/recipeNo065_main.o -c c/recipeNo065_main.m \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: compilejava recipeNo065_main.o
	ld -o lib/recipeNo065_main \
	$(LD_FLAGS) \
	-framework Foundation \
	lib/recipeNo065_main.o

main.linux:
	@echo "Nothing to be done here. Sorry. This one is macOS specific."
	
test:
	lib/recipeNo065_main

clean: clean-common

include ../Makefile.clean
