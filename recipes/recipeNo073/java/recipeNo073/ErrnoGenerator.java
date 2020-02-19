/* ErrnoGenerator.java */
package recipeNo073;

public class ErrnoGenerator {

  // This method will call system function that will fail
  // and will set errno; we will wrap it inside object
  // that will be passed back.
  // shouldIFail == true  - system call will fail and set errno
  // shoudlIFail == false - system call will execute successfully
  public native Object generateErrno(boolean shouldIFail);

  static {
    System.loadLibrary("ErrnoGenerator");
  }

  public static void main(String[] args) {
    ErrnoGenerator gen = new ErrnoGenerator();

    boolean [] flags = { true, false };

    for( boolean flag : flags ) {

      ErrnoWrapper jniResult = (ErrnoWrapper) gen.generateErrno( flag );

      if( jniResult.getResult() == null ) {
        System.out.println("[J] " + (flag ? "true :" : "false:") + " result: null errno: " + jniResult.getErrnoCode() + " message: " + jniResult.getErrnoStr());
      } else {
        System.out.println("[J] " + (flag ? "true :" : "false:") + " result: " + jniResult.getResult() + " errno: everything is fine - don't check errno");
      }
    } 
 
  }
}
