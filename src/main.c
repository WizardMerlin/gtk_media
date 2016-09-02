#include "syslog.h"  
#include "main_core.h"


#undef SYS_LOG_TAG
#define SYS_LOG_TAG "MAIN"



int main(int argc, char *argv[]){

  LOGD("starting the program.\n");



  main_core(GLOBAL_CONFIG_INIT_MEDIALIB, 0);
  main_core(GLOBAL_CONFIG_INIT_PLAYLIST, 0);


  LOGD("closing the program.\n");


  return 0;
}
