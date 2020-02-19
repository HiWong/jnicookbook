/* Main.java */
package recipeNo043;

public class Main {

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    SetEnv setEnv = new SetEnv();
    GetEnv getEnv = new GetEnv();

    java.lang.String key = "hello";
    java.lang.String value = "world";

    // Make sure you have exported variable before calling
    // getenv for the first time. This way, you will get
    // the value coming from environment
    getEnv.getenv(key);

    // After we have modified it, shared library will
    // use new value, modified by call to setenv
    setEnv.setenv(key, value);
    getEnv.getenv(key);
  }
}
