include ../Makefile.common

all: main compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo028/Main.java
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/Main.java

recipeNo028_main.o: c/recipeNo028_main.c
	$(CC) -g -o lib/recipeNo028_main.o -c c/recipeNo028_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH) \

main: recipeNo028_main.o
	ld -o lib/recipeNo028_main \
        $(LD_FLAGS) \
	lib/recipeNo028_main.o

test:
	lib/recipeNo028_main	

clean:
	-rm -rfv target/*
	-rm -rf lib/*

