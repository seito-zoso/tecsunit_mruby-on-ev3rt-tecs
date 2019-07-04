# -*- coding: utf-8 -*-
#
#  TECS Generator
#      Generator for TOPPERS Embedded Component System
#
#   Copyright (C) 2008-2017 by TOPPERS Project
#--
#   上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
#   ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
#   変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
#   (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
#       権表示，この利用条件および下記の無保証規定が，そのままの形でソー
#       スコード中に含まれていること．
#   (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
#       用できる形で再配布する場合には，再配布に伴うドキュメント（利用
#       者マニュアルなど）に，上記の著作権表示，この利用条件および下記
#       の無保証規定を掲載すること．
#   (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
#       用できない形で再配布する場合には，次のいずれかの条件を満たすこ
#       と．
#     (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
#         作権表示，この利用条件および下記の無保証規定を掲載すること．
#     (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
#         報告すること．
#   (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
#       害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
#       また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
#       由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
#       免責すること．
#
#   本ソフトウェアは，無保証で提供されているものである．上記著作権者お
#   よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
#   に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
#   アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
#   の責任を負わない．
#
#   $Id: MrubyBridgeCellPlugin.rb 3072 2019-05-02 23:47:42Z okuma-top $
#++

#== celltype プラグインの共通の親クラス
class JSMNPlugin < CellPlugin

  # プラグイン引数名 => Proc
  # @@cell_list = {}      # gen_cdl_file'ed list to avoid duplicate generation
  # @@signature_list = {}

  #=== CellPlugin# initialize
  #cell::     Cell        セル（インスタンス）
  # このメソッドは、セルの構文解析が終わったところで呼び出される
  # この段階では意味解析が終わっていない
  def initialize( cell, option )
    dbgPrint "  #{self.class.name}: initialzie=#{cell.get_name} option=#{option}\n"
    super
    @cell = cell

    @plugin_arg_str = CDLString.remove_dquote option
    # @plugin_arg_str = option.gsub( /\A"(.*)/, '\1' )    # 前後の "" を取り除く
    # @plugin_arg_str.sub!( /(.*)"\z/, '\1' )
    @plugin_arg_list = {}
  end

  def gen_cdl_file file
    file.print <<EOT
celltype tJSMN {
  entry sJSMN eJSMN;
  attr {
    int16_t LEN = 1024; // jsonをまるごと読み込んだ時のサイズ
    int16_t TMP_LEN = 32; // argの値を一時的に格納
  /* json keywords：変更する場合はここを変える */
    char_t *key_cell = "cell";
    char_t *key_entry = "entry";
    char_t *key_function = "function";
    char_t *key_arg = "argument";
    char_t *key_exp = "exp_val";
  };
  var {
    [size_is(LEN)]
      char_t  *json_str;
    [size_is(TMP_LEN)]
      char_t  *tmp_str;
    int counter = 0; // targetの数を数える
  };
};
EOT
  end
  #===  受け口関数の本体コードを生成（頭部と末尾は別途出力）
  #ct_name:: Symbol    (プラグインで生成された) セルタイプ名 ．Symbol として送られてくる
  def gen_ep_func_body( file, b_singleton, ct_name, global_ct_name, sig_name, ep_name, func_name, func_global_name, func_type, paramSet )
    # tJSMN の受け口関数のセルタイプコード (C言語) を生成する
    if func_name.to_s == "json_open" then
      print_json_open( file, Namespace.get_root )
    end
    if func_name.to_s == "json_parse_path" then
      print_parse_path( file, Namespace.get_root )
    end
    if func_name.to_s == "json_parse_arg" then
      print_parse_arg( file, Namespace.get_root )
    end

  end

  def print_json_open( file, namespace )
    file.print <<EOT
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    /* エラー処理コードをここに記述します */
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    char str_tmp[N];
    int co_flag = 0, co_start, i, j;
    FILE *fp;

    if( ( fp = fopen("target.json", "r") ) == NULL ){
        printf("Failed to open\\n");
        return -1;
    }
    while( fgets( str_tmp , N, fp ) != NULL ) {
        co_start = 0;
        for( i = 0; i < N -1; i++ ){
            if( str_tmp[i] == '/' && str_tmp[i+1] == '/' && !co_flag ){
                str_tmp[i] = '\\0';
                break;
            }
            if( str_tmp[i] == '/' && str_tmp[i+1] == '*' && !co_flag ){
                co_start = i;
                co_flag = 1;
            }
            if( str_tmp[i] == '*' && str_tmp[i+1] == '/' && co_flag ){
                for(j = 0; str_tmp[(i+2)+j] != '\\0'; j++ ){
                    str_tmp[co_start + j] = str_tmp[(i+2)+j];
                }
                str_tmp[co_start + j] = '\\0';
                i = co_start;
                co_flag = 0;
            }
        }
        if( co_flag && co_start > 0 ){
            str_tmp[co_start] = '\\0';
            strcat( VAR_json_str, str_tmp );
        }
        if( str_tmp[0] != '\\0' && str_tmp[0] != '\\n' && !co_flag ){
            strcat( VAR_json_str, str_tmp );
        }
    }
    fclose( fp );
    return 0;
