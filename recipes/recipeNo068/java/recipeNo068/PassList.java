/* PassList.java */
package recipeNo068;

import java.util.List;
import java.util.ArrayList;

public class PassList {

  /* This is the native method we want to call */
  public static native void passObjectsAsList(java.util.List list);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassList");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    ArrayList list = new ArrayList<SimpleBean>();
    list.add(new SimpleBean("bean one"));
    list.add(new SimpleBean("bean two"));
    list.add(new SimpleBean("bean three"));

    /* Call to shared library */
    PassList.passObjectsAsList(list);
  }
}
