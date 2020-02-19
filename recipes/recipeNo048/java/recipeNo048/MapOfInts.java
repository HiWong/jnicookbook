/* MapOfInts sample */
package recipeNo048;

import java.util.HashMap;
import java.lang.Integer;

public class MapOfInts {

  /* This is the native method we want to call */
  public static native HashMap<Integer, Integer> getMap();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("MapOfInts");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    		LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    HashMap<Integer, Integer> result = getMap();
    result.entrySet()
      .stream()
      .map(map -> String.format("key: %s value: %s", map.getKey(), map.getValue())).forEach(System.out::println);
  }
}