EOT
  end

  def print_parse_path( file, namespace )
    file.print <<EOT
ER    ercd = E_OK;
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, array_size, arg_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
    char target_path[10];
    char str_tmp[8];

    sprintf( target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        printf( "Failed to parse JSON: %d\\n", r );
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        printf( "Object expected\\n" );
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                printf("Object expected for target\\n");
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
                        i += 1; // iは各要素を指す
                        if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // 配列の中身に注目
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
                    i += 1; // 最後には配列を抜ける
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    i += 2; /* ignore */
                }else{
                    printf( "Unexpected key: %.*s\\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
                    return -1;
                }
            }
            return 0;
        }
    }
    return 1;
EOT
  end

  def print_parse_arg( file, namespace )
    char_list = []

    struct_list = [] # 構造体名
    struct_mem = [] # 構造体のメンバ(tmp)
    struct_mem_type = [] # 構造体のメンバのタイプ(tmp)
    struct_mem_list = [] # 構造体メンバのリスト
    struct_mem_type_list = [] # 構造体メンバのタイプリスト

    arr_list = []
    out_list = []
    num_list = []

    ret_type_list = []

    namespace.travers_all_signature{ |signature|
      if signature.get_namespace_path.to_s =~ /nTECSInfo::/ || signature.get_namespace_path.to_s =~ /::sTask.*/ || signature.get_namespace_path.to_s =~ /::sAccessor/ || signature.get_namespace_path.to_s =~ /::sTECSUnit/ || signature.get_namespace_path.to_s =~ /::sJSMN/ || signature.get_namespace_path.to_s =~ /::s.*Kernel/ || signature.get_namespace_path.to_s =~ /::s.*Semaphore/ || signature.get_namespace_path.to_s =~ /::s.*Eventflag/ || signature.get_namespace_path.to_s =~ /::s.*Dataqueue/ then
      else
        signature.each_param{ |decl, paramDecl|
          param = paramDecl.get_type.get_type_str
          if param.include?("*") then
            if param.include?("const") then
              if param.include?("char") then # [in]: char*型
                if !char_list.include?(param) then
                  # char_list << param.sub(/\*/, '_buf').sub('const ', '') # 被っていなければ追加
                  char_list << param
                end
              elsif param.include?("struct") then # [in]: struct*型
                paramDecl.get_type.get_type.get_members_decl.get_items.each { |decl|
                  struct_mem << decl.get_name.to_s
                  struct_mem_type << decl.get_type.get_type_str
                }
                struct_mem_list << struct_mem
                struct_mem_type_list << struct_mem_type
                struct_mem = [] # リセット
                struct_mem_type = []
                if !struct_list.include?(param) then
                  # struct_list << param.sub(/\*/, '_buf').sub('const ', '')
                  struct_list << param
                end
              else
                if !arr_list.include?(param) then # [in]: num*,typedef*型
                  # arr_list << param.sub(/\*/, '_buf').sub('const ', '')
                  arr_list << param
                end
              end
            else
              if !out_list.include?(param) then # [out]: 型
                out_list << param
              end
            end
          else
            if !num_list.include?(param) then
              num_list << param # [in]: num型,typedef型
            end
          end

          ret_type = decl.get_type.get_type_str # ポインタ型は無視
          if !ret_type.include?("*") && !ret_type_list.include?(ret_type) then
            ret_type_list << decl.get_type.get_type_str
          end
        }
      end
    }
