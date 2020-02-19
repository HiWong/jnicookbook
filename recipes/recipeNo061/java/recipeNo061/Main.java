package recipeNo061;

import java.util.Map;
import java.util.HashMap;

public class Main {

  public static void displayMap(HashMap<String, String> map) {
    System.out.println("[JAVA ] - I have received");
    for(Map.Entry<String, String> entry : map.entrySet()) {
      System.out.println(entry.getKey() + " -> " + entry.getValue());
    }
  }

  public static void main(String[] args) {
    HashMap<String, String> map = new HashMap<String, String>();
    map.put("k1", "v1");
    map.put("k2", "v2");

    Main.displayMap(map);
	
  }
}

