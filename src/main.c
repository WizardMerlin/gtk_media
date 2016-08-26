#include <stdio.h>
#include "../include/log/syslog.h"


/*log module: tag-----begin*/
#undef SYS_LOG_TAG
#define SYS_LOG_TAG "MAIN"
/*log module: tag-----end*/


int main(int argc, char *argv[]){

  LOGD("debug\n");

  LOGI("pass param %d\n",10);
  return 0;
}
