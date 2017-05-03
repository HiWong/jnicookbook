include ../Makefile.common

all: main compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo028/Main.java
	$(JAVA_HOME)/bin/javac -cp target -d target java/Main.java

recipeNo028_main.o: c/recipeNo028_main.c
	llvm-gcc -o lib/recipeNo028_main.o -c c/recipeNo028_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/darwin/ \

main: recipeNo028_main.o
	ld -o lib/recipeNo028_main -L${JAVA_HOME}/jre/lib/server/ \
	-ljvm \
	-rpath ${JAVA_HOME}/jre/lib/server \
	-L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.12.sdk \
	-demangle -dynamic -arch x86_64 \
	-macosx_version_min 10.12.0 \
	-lSystem \
	-rpath ${JAVA_HOME}/jre/lib/server/ \
	lib/recipeNo028_main.o

test:
	lib/recipeNo028_main	

clean:
	-rm -rfv target/*
	-rm -rf lib/*

