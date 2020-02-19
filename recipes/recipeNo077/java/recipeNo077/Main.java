/* Main.java */
package recipeNo077;

public class Main {

  public native Wrapper buildObject();

  static {
    System.loadLibrary("BuildObject");
  }

  public static void main(String[] args) {
  
    Main main = new Main();

    Wrapper result = main.buildObject();

    System.out.println("stringVal: "  + result.getStringVal());

  }
}
