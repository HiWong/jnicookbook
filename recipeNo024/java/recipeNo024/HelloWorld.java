/* HelloWorld.java */
package recipeNo024;

public class HelloWorld {

	/* This is the native method we want to call */
	public static native void displayMessage(int mode);

	/* Inside static block we will load shared library */
  static {
    System.loadLibrary("HelloWorld");
  }

  public static void main(String[] args) {
		/* This message will help you determine whether
				LD_LIBRARY_PATH is correctly set
		*/
    System.out.println("library: " 
			+ System.getProperty("java.library.path"));

		/* Call to shared library */
	new Thread() {
    		public void run() {
        	  HelloWorld.displayMessage(1);
    		}
	}.start();
	new Thread() {
    		public void run() {
        	  HelloWorld.displayMessage(2);
    		}
	}.start();
	new Thread() {
    		public void run() {
        	  HelloWorld.displayMessage(3);
    		}
	}.start();

  }
}

