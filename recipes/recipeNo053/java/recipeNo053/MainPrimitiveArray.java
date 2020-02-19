package recipeNo053;

public class MainPrimitiveArray {

  public static native void getPrimitiveArray(byte [] input, long [] output);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("Main");
  }

  public static void main(String [] args) {
 
    byte [] input = new byte[64000000];
    long [] output = new long[64000000]; 

    System.out.println("Access via PrimitiveArray");
    for(int i=0; i<100; i++) {
      MainPrimitiveArray.getPrimitiveArray(input, output);
    }

  }

}
