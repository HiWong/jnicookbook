/* GetEnv.java */
package recipeNo043;

public class GetEnv {

  /* This is the native method we want to call */
  public native void getenv(java.lang.String key);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("getenv");
  }

}

