include ../Makefile.common

all: main.$(ARCH) compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo049/Main.java

recipeNo049_main.o: c/recipeNo049_main.c
	$(CC) -g -o lib/recipeNo049_main.o -c c/recipeNo049_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: recipeNo049_main.o
	ld -o lib/recipeNo049_main \
	$(LD_FLAGS) \
	lib/recipeNo049_main.o

main.linux:
	$(CC) -g -o lib/recipeNo049_main c/recipeNo049_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo049_main	

clean:
	-rm -rfv target/*
	-rm -rf lib/*
	-rm jvm.log

