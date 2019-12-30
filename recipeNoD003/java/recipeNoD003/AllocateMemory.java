/* AllocateMemory.java */
package recipeNoD003;

public class AllocateMemory {

  /* This is the native method we want to call */
  public static native boolean allocate(int size);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("AllocateMemory");
  }

  public static void main(String[] args) {

    int i    = 0;
    int size = 2;

    /* This message will help you determine whether
       java.library.path is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    // Sky is the limit!
    while( i++ < 1000 ) {

      if(! AllocateMemory.allocate(size) ) {
        break;
      }
   
      size *= 2;

      try {
        Thread.sleep(5000);
      } catch(InterruptedException ex) {
        // I don't care
      }

    }
  }
}
