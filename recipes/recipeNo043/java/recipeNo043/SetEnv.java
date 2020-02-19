/* SetEnv.java */
package recipeNo043;

public class SetEnv {

  /* This is the native method we want to call */
  public native void setenv(java.lang.String key, java.lang.String value);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("setenv");
  }
}
