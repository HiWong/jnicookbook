/* PassByteBuffer.java */
package recipeNo040;

import java.nio.ByteBuffer;

public class PassByteBuffer {

  public static final int BUFFER_SIZE = 44; // I think you know what 
                                            // I mean here ;)

  /* This is the native method we want to call */
  public static native int displayByteBuffer(Object obj);
  
  /* This is the native method we want to call */
  public static native int displayDirectByteBuffer(Object obj);

  /* Inside static block we will load shared library */
  static {
    System.loadLibrary("PassByteBuffer");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " 
      + System.getProperty("java.library.path"));

    /* Create object to pass */
    ByteBuffer buf = ByteBuffer.allocate( BUFFER_SIZE );
    for(byte i=0; i<BUFFER_SIZE; i++) {
      buf.put(i);
    }

    /* Create object to pass */
    ByteBuffer bufDirect = ByteBuffer.allocateDirect( BUFFER_SIZE );
    for(byte i=0; i<BUFFER_SIZE; i++) {
      bufDirect.put(i);
    }

    /* Call to shared library */
    PassByteBuffer.displayByteBuffer( buf );

    PassByteBuffer.displayDirectByteBuffer( bufDirect );

  }
}

