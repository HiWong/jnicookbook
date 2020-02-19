/* VectorOfVectors sample */
package recipeNo045;

import java.util.Vector;

public class VectorOfVectors {

  /* This is the native method we want to call */
  public static native Vector<Vector<Float>> getVector();

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("VectorOfVectors");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    		LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    /* Call to shared library */
    Vector< Vector< Float >> result = getVector();
    for( Vector<Float> v : result ) {
      String str = "[";
      for( Float fVal : v ) {
        str = str + fVal + ","; 
      }
      str = str.substring( 0, str.length() - 1 ) + "]";
      System.out.println( str );
    }
  }
}
