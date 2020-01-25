include ../Makefile.common

all: compilejava compilec

compilec:
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo068_PassList.c -o lib/libPassList.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo068/SimpleBean.java
	$(JAVA_HOME)/bin/javac -h c -d target -cp target java/recipeNo068/PassList.java

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo068.PassList

debug:
	lldb -- $(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo068.PassList

clean: clean-common
	$(call rm-test,c/recipeNo068_PassList.h)

include ../Makefile.clean
