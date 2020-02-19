/* FillTheMap sample */
package recipeNo047;

import java.util.HashMap;
import java.util.ArrayList;

public class FillTheMap {

  /* This is the native method we want to call */
  public static native void fillTheMap(HashMap map);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("FillTheMap");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    		LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    HashMap<Integer, Integer> result = new HashMap<Integer, Integer>();
    FillTheMap.fillTheMap(result);

    result.entrySet()
      .stream()
      .map(map -> String.format("key: %s value: %s", map.getKey(), map.getValue())).forEach(System.out::println);

    // Alternatively, you can print it non-stream based style
    for( Integer key : result.keySet()) {
      System.out.println(String.format("key: %s value: %s", key, result.get(key)));
    }
 
  }
}