p struct_list
p struct_mem_list
    file.print <<EOT
  ER    ercd = E_OK;
  CELLCB  *p_cellcb;
  if (VALID_IDX(idx)) {
    p_cellcb = GET_CELLCB(idx);
  }
  else {
    return(E_ID);
  } /* end if VALID_IDX(idx) */

  /* ここに処理本体を記述します #_TEFB_# */
    int r, i, j, k, l, m, arg_size, array_size;
    jsmn_parser p;
    jsmntok_t t[128]; /* We expect no more than 128 tokens */
    char target_path[10];

    sprintf( target_path, "target%d", target_num );

    jsmn_init(&p);
    r = jsmn_parse( &p, VAR_json_str, strlen(VAR_json_str), t, sizeof(t)/sizeof(t[0]) );
    if(r < 0){
        printf( "Failed to parse JSON: %d\\n", r );
        return -1;
    }
  /* Assume the top-level element is an object */
    if( r < 1 || t[0].type != JSMN_OBJECT ){
        printf( "Object expected\\n" );
        return -1;
    }

  /* Loop over all keys of the root object */
    for( l = 1; l < r; l++ ){
        if( jsoneq( VAR_json_str, &t[l], target_path ) == 0 ){
            if( t[l+1].type != JSMN_OBJECT ){
                printf("Object expected for target\\n");
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
                    *arg_num = arg_size; // 引数の数をTaskMainに渡す
                    for( j = 0; j < arg_size; j++ ){
                        i += 1; // iは各要素を指す
                        if( t[i].type == JSMN_OBJECT ){
                            if( strstr( arguments[j].type, "const struct" ) == NULL ){
                              printf("Arg %d is not struct type\\n", j+1 );
                              return -1;
                            }
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // objの中身Tag名に注目
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
EOT
    print_struct_list( file, struct_list, struct_mem_list, struct_mem_type_list )
    file.print <<EOT
                            }
                        }else if( t[i].type == JSMN_ARRAY ){
                            array_size =  t[i].size;
                            for( m = 0; m < array_size; m++ ){
                                i += 1; // 配列の中身に注目
                                strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
EOT
    print_arr_list( file, arr_list, out_list )
    file.print <<EOT
                                }else{
                                    printf("Arg %d is not array type\\n", j+1 );
                                    return -1;
                                }
                            }
                        }else if( t[i].type == JSMN_STRING ){
EOT
    print_char_list( file, char_list )
    file.print <<EOT
                            }else{
                                printf("Arg %d is not string type\\n", j+1 );
                                return -1;
                            }
                        }else if( t[i].type == JSMN_PRIMITIVE ){
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
EOT
    print_num_list( file, num_list )
    file.print <<EOT
                            }else{
                                printf("Arg %d is not numeric type\\n", j+1 );
                                return -1;
                            }
                        }else if( t[i].type == JSMN_UNDEFINED ){
                            printf( "Unexpected value: %.*s\\n", t[i].end - t[i].start, VAR_json_str + t[i].start );
                        }else{
                            printf( "Wrong Type: %.*s\\n", t[i].end - t[i].start, VAR_json_str + t[i].start );
                        }
                    }
                    i += 1; // 最後には配列を抜ける
                /* 期待値 */
                }else if( jsoneq( VAR_json_str, &t[i], ATTR_key_exp ) == 0 ){
                    if( t[i+1].type == JSMN_ARRAY ){
                        printf("Return type is not support \'char\' \\n", j+1 );
                        return -1;
                    }else if( t[i+1].type == JSMN_STRING ){
                        printf("Return type is not support \'char\' \\n", j+1 );
                        return -1;
                    }else if( t[i+1].type == JSMN_PRIMITIVE ){
                        strcpy_n( VAR_tmp_str, t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
EOT
    print_ret_type_list( file, ret_type_list )
    file.print <<EOT
                    }else if( t[i+1].type == JSMN_UNDEFINED ){
                        printf( "Unexpected value: %.*s\\n", t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                    }else{
                        printf( "Wrong Type: %.*s\\n", t[i+1].end - t[i+1].start, VAR_json_str + t[i+1].start );
                    }
                    i += 2;
                }else{
                    printf( "Unexpected key: %.*s\\n", t[i].end-t[i].start, VAR_json_str + t[i].start );
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
EOT
        puts "char_list #{char_list}"
        puts "struct_list #{struct_list}"
        puts "arr_list #{arr_list}"
        puts "out_list #{out_list}"
        puts "num_list #{num_list}"
  end

  def print_arr_list( file, arr_list, out_list )
    arr_list.each_with_index { |obj, idx|
      if obj.include?("double") || obj.include?("float") then
        if idx == 0 then
          file.print <<EOT
                                if( !strcmp(arguments[j].type,"#{obj}") ){
                                    arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '')}[m] = atof( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                                }else if( !strcmp(arguments[j].type,"#{obj}") ){
                                    arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '')}[m] = atof( VAR_tmp_str );
EOT
        end
      else
        if idx == 0 then
          file.print <<EOT
                                if( !strcmp(arguments[j].type,"#{obj}") ){
                                    arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '')}[m] = atoi( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                                }else if( !strcmp(arguments[j].type,"#{obj}") ){
                                    arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '')}[m] = atoi( VAR_tmp_str );
