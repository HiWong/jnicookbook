/* PassLongAsString.java */
package recipeNo058;

public class PassLongAsString {

  /* This is the native method we want to call */
  public static native void passULong(java.lang.String value);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassLongAsString");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    long value_min = 0;
    long value_max = 4294967295L;
    long value_max_1 = 4294967296L;

    long [] arr = { value_min, value_max, value_max_1 };

    for(int i=0; i < arr.length; i++) {
      System.out.println("I am passing from Java: " + arr[i]);
      PassLongAsString.passULong(java.lang.Long.toUnsignedString(arr[i]));
    }

  }
}
