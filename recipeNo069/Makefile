include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo069_PassList.c -o lib/libPassList.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo069/SimpleBean.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo069/PassList.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo069.PassList

debug:
	lldb -- $(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo069.PassList

clean:
	-rm -rfv target/*
	-rm c/recipeNo069_PassList.h
	-rm -rf lib/*
