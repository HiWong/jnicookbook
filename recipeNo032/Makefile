include ../Makefile.common

ifeq ($(ARCH),darwin)
CC=cc
FLAGS=-I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -L${JAVA_HOME}/lib/server -ljvm -L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk -dynamic -arch x86_64 -lSystem -lpthread
else
CC=cc
FLAGS=-I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) -L${JAVA_HOME}/jre/lib/amd64/server -ljvm -lpthread
endif

all: compilejava compilec

compilec:
	$(CC) -g -shared -fpic $(FLAGS) c/recipeNo032_main.c -o lib/librecipeNo032.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo032/Main.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo032.Main

clean:
	-rm -rfv target/*
	-rm -rf lib/*

