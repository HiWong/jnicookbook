include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo022_Daemon.c -o lib/libDaemon.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -d target java/recipeNo022/Daemon.java
	$(JAVA_HOME)/bin/javah -jni -d c -cp target recipeNo022.Daemon

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo022.Daemon

clean:
	-rm -rfv target/*
	-rm c/recipeNo022_Daemon.h
	-rm -rf lib/*
