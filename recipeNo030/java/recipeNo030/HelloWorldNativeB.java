/* HelloWorldNativeB.java */
package recipeNo030;

public class HelloWorldNativeB extends AbstractHelloWorld {

  /* This is the native method we want to call */
  protected native void displayMessage();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("HelloWorldNativeB");
  }
}
