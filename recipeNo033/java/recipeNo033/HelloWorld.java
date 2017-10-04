/* HelloWorld.java */
package recipeNo033;

import java.lang.ProcessBuilder;

public class HelloWorld {

  /* This is the native method we want to call */
  public static native void displayMessage();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("HelloWorld");
  }

  public static void main(String[] args) throws Exception {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

    /* Call to shared library */
    long javaStart = System.currentTimeMillis();
    for(int i=0;i<1000;i++) {
      HelloWorld.displayMessage();
    }
    long javaEnd = System.currentTimeMillis();

    long cStart = System.currentTimeMillis(); 
    for(int i=0;i<1000;i++) {
      ProcessBuilder pb =
        new ProcessBuilder(System.getProperty("recipe033") + "/lib/main").inheritIO();
      Process p = pb.start();
    }
    long cEnd = System.currentTimeMillis();

    System.out.println("JNI:     " + (javaEnd - javaStart));
    System.out.println("Process: " + (cEnd - cStart));
  }
}

