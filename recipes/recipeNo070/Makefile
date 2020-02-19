include ../Makefile.common

all: download_jna compilec compilejava

dirs:
	mkdir -p jar

compilec:
	cc -Wpadded -g -O0 -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/recipeNo070.c -o lib/libRecipeNo070.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -cp "./jar/jna-5.4.0.jar:target" -d target java/recipeNo070/DataStruct.java
	$(JAVA_HOME)/bin/javac -cp "./jar/jna-5.4.0.jar:target" -d target java/recipeNo070/Main.java

download_jna: dirs
	curl -s -L -z jar/jna-5.4.0.jar -o jar/jna-5.4.0.jar https://repo1.maven.org/maven2/net/java/dev/jna/jna/5.4.0/jna-5.4.0.jar 

test:
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp ./lib:target:./jar/jna-5.4.0.jar recipeNo070.Main

clean: clean-common
	$(call rm-test,jar)

include ../Makefile.clean
