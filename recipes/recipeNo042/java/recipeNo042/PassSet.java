/* PassSet.java */
package recipeNo042;

import java.util.*;

public class PassSet {

  /* This is the native method we want to call */
  public static native int displaySet(Object obj);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassSet");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Create object to pass */
    Set<String> set = new HashSet<String>();
    set.add("value_a");
    set.add("value_b");
    set.add("value_c");

    /* Call to shared library */
    PassSet.displaySet(set);
  }
}
