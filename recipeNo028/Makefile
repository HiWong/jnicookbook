include ../Makefile.common

ifeq ($(ARCH),darwin)
CC=llvm-gcc
MAC_OS_FLAGS=-rpath ${JAVA_HOME}/jre/lib/server -L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk -demangle -dynamic -arch x86_64 -macosx_version_min 10.13.0 -lSystem
else
CC=gcc
MAC_OS_FLAGS=
endif

all: main compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo028/Main.java
	$(JAVA_HOME)/bin/javac -h c -cp target -d target java/Main.java

recipeNo028_main.o: c/recipeNo028_main.c
	$(CC) -o lib/recipeNo028_main.o -c c/recipeNo028_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH) \

main: recipeNo028_main.o
	ld -o lib/recipeNo028_main -L${JAVA_HOME}/jre/lib/server/ \
	-ljvm \
        $(MAC_OS_FLAGS) \
	lib/recipeNo028_main.o

test:
	lib/recipeNo028_main	

clean:
	-rm -rfv target/*
	-rm -rf lib/*

