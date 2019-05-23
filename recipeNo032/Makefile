include ../Makefile.common

all: compilejava compilec

compilec:
	$(CC) -g -shared -fpic $(JVM_INCLUDE) $(FLAGS) -lpthread c/recipeNo032_main.c -o lib/librecipeNo032.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo032/Main.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo032.Main

clean:
	-rm -rfv target/*
	-rm -rf lib/*
	-rm c/recipeNo032_Main.h

