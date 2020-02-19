package recipeNo053;

public class MainArrayElements {

  public static native void getArrayElements(byte [] intput, long [] output);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("Main");
  }

  public static void main(String [] args) {
 
    byte [] input = new byte[64000000];
    long [] output = new long[64000000]; 

    System.out.println("Access via ArrayElements");
    for(int i=0; i<100; i++) {
      MainArrayElements.getArrayElements(input, output);
    }

  }

}
