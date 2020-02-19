/* ErrnoGenerator.java */
package recipeNo072;

public class ErrnoGenerator {

  // This method will call system function that will fail
  // and will set errno; we will wrap it inside ErrnoException
  // that will be thrown back to Java code.
  public native void generateErrno() throws ErrnoException;

  static {
    System.loadLibrary("ErrnoGenerator");
  }

  public static void main(String[] args) {
    ErrnoGenerator gen = new ErrnoGenerator();

    try {
      // This one is supposed to throw error.
      // JNI code is designed such way it's supposed to fail.
      gen.generateErrno();
    } catch(ErrnoException ex) {
      // errno and message sent from C are exactly the same here, in Java world
      System.out.println("[J] errno: " + ex.getErrno() + " message: " + ex.getMessage());
    }

  }
}
