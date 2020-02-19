/* FillTheList sample */
package recipeNo046;

import java.util.List;
import java.util.ArrayList;

public class FillTheList {

  /* This is the native method we want to call */
  public static native void fillTheList(List list);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("FillTheList");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    		LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    List<Integer> result = new ArrayList<Integer>();
    FillTheList.fillTheList(result);

    for( Integer i : result ) {
      System.out.println( i );
    }
  }
}
