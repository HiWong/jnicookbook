include ../Makefile.common

LD_FLAGS_JAVA=-L$(JAVA_SERVER_LIB) -ljvm
LD_FLAGS=-L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk
LD_FLAGS+=-arch x86_64 
LD_FLAGS+=-macosx_version_min 10.14.0 -lSystem
LD_FLAGS+=$(LD_FLAGS_JAVA)

all: main.$(ARCH) compilejava

dirs:
	mkdir -p recipeNo066.app/Contents/Resources
	mkdir -p recipeNo066.app/Contents/MacOS
	cp Info.plist recipeNo066.app/Contents
	
compilejava: dirs
	$(JAVA_HOME)/bin/javac -d recipeNo066.app/Contents/Resources/target java/recipeNo066/Main.java

lib/recipeNo066_main.o: c/recipeNo066_main.m dirs
	$(CC) -g -o lib/recipeNo066_main.o -c c/recipeNo066_main.m \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: lib/recipeNo066_main.o
	ld -o recipeNo066.app/Contents/MacOS/recipeNo066 \
	$(LD_FLAGS) \
	-framework Foundation \
	lib/recipeNo066_main.o

install: main.darwin compilejava
	-$(JAVA_HOME)/bin/jlink --add-modules java.base --output recipeNo066.app/Contents/Resources/jvm
	-install_name_tool -add_rpath @executable_path/../Resources/jvm/lib/server recipeNo066.app/Contents/MacOS/recipeNo066

test: install
	./recipeNo066.app/Contents/MacOS/recipeNo066

clean:
	-rm -rfv target/*
	-rm -rf lib/*
	-rm -rf recipeNo066.app

