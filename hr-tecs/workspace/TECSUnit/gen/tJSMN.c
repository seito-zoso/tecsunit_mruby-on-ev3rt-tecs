/*
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤Ï tecsgen ¤Ë¤è¤ê¼«Æ°À¸À®¤µ¤ì¤Ş¤·¤¿
 * ¤³¤Î¥Õ¥¡¥¤¥ë¤òÊÔ½¸¤·¤Æ»ÈÍÑ¤¹¤ë¤³¤È¤Ï¡¢°Õ¿Ş¤µ¤ì¤Æ¤¤¤Ş¤»¤ó
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ¤«¤é #[</...>]# ¤Ç°Ï¤Ş¤ì¤¿¥³¥á¥ó¥È¤ÏÊÔ½¸¤·¤Ê¤¤¤Ç¤¯¤À¤µ¤¤
 * tecsmerge ¤Ë¤è¤ë¥Ş¡¼¥¸¤Ë»ÈÍÑ¤µ¤ì¤Ş¤¹
 *
 * Â°À­¥¢¥¯¥»¥¹¥Ş¥¯¥í #_CAAM_#
 * LEN              int16_t          ATTR_LEN        
 * TMP_LEN          int16_t          ATTR_TMP_LEN    
 * key_cell         char_t*          ATTR_key_cell   
 * key_entry        char_t*          ATTR_key_entry  
 * key_function     char_t*          ATTR_key_function
 * key_arg          char_t*          ATTR_key_arg    
 * key_exp          char_t*          ATTR_key_exp    
 * json_str         char_t*          VAR_json_str    
 * tmp_str          char_t*          VAR_tmp_str     
 * counter          int              VAR_counter     
 *
 * #[</PREAMBLE>]# */

/* ¥×¥í¥È¥¿¥¤¥×Àë¸À¤äÊÑ¿ô¤ÎÄêµÁ¤ò¤³¤³¤Ë½ñ¤­¤Ş¤¹ #_PAC_# */
#include "tJSMN_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

#include "tJSMN_tecsgen.h"
#include <stdio.h>
#include <jsmn.h>
#define N 128

static int
jsoneq( const char *json, jsmntok_t *tok, const char *s);
static void
strcpy_n( char_t *str1, int num, const char *str2 );
/* ¼õ¤±¸ı´Ø¿ô #_TEPF_# */
/* #[<ENTRY_PORT>]# eJSMN
 * entry port: eJSMN
 * signature:  sJSMN
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eJSMN_json_open
 * name:         eJSMN_json_open
 * global_name:  tJSMN_eJSMN_json_open
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_open(CELLIDX idx)
{
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* ã‚¨ãƒ©ãƒ¼å‡¦ç†ã‚³ãƒ¼ãƒ‰ã‚’ã“ã“ã«è¨˜è¿°ã—ã¾ã™ */
  } /* end if VALID_IDX(idx) */

  /* ã“ã“ã«å‡¦ç†æœ¬ä½“ã‚’è¨˜è¿°ã—ã¾ã™ #_TEFB_# */
    char str_tmp[N];
    int co_flag = 0, co_start, i, j;
    FILE *fp;

    if( ( fp = fopen("target.json", "r") ) == NULL ){
        printf("Failed to open\n");
        return -1;
    }
    while( fgets( str_tmp , N, fp ) != NULL ) {
        co_start = 0;
        for( i = 0; i < N -1; i++ ){
            if( str_tmp[i] == '/' && str_tmp[i+1] == '/' && !co_flag ){
                str_tmp[i] = '\0';
                break;
            }
            if( str_tmp[i] == '/' && str_tmp[i+1] == '*' && !co_flag ){
                co_start = i;
                co_flag = 1;
            }
            if( str_tmp[i] == '*' && str_tmp[i+1] == '/' && co_flag ){
                for(j = 0; str_tmp[(i+2)+j] != '\0'; j++ ){
                    str_tmp[co_start + j] = str_tmp[(i+2)+j];
                }
                str_tmp[co_start + j] = '\0';
                i = co_start;
                co_flag = 0;
            }
        }
        if( co_flag && co_start > 0 ){
            str_tmp[co_start] = '\0';
            strcat( VAR_json_str, str_tmp );
        }
        if( str_tmp[0] != '\0' && str_tmp[0] != '\n' && !co_flag ){
            strcat( VAR_json_str, str_tmp );
        }
    }
    fclose( fp );
    return 0;
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_path
 * name:         eJSMN_json_parse_path
 * global_name:  tJSMN_eJSMN_json_parse_path
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_path(CELLIDX idx, char_t* c_path, char_t* e_path, char_t* f_path, int target_num, int btr)
{
ER    ercd = E_OK;
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ã“ã“ã«å‡¦ç†æœ¬ä½“ã‚’è¨˜è¿°ã—ã¾ã™ #_TEFB_# */
    int r, i, j, k, l, m, array_size, arg_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
    char target_path[10];
    char str_tmp[8];

    sprintf( target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        printf( "Failed to parse JSON: %d\n", r );
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        printf( "Object expected\n" );
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                printf("Object expected for target\n");
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
                    strcpy_n( c_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_entry ) == 0 ){
                    strcpy_n( e_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_function ) == 0 ){
                    strcpy_n( f_path, t[i+1].end-t[i+1].start, VAR_json_str + t[i+1].start );
                    i += 2;
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_arg ) == 0 ) {
                    i += 1;
                    arg_size = t[i].size;
                    for( j = 0; j < arg_size; j++ ){
                        i += 1; // iã¯å„è¦ç´ ã‚’æŒ‡ã™
                        if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // é…åˆ—ã®ä¸­èº«ã«æ³¨ç›®
                                if( t[i].size > 1 ){
                                  i += t[i].size;
                                }
                            }
                        }
                        if( t[i].type == JSMN_OBJECT ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++){
                                i += 2; // member
                                if( t[i].size > 1 ){
                                  i += t[i].size;
                                }
                            }
                        }
                    }
                    i += 1; // æœ€å¾Œã«ã¯é…åˆ—ã‚’æŠœã‘ã‚‹
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    i += 2; /* ignore */
                }else{
                    printf( "Unexpected key: %.*s\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
                    return -1;
                }
            }
            return 0;
        }
    }
    return 1;
}

