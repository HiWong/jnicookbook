/* Main.java */
package recipeNo030;

public class Main {

  private void display(AbstractHelloWorld hw) {
    hw.displayMessage();
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    Main main = new Main();
    main.display(new HelloWorldNativeA());
    main.display(new HelloWorldNativeB());
  }
}
