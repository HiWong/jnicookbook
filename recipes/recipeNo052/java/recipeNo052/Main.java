package recipeNo052;

public class Main {

  public static native int addOne(int a);

  public static void displayMessage() {
    System.out.println("Hello from Java");
    System.out.println("I am calling method without System.load: " + Main.addOne(1));
  }
}
