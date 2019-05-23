include ../Makefile.common

ifeq ($(ARCH),darwin)
  CFLAGS=-rpath @loader_path
  SHARED=-install_name libReloadLib.$(EXT)
else
  CFLAGS=
  SHARED=
endif

all: compilejava compilec

reloadlib:
	cc -g -shared -fpic c/foo.c -o lib/libReloadLib.$(EXT) $(SHARED)

compilec:
	# This is the final library for JNI calls
	cc -g -shared -fpic -I${JAVA_HOME}/include -I${JAVA_HOME}/include/$(ARCH) $(CFLAGS) c/recipeNo018_ReloadLib.c -o lib/libReloadLibJNI.$(EXT) 

compilejava:
	$(JAVA_HOME)/bin/javac -h c -d target java/recipeNo018/ReloadLib.java

test:	reloadlib
	$(JAVA_HOME)/bin/java -Djava.library.path=$(LD_LIBRARY_PATH):./lib -cp target recipeNo018.ReloadLib

clean:
	-rm -rfv target/*
	-rm c/recipeNo018_ReloadLib.h
	-rm -rf lib/*
