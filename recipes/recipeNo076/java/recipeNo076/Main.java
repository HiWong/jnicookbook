/* Main.java */
package recipeNo076;

public class Main {

  public native Wrapper buildObject();

  static {
    System.loadLibrary("BuildObject");
  }

  public static void main(String[] args) {
  
    Main main = new Main();

    Wrapper result = main.buildObject();

    System.out.println("intVal: " + result.getIntVal());
    System.out.println("stringVal: \n"  + result.getStringVal());

  }
}
