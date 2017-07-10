include ../Makefile.common

ifeq ($(ARCH),darwin)
CC=llvm-gcc
MAC_OS_FLAGS=-rpath ${JAVA_HOME}/jre/lib/server -L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.12.sdk -demangle -dynamic -arch x86_64 -macosx_version_min 10.12.0 -lSystem
else
CC=gcc
MAC_OS_FLAGS=
endif

all: compilejava compilec

compilec:
	$(CC) -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -L${JAVA_HOME}/jre/lib/amd64/server -ljvm -lpthread $(MAC_OS_FLAGS) c/recipeNo032_main.c -o lib/librecipeNo032.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo032/Main.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo032.Main

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo032.Main

clean:
	-rm -rfv target/*
	-rm -rf lib/*

