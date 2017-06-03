/* Daemon.java */
package recipeNo029;

import java.io.PrintWriter;
import java.io.IOException;

public class Daemon {

  /* This is the native method we want to call
     Just being curious, here. As both: daemon and demon 
     are close relatives, I guess we can use
     demonize to make something become dameon ;) 
  */
  public static native int demonize();

  /* Inside static block we will load shared library 
  */
  static {
    System.loadLibrary("Daemon");
  }

  public static void main(String[] args) {
    /* This message will help you determine whether
       LD_LIBRARY_PATH is correctly set
    */
    System.out.println("library: " 
      + System.getProperty("java.library.path"));

    /* Call to shared library */
    int pid = Daemon.demonize();

    /* Depending on pid value we are either looping forever (daemon)
       or quiting application
    */
    if(pid == 0) {
      try{
        /* I don't care about file, I simply assume that we can
           access /tmp
        */
    	PrintWriter writer = new PrintWriter("/tmp/daemon_java", "UTF-8");

	/* Ever and ever forever you'll be the one 
           That shines in me like the morning sun
	   ...
        */
	while( true ) {
	  Thread.sleep(1000);
    	  writer.println("I am daemon ;)");
	  writer.flush(); // If we don't flush we might not see progress
	}
      } catch (IOException e) {
        // I don't care about exception	
      }	catch (Exception ex) {
        // I don't care about exception
      }
    } else {
      /* Quit Java application - but daemon will still work 
      */
      System.out.println("Quiting Java application");
    }
  }
}

