#include "syslog.h"  //let cmake tell us the include_dir
//#include "../include/log/syslog.h"



#undef SYS_LOG_TAG
#define SYS_LOG_TAG "MAIN"



int main(int argc, char *argv[]){

  LOGD("starting the program.\n");


  LOGD("closing the program.\n");


  return 0;
}