EOT
        end
      end
    }
    out_list.each_with_index{ |obj, idx|
      if arr_list.empty? then
        file.print <<EOT
                                if( !strcmp(arguments[j].type,"#{obj}") ){
EOT
      else
        file.print <<EOT
                                }else if( !strcmp(arguments[j].type,"#{obj}") ){
EOT
      end
    }
  end


  def print_char_list( file, char_list )
    file.print <<EOT
                            strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                            if( !strcmp(VAR_tmp_str, "[out]") ){
                                if( strstr(arguments[j].type,"const") != NULL ){
                                    printf("Arg %d is not out arguments\\n", j+1 );
                                    return -1;
                                }
EOT
    char_list.each{ |obj|
      file.print <<EOT
                            }else if( !strcmp(arguments[j].type,"#{obj}") ){
                                strcpy_n( arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '')}, t[i].end - t[i].start, VAR_json_str + t[i].start );
EOT
    }
  end

  def print_num_list( file, num_list )
    num_list.each_with_index{ |obj, idx|
      if obj.include?("double") || obj.include?("float") then
        if idx == 0 then
          file.print <<EOT
                            if( !strcmp(arguments[j].type,"#{obj}") ){
                                arguments[j].data.mem_#{obj.downcase} = atof( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                            }else if( !strcmp(arguments[j].type,"#{obj}") ){
                                arguments[j].data.mem_#{obj.downcase} = atof( VAR_tmp_str );
EOT
        end
      else
        if idx == 0 then
          file.print <<EOT
                            if( !strcmp(arguments[j].type,"#{obj}") ){
                                arguments[j].data.mem_#{obj.downcase} = atoi( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                            }else if( !strcmp(arguments[j].type,"#{obj}") ){
                                arguments[j].data.mem_#{obj.downcase} = atoi( VAR_tmp_str );
EOT
        end
      end
    }
  end

  def print_struct_list( file, struct_list, struct_mem_list, struct_mem_type_list )
    struct_list.each_with_index{ |obj, idx|
      if idx == 0 then
        file.print <<EOT
                                if( !strcmp(arguments[j].type,"#{obj}") ){
EOT
      else
        file.print <<EOT
                                else if( !strcmp(arguments[j].type,"#{obj}") ){
EOT
      end
      struct_mem_list[idx].each_with_index{ |mem, idx2|
        if idx2 == 0 then
          file.print <<EOT
                                    if( !strcmp( VAR_tmp_str, "#{mem}" ) ){
                                        i += 1;
EOT
        else
          file.print <<EOT
                                    }else if( !strcmp( VAR_tmp_str, "#{mem}" ) ){
                                        i += 1;
EOT
        end

        if struct_mem_type_list[idx][idx2].include?("char") then
          file.print <<EOT
                                        strcpy_n( arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '').sub('struct ', '')}.#{mem}, t[i].end - t[i].start, VAR_json_str + t[i].start );
EOT
        elsif struct_mem_type_list[idx][idx2].include?("const") && struct_mem_type_list[idx][idx2].include?("*") then
          file.print <<EOT
                                        printf("Not support Array type in struct\n");
                                        return -1;
EOT
        elsif struct_mem_type_list[idx][idx2].include?("double") || struct_mem_type_list[idx][idx2].include?("float") then
          file.print <<EOT
                                        strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                        arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '').sub('struct ', '')}.#{mem} = atof( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                                        strcpy_n( VAR_tmp_str, t[i].end - t[i].start, VAR_json_str + t[i].start );
                                        arguments[j].data.mem_#{obj.sub(/\*/, '_buf').sub('const ', '').sub('struct ', '')}.#{mem} = atoi( VAR_tmp_str );
EOT
        end
      }
        file.print <<EOT
                                    }else{
                                       printf("Member %s cannot found \\n", VAR_tmp_str );
                                       return -1;
                                    }
                                }else{
                                  printf("Struct %s cannot found\\n", arguments[j].type);
                                  return -1;
                                }
EOT

    }
  end

  def print_ret_type_list( file, ret_type_list )
    ret_type_list.each_with_index{ |obj, idx|
      if obj.include?("double") || obj.include?("float") then
        if idx == 0 then
          file.print <<EOT
                        if( !strcmp( exp_val->type, "#{obj}") ){
                            exp_val->data.mem_#{obj.downcase} = atof( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                        }else if( !strcmp( exp_val->type, "#{obj}") ){
                            exp_val->data.mem_#{obj.downcase} = atof( VAR_tmp_str );
EOT
        end
      else
        if idx == 0 then
          file.print <<EOT
                        if( !strcmp( exp_val->type, "#{obj}") ){
                            exp_val->data.mem_#{obj.downcase} = atoi( VAR_tmp_str );
EOT
        else
          file.print <<EOT
                        }else if( !strcmp( exp_val->type, "#{obj}") ){
                            exp_val->data.mem_#{obj.downcase} = atoi( VAR_tmp_str );
EOT
        end
      end
    }
    file.print <<EOT
                        }
EOT
  end

  #=== 後ろの CDL コードを生成
  #プラグインの後ろの CDL コードを生成
  #file:: File:
  def self.gen_post_code( file )

  end

  def gen_preamble( file, b_singleton, ct_name, global_ct_name )
    file.print <<EOT
#include "tJSMN_tecsgen.h"
#include <stdio.h>
#include <jsmn.h>
#define N 128

static int
jsoneq( const char *json, jsmntok_t *tok, const char *s);
static void
strcpy_n( char_t *str1, int num, const char *str2 );
EOT
  end

  def gen_postamble( file, b_singleton, ct_name, global_ct_name )
    file.print <<EOT
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
    str1[num] = '\\0';
}
EOT
  end

end

