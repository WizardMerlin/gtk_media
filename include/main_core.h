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



#ifndef MAIN_CORE_H
#define MAIN_CORE_H


#ifdef __cplusplus
extern "C" {
#endif

#include "syslog.h"
  
  /*
    define operator directives
  */


  /*global_config_directives 1000*/

#define GLOBAL_CONFIG_INIT_MEDIALIB 1001
#define GLOBAL_CONFIG_INIT_PLAYLIST 1002

#define GLOBAL_CONFIG_SET_PLAYMODE  1011

#define GLOBAL_CONFIG_ADJUST_VOLUME 1021
  
#define GLOBAL_CONFIG_MUTE_VOLUME   1031


  /*global_query_state_directives*/

#define GLOBAL_QUERY_STATE_WINDOWSIZE 2001

#define GLOBAL_QUERY_STATE_SYSTEMSTATE 2011

#define GLOBAL_QUERY_STATE_MEDIANAME 2021
#define GLOBAL_QUERY_STATE_MEDIASTATE 2022

#define GLOBAL_QUERY_STATE_POSITION 2031 

#define GLOBAL_QUERY_STATE_VOLUME 2041


  /*media_library_directives*/

#define MEDIA_LIBRARY_QUERY_LIBRARYINFO 3001
#define MEDIA_LIBRARY_UPDATE_LIBRARYINFO 3002
#define MEDIA_LIBRARY_QUERY_MEDIA 3003

#define MEDIA_LIBRARY_CHOOSE_MEDIA 3010
#define MEDIA_LIBRARY_CHOOSE_CATEGORY 3011

#define MEDIA_LIBRARY_DELETE_MEDIA 3021
#define MEDIA_LIBRARY_DELETE_ALL 3022

#define MEDIA_LIBRARY_ADD_MEDIA 3031
#define MEDIA_LIBRARY_ADD_DIR 3032
  /*search local media file and save it to library*/
#define MEDIA_LIBRARY_ADD_LOCAL 3033
  /*add media from library to playlist */
#define MEDIA_LIBRARY_EXPORT_MEDIA 3041



  /*play_list_directives*/
#define PLAY_LIST_QUERY_LISTINFO 4001
#define PLAY_LIST_UPDATE_LISTINFO 4002

#define PLAY_LIST_ADD_DIR 4011

#define PLAY_LIST_DELETE_MEDIA 4021
#define PLAY_LIST_DELETE_ALL 4022

#define PLAY_LIST_CHOOSE_MEDIA 4031

#define PLAY_LIST_SORT_MEDIA 4041
  /*#define PALY_LIST_SORT_LIST 4042*/

#define PLAY_LIST_OPEN_LIST 4051

#define PLAY_LIST_SAVE_LIST 4061


  /*play_control_directives*/
#define PLAY_CONTROL_PLAY_MEDIA 5001
#define PLAY_LIST_PAUSE_MEDIA 5002
#define PLAY_LIST_STOP_MEDIA 5003

#define PLAY_LIST_PLAY_PREV 5011
#define PLAY_LIST_PLAY_NEXT 5012

#define PLAY_LIST_PLAY_GIVEN 5021




  /* the main_core entry for control the whole program*/
  void *main_core(int cmd, void *data);


  /*
    int general_sleep(void);
    int general_play_mode(int *mode, InterFace *ui);
    int general_volume(int volume);
    int general_mute(int mute_switch);
    void *request_volume(void);
  */




#ifdef __cplusplus
}
#endif




#endif