/* #[<ENTRY_FUNC>]# eJSMN_json_parse_arg
 * name:         eJSMN_json_parse_arg
 * global_name:  tJSMN_eJSMN_json_parse_arg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eJSMN_json_parse_arg(CELLIDX idx, struct tecsunit_obj* arguments, struct tecsunit_obj* exp_val, int* arg_num, int target_num, int btr)
{
  ER    ercd = E_OK;
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ã“ã“ã«å‡¦ç†æœ¬ä½“ã‚’è¨˜è¿°ã—ã¾ã™ #_TEFB_# */
    int r, i, j, k, l, m, arg_size, array_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
    char target_path[10];

    sprintf( target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        printf( "Failed to parse JSON: %d\n", r );
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        printf( "Object expected\n" );
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                printf("Object expected for target\n");
                return -1;
            }
            i = l + 2;
            for( k = 0; k < t[l+1].size; k++ ){
                if( jsoneq( VAR_json_str, &t[i], ATTR_key_cell ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_entry ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_function ) == 0 ){
                    i += 2; /* ignore */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_arg ) == 0 ) {
                    if(t[i+1].type != JSMN_ARRAY){
                        continue; /* We expect groups to be an array of strings */
                    }
                    i += 1;
                    arg_size = t[i].size;
                    *arg_num = arg_size; // å¼•æ•°ã®æ•°ã‚’TaskMainã«æ¸¡ã™
                    for( j = 0; j < arg_size; j++ ){
                        i += 1; // iã¯å„è¦ç´ ã‚’æŒ‡ã™
                        if( t[i].type == JSMN_OBJECT ){
                            if( strstr( arguments[j].type, "const struct" ) == NULL ){
                              printf("Arg %d is not struct type\n", j+1 );
                              return -1;
                            }
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // objã®ä¸­èº«Tagåã«æ³¨ç›®
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }
                        }else if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // é…åˆ—ã®ä¸­èº«ã«æ³¨ç›®
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                if( !strcmp(arguments[j].type,"const void*") ){
                                    arguments[j].data.mem_void_buf[m] = atoi( VAR_tmp_str );
                                }else if( !strcmp(arguments[j].type,"const uint8_t*") ){
                                    arguments[j].data.mem_uint8_t_buf[m] = atoi( VAR_tmp_str );
                                }else if( !strcmp(arguments[j].type,"const int8_t*") ){
                                    arguments[j].data.mem_int8_t_buf[m] = atoi( VAR_tmp_str );
                                }else if( !strcmp(arguments[j].type,"const mrb_state*") ){
                                    arguments[j].data.mem_mrb_state_buf[m] = atoi( VAR_tmp_str );
                                }else if( !strcmp(arguments[j].type,"T_RCYC*") ){
                                }else if( !strcmp(arguments[j].type,"T_RALM*") ){
                                }else if( !strcmp(arguments[j].type,"void**") ){
                                }else if( !strcmp(arguments[j].type,"T_RMPF*") ){
                                }else if( !strcmp(arguments[j].type,"uint8_t*") ){
                                }else if( !strcmp(arguments[j].type,"T_RMBF*") ){
                                }else if( !strcmp(arguments[j].type,"uint16_t*") ){
                                }else if( !strcmp(arguments[j].type,"int32_t*") ){
                                }else if( !strcmp(arguments[j].type,"int8_t*") ){
                                }else if( !strcmp(arguments[j].type,"char_t*") ){
                                }else if( !strcmp(arguments[j].type,"mrb_state*") ){
                                }else if( !strcmp(arguments[j].type,"struct RClass*") ){
                                }else{
                                    printf("Arg %d is not array type\n", j+1 );
                                    return -1;
                                }
                            }
                        }else if( t[i].type == JSMN_STRING ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(VAR_tmp_str, "[out]") ){
                                if( strstr(arguments[j].type,"const") != NULL ){
                                    printf("Arg %d is not out arguments\n", j+1 );
                                    return -1;
                                }
                            }else if( !strcmp(arguments[j].type,"const char*") ){
                                strcpy_n( arguments[j].data.mem_char_buf, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }else if( !strcmp(arguments[j].type,"const char_t*") ){
                                strcpy_n( arguments[j].data.mem_char_t_buf, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }else if( !strcmp(arguments[j].type,"const char**") ){
                                strcpy_n( arguments[j].data.mem_char_buf*, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            }else{
                                printf("Arg %d is not string type\n", j+1 );
                                return -1;
                            }
                        }else if( t[i].type == JSMN_PRIMITIVE ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(arguments[j].type,"TEXPTN") ){
                                arguments[j].data.mem_texptn = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"OVRTIM") ){
                                arguments[j].data.mem_ovrtim = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"RELTIM") ){
                                arguments[j].data.mem_reltim = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"TMO") ){
                                arguments[j].data.mem_tmo = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint32_t") ){
                                arguments[j].data.mem_uint32_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"size_t") ){
                                arguments[j].data.mem_size_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int32_t") ){
                                arguments[j].data.mem_int32_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int") ){
                                arguments[j].data.mem_int = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"bool_t") ){
                                arguments[j].data.mem_bool_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"button_t") ){
                                arguments[j].data.mem_button_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"lcdfont_t") ){
                                arguments[j].data.mem_lcdfont_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"lcdcolor_t") ){
                                arguments[j].data.mem_lcdcolor_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"ledcolor_t") ){
                                arguments[j].data.mem_ledcolor_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint8_t") ){
                                arguments[j].data.mem_uint8_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"uint16_t") ){
                                arguments[j].data.mem_uint16_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int16_t") ){
                                arguments[j].data.mem_int16_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"int8_t") ){
                                arguments[j].data.mem_int8_t = atoi( VAR_tmp_str );
                            }else if( !strcmp(arguments[j].type,"ER") ){
                                arguments[j].data.mem_er = atoi( VAR_tmp_str );
                            }else{
                                printf("Arg %d is not numeric type\n", j+1 );
                                return -1;
                            }
                        }else if( t[i].type == JSMN_UNDEFINED ){
                            printf( "Unexpected value: %.*s\n", t[i].end - t[i].start, VAR_json_str + t[i].start );
                        }else{
                            printf( "Wrong Type: %.*s\n", t[i].end - t[i].start, VAR_json_str + t[i].start );
                        }
                    }
                    i += 1; // æœ€å¾Œã«ã¯é…åˆ—ã‚’æŠœã‘ã‚‹
                /* æœŸå¾…å€¤ */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    if( t[i+1].type == JSMN_ARRAY ){
                        printf("Return type is not support 'char' \n", j+1 );
                        return -1;
                    }else if( t[i+1].type == JSMN_STRING ){
                        printf("Return type is not support 'char' \n", j+1 );
                        return -1;
                    }else if( t[i+1].type == JSMN_PRIMITIVE ){
                        strcpy_n( VAR_tmp_str, t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                        if( !strcmp( exp_val->type, "ER") ){
                            exp_val->data.mem_er = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "ER_UINT") ){
                            exp_val->data.mem_er_uint = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "void") ){
                            exp_val->data.mem_void = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "float32_t") ){
                            exp_val->data.mem_float32_t = atof( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "bool_t") ){
                            exp_val->data.mem_bool_t = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "int32_t") ){
                            exp_val->data.mem_int32_t = atoi( VAR_tmp_str );
                        }else if( !strcmp( exp_val->type, "int") ){
                            exp_val->data.mem_int = atoi( VAR_tmp_str );
                        }
                    }else if( t[i+1].type == JSMN_UNDEFINED ){
                        printf( "Unexpected value: %.*s\n", t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                    }else{
                        printf( "Wrong Type: %.*s\n", t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                    }
                    i += 2;
                }else{
                    printf( "Unexpected key: %.*s\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
                    return -1;
                }
            }
            VAR_counter += 1;
            if( VAR_counter >= t[0].size ){
                return 2;
            }
            return 0;
        }
    }
    return 1;
}

/* #[<POSTAMBLE>]#
 *   ¤³¤ì¤è¤ê²¼¤ËÈó¼õ¤±¸ı´Ø¿ô¤ò½ñ¤­¤Ş¤¹
 * #[</POSTAMBLE>]#*/
static int
jsoneq(const char *json, jsmntok_t *tok, const char *s)
{
    if( tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start
        && strncmp(json + tok->start, s, tok->end - tok->start) == 0 ){
        return 0;
    }
    return -1;
}

static void
strcpy_n( char_t *str1, int num, const char *str2 )
{
    int i;
    for(i = 0; i < num; i++){
        str1[i] = str2[i];
    }
    str1[num] = '\0';
}
