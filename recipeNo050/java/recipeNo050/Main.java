package recipeNo050;

import java.io.File;

public class Main {

  public static void main(String[] args) throws Exception {
    Main.path(); 
  }

  public static void path() throws Exception {
    Main main = new Main();
    String path = new File( main.getClass().getProtectionDomain().getCodeSource().getLocation().toURI()).getPath();
    System.out.println("Path from Java: " + path);
  }
}
