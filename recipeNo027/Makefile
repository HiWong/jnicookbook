include ../Makefile.common

ifeq ($(ARCH),darwin)
CC=llvm-gcc
MAC_OS_FLAGS=-rpath ${JAVA_HOME}/lib/server -L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk -demangle -dynamic -arch x86_64 -macosx_version_min 10.13.0 -lSystem
else
CC=gcc
MAC_OS_FLAGS=
endif

all: main compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo027/Main.java

recipeNo027_main.o: c/recipeNo027_main.c
	$(CC) -o lib/recipeNo027_main.o -c c/recipeNo027_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main: recipeNo027_main.o
	ld -o lib/recipeNo027_main -L${JAVA_HOME}/lib/server/ \
	-ljvm \
	$(MAC_OS_FLAGS) \
	lib/recipeNo027_main.o

test:
	lib/recipeNo027_main	

clean:
	-rm -rfv target/*
	-rm -rf lib/*

