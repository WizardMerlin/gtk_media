/*
 ============================================================================
 Name        : gtk_media
 Author      : merlin 
 Email       : wizardmerlin945@gmail.com
 Version     : 1.0
 Copyright   : LGPL
 Description : Module main_core, Ansi-style(C99)
 ============================================================================
*/

#include "main_core.h"
/*
#include "medialib.h"
#include "play.h"
#include "db.h"
*/


void *main_core(int cmd, void *data){
  static int state = 0;
  static char *now_play;
  static char *media_type;
  static int playlist_position;
  static int window_size[2];
  /*
  static link_t *mlink; 
  static link_t *plink;
  */
  int ctype;
  ctype = cmd / 1000;

  switch(ctype){
  case 1: LOGD("global config directives\n");break;
  case 2: LOGD("global directives directives\n");break;
  case 3: LOGD("media library\n");break;
  case 4: LOGD("play list\n");break;
  case 5: LOGD("play control\n");break;
  default: 
    LOGE("directive error.\n");
    return NULL;
  }

  return NULL;

}

