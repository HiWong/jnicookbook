#include <stdio.h>
#include <unistd.h>
#include "jni.h"
#include "recipeNo022_Daemon.h"

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

JNIEXPORT void JNICALL Java_recipeNo022_Daemon_demonize
  (JNIEnv *env, jclass obj) {

  /* JNI call will demonize the code and get back to Java */ 
  int pid = demonize();
 
  /* As we want to "see" the execution, there is a log file
     inside /tmp/daemon. Each second, word "daemon" will
     be appended to that file.
  */
  FILE *fid = fopen( "/tmp/daemon", "w" );

  /* We want to make this long lasting loop inside daemon.
     That's why we check whether we are child or parent */
  if( pid == 0 ) {
    while(1) {
      sleep(1);
      fprintf(fid, "daemon\n");
      fflush( fid );
    }
  }
}
