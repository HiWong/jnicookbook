package recipeNo050;

import java.io.File;

public class Main {

  public static void main(String[] args) throws Exception {
    System.out.println(Main.path()); 
  }

  public static String path() throws Exception {
    return new File( Main.class.getProtectionDomain().getCodeSource().getLocation().toURI()).getPath();
  }
}
