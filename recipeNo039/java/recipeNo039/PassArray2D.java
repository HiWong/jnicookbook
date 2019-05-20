/* PassArray2D.java */
package recipeNo039;

public class PassArray2D {

  /* This is the native method we want to call */
  public native int displayArray2D();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassArray2D");
  }

  private double[][] doubleData = {{0, 1}, {2, 3}, {4, 5}};

  public double[][] getDoubleData() {
    return doubleData;
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    PassArray2D obj = new PassArray2D();
    obj.displayArray2D();
  }
}
