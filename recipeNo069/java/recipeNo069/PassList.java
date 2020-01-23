/* PassList.java */
package recipeNo069;

import java.util.List;
import java.util.ArrayList;

public class PassList {

  /* This is the native method we want to call */
  public static native void passObjectsAsList(SimpleBean [] list);

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

    // We have to convert ArrayList -> SimpleBean []
    SimpleBean [] beanList = new SimpleBean[list.size()];
    list.toArray(beanList);

    /* Call to shared library */
    PassList.passObjectsAsList( beanList );
  }
}
