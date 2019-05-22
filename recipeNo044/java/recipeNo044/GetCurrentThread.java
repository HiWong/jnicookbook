/* GetCurrentThread sample */
package recipeNo044;

public class GetCurrentThread {

  /* This is the native method we want to call */
  public static native void displayMessage();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("GetCurrentThread");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    		LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    System.out.println(
        "[Java] name: "
            + Thread.currentThread().getName()
            + " id: "
            + Thread.currentThread().getId());
    GetCurrentThread.displayMessage();
  }
}
