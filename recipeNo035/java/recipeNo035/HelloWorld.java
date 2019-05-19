/* HelloWorld.java */
package recipeNo035;

public class HelloWorld {

  // Location of native code will be passed from the
  // outside. In this case, Main class makes sure
  // to extract native code from JAR file
  String libFileLocation = null;

  /* This is the native method we want to call */
  public native void displayMessage();

  // In constructor we pass only location of the lib
  // file
  public HelloWorld(String lib) {
    this.libFileLocation = lib;
  }

  // This method will load native code
  // and call native method declared above
  public void callNativeMethod() {
    System.load(libFileLocation);
    displayMessage();
  }
}
