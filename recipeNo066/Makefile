include ../Makefile.common

LD_FLAGS_JAVA=-L$(JAVA_SERVER_LIB) -ljvm
LD_FLAGS=-L/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk
LD_FLAGS+=-arch x86_64 
LD_FLAGS+=-macosx_version_min 10.14.0 -lSystem
LD_FLAGS+=$(LD_FLAGS_JAVA)

all: main.$(ARCH)

remove_dirs:
	rm -rf recipeNo066.app

create_dirs: remove_dirs
	mkdir -p recipeNo066.app/Contents/Resources
	mkdir -p recipeNo066.app/Contents/MacOS
	cp Info.plist recipeNo066.app/Contents
	
compilejava: create_dirs
	$(JAVA_HOME)/bin/javac -d target java/recipeNo066/Main.java

lib/recipeNo066_main.o: compilejava c/recipeNo066_main.m 
	$(CC) -g -o lib/recipeNo066_main.o -c c/recipeNo066_main.m \
    	-I${JAVA_HOME}/include \
    	-I${JAVA_HOME}/include/$(ARCH)/ \

main.darwin: lib/recipeNo066_main.o
	ld -o lib/recipeNo066_main  \
	$(LD_FLAGS) \
	-framework Foundation \
	lib/recipeNo066_main.o

main.linux:
	@echo "Nothing to be done here. Sorry. This one is macOS specific."

install: main.darwin compilejava
	-cp lib/recipeNo066_main recipeNo066.app/Contents/MacOS/recipeNo066
	-cp -r target recipeNo066.app/Contents/Resources/target
	-$(JAVA_HOME)/bin/jlink --add-modules java.base --output recipeNo066.app/Contents/Resources/jvm
	-install_name_tool -add_rpath @executable_path/../Resources/jvm/lib/server recipeNo066.app/Contents/MacOS/recipeNo066

test: install
	./recipeNo066.app/Contents/MacOS/recipeNo066

clean:
	test -z "target/*" || rm -rfv target/*
	test -z "lib/*" || rm -rf lib/*
	test -z "recipeNo066.app" || rm -rf recipeNo066.app

