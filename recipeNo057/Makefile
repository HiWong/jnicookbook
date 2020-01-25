include ../Makefile.common

all: download_jna compilecc compilejava compilescala

compilec:
	cc -Wpadded -g -O0 -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/HelloWorld.c -o lib/libHelloWorld.$(EXT)

compilecc:
	c++ -Wpadded -std=c++11 -g -O0 -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) c/HelloWorld.cc -o lib/libHelloWorld.$(EXT)

compilejava:
	$(JAVA_HOME)/bin/javac -cp "./jar/jna-5.4.0.jar:target" -d target java/recipeNo057/Data.java
	$(JAVA_HOME)/bin/javac -cp "./jar/jna-5.4.0.jar:target" -d target java/recipeNo057/Main.java

compilescala:
	scalac -d target -classpath "./jar/jna-5.4.0.jar:target" scala/recipeNo057/HelloJNA.scala

download_jna:
	curl -s -z jar/jna-5.4.0.jar -o jar/jna-5.4.0.jar http://repo1.maven.org/maven2/net/java/dev/jna/jna/5.4.0/jna-5.4.0.jar 

test:
	scala -Djna.library.path="./lib" -classpath "./target:jar/jna-5.4.0.jar" recipeNo057.HelloJNA
	$(JAVA_HOME)/bin/java -Djna.library.path="./lib" -cp "./jar/jna-5.4.0.jar:target" recipeNo057.Main

clean: clean-common
	$(call rm-test,"jar/*")

include ../Makefile.clean
