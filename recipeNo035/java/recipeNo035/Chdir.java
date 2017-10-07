/* Chdir.java */
package recipeNo035;

public class Chdir {

  // Location of native code will be passed from the
  // outside. In this case, Main class makes sure
  // to extract native code from JAR file
  String libFileLocation = null;
  String workdir = null;

  /* This is the native method we want to call */
  public native void chdirwrapper(String location);

  // In constructor we pass only location of the lib
  // file
  public Chdir(String lib, String workdir) {
    this.libFileLocation = lib;
    this.workdir = workdir;
  }

  // This method will load native code
  // and call native method declared above
  public void callNativeMethod() {
    System.load(libFileLocation);
    chdirwrapper(workdir); 
  }

}

