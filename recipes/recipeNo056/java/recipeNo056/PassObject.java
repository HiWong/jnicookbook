/* PassObject.java */
package recipeNo056;

public class PassObject {

  /* These are the native method we want to call */
  public static native void passBoxedValue(Object obj);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassObject");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
    	LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " + System.getProperty("java.library.path"));

    PassObject.passBoxedValue( true );
    PassObject.passBoxedValue( (byte) 44 );
    PassObject.passBoxedValue( ',' );
    PassObject.passBoxedValue( 44.44f );
    PassObject.passBoxedValue( 44 );
    PassObject.passBoxedValue( 44L );
    PassObject.passBoxedValue( (short) 44 );
    PassObject.passBoxedValue( 44.44 );
    PassObject.passBoxedValue( "44" );

  }
}
