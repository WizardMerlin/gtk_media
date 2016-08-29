/*
 ============================================================================
 Name        : gtk_media
 Author      : merlin
 Version     : 1.0
 Copyright   : LGPL
 Description : test: Module Log (syslog.h), Ansi-style(C99)
 ============================================================================
*/

#include "syslog.h"

#undef SYS_LOG_TAG
#define SYS_LOG_TAG "TEST_LOG"

int main(int argc, char *argv[]){
  puts("test module log--begin");

  LOGD("debug puts all the info of running program\n");
  LOGI("info puts log except debug %s", ".\n");
  LOGE("error puts only error info here\n");


  puts("test module log--end");
    
  return 0;
}
