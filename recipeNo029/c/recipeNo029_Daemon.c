#include <stdio.h>
#include <unistd.h>
#include "jni.h"
#include "recipeNo029_Daemon.h"

/* How to demonize your code propely, google a little bit.
   In this sample, we simply fork and don't care about anything.
   /tmp must be available to the process
*/
int demonize() {
  int pid = fork();
  switch ( pid ) {
    case -1:
      return (-1);
    case 0:
      break;
    default:
      return pid;
  }
  return 0;
}

JNIEXPORT int JNICALL Java_recipeNo029_Daemon_demonize
  (JNIEnv *env, jclass obj) {

  /* JNI call will demonize the code and get back to Java */ 
  int pid = demonize();

  /* Based on pid value, Java will either become daemon
     or will quit execution
     0  - means we are the daemon
     !0 - means we are oryginal code
  */
  return pid;
 
}
