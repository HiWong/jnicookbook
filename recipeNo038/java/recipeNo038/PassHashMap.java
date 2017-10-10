/* PassHashMap.java */
package recipeNo038;

import java.util.HashMap;

public class PassHashMap {

  /* This is the native method we want to call */
  public static native int displayHashMap(String [] keys, String [] values);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassHashMap");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " 
      + System.getProperty("java.library.path"));

    /* Create object to pass */
    HashMap<String, String> map = new HashMap<String, String>();
    map.put("key_a", "value_a");
    map.put("key_b", "value_b");
    map.put("key_c", "value_c");

    /* We have to convert HashMap to Array */
    String[] keys = map.keySet().toArray(new String[0]);
    String[] values = new String[keys.length];
    int idx = 0;
    for( String key : keys ) {
      values[idx++] = map.get(key);
    }

    /* Call to shared library */
    PassHashMap.displayHashMap(keys, values);
  }
}

