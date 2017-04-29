include ../Makefile.common

all: main compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo027/Main.java

recipeNo027_main.o: c/recipeNo027_main.c
	llvm-gcc -o lib/recipeNo027_main.o -c c/recipeNo027_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/darwin/ \

main: recipeNo027_main.o
	ld -o lib/recipeNo027_main -L${JAVA_HOME}/jre/lib/server/ \
	-ljvm \
	-rpath ${JAVA_HOME}/jre/lib/server \
	-L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.12.sdk \
	-demangle -dynamic -arch x86_64 \
	-macosx_version_min 10.12.0 \
	-lSystem \
	-rpath ${JAVA_HOME}/jre/lib/server/ \
	lib/recipeNo027_main.o

test:
	lib/recipeNo027_main	

clean:
	-rm -rfv target/*
	-rm -rf lib/*

