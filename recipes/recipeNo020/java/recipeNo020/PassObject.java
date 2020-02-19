/* PassObject.java */
package recipeNo020;

public class PassObject {

  /* This is the native method we want to call */
  public static native void displayObject(Object obj);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassObject");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    	LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Create object to pass */
    CustomClass cc = new CustomClass();
    cc.iVal = 42;
    cc.dVal = 3.14;
    cc.cVal = 'a';
    cc.bVal = true;
    cc.sVal = "Hello from the CustomClass";
    cc.oVal = new OtherClass();
    cc.oVal.sVal = "Hello from the OtherClass";

    /* Call to shared library */
    PassObject.displayObject(cc);
  }
}
