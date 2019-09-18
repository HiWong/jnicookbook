include ../Makefile.common

all: main.$(ARCH) download_log4j compilejava

compilejava:
	$(JAVA_HOME)/bin/javac -cp jar/log4j-api-2.12.1.jar:jar/log4j-core-2.12.1.jar -d target java/recipeNo060/Main.java

recipeNo060_main.o: c/recipeNo060_main.c
	$(CC) -g -o lib/recipeNo060_main.o -c c/recipeNo060_main.c \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

download_log4j:
	curl -s -z jar/log4j-api-2.12.1.jar -o jar/log4j-api-2.12.1.jar http://repo.maven.apache.org/maven2/org/apache/logging/log4j/log4j-api/2.12.1/log4j-api-2.12.1.jar
	curl -s -z jar/log4j-core-2.12.1.jar -o jar/log4j-core-2.12.1.jar http://repo.maven.apache.org/maven2/org/apache/logging/log4j/log4j-core/2.12.1/log4j-core-2.12.1.jar

main.darwin: recipeNo060_main.o
	ld -o lib/recipeNo060_main \
	$(LD_FLAGS) \
	lib/recipeNo060_main.o

main.linux:
	$(CC) -g -o lib/recipeNo060_main c/recipeNo060_main.c \
	-I${JAVA_HOME}/include \
	-I${JAVA_HOME}/include/$(ARCH)/ \
	-pthread $(LD_FLAGS) 
	
test:
	lib/recipeNo060_main

clean:
	-rm -rfv target/*
	-rm -rfv jar/log4j-*
	-rm -rf lib/*

