/* HelloWorld.java */
package recipeNo001;

public class HelloWorld {

  /* This is the native method we want to call */
  public static native void displayMessage();

  public static native void cut(String audioPath, long starttime, long needtime, String outputPath);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("HelloWorld");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    		LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    HelloWorld.displayMessage();
    HelloWorld.cut("aa", 1, 2, "aaa");
  }
}
