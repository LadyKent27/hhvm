/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_CURL_H__
#define __EXT_CURL_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<
#include <curl/curl.h>
#include <curl/easy.h>
#include <curl/multi.h>

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_curl_init(CStrRef url = null_string);
Variant f_curl_copy_handle(CObjRef ch);
Variant f_curl_version(int uversion = k_CURLVERSION_NOW);
bool f_curl_setopt(CObjRef ch, int option, CVarRef value);
bool f_curl_setopt_array(CObjRef ch, CArrRef options);
Variant f_fb_curl_getopt(CObjRef ch, int opt = 0);
Variant f_curl_exec(CObjRef ch);
Variant f_curl_getinfo(CObjRef ch, int opt = 0);
Variant f_curl_errno(CObjRef ch);
Variant f_curl_error(CObjRef ch);
Variant f_curl_close(CObjRef ch);
Object f_curl_multi_init();
Variant f_curl_multi_add_handle(CObjRef mh, CObjRef ch);
Variant f_curl_multi_remove_handle(CObjRef mh, CObjRef ch);
Variant f_curl_multi_exec(CObjRef mh, VRefParam still_running);
Variant f_curl_multi_select(CObjRef mh, double timeout = 1.0);
Variant f_fb_curl_multi_fdset(CObjRef mh, VRefParam read_fd_set, VRefParam write_fd_set, VRefParam exc_fd_set, VRefParam max_fd = null_object);
Variant f_curl_multi_getcontent(CObjRef ch);
Variant f_curl_multi_info_read(CObjRef mh, VRefParam msgs_in_queue = null);
Variant f_curl_multi_close(CObjRef mh);
void f_evhttp_set_cache(CStrRef address, int max_conn, int port = 80);
Variant f_evhttp_get(CStrRef url, CArrRef headers = null_array, int timeout = 5);
Variant f_evhttp_post(CStrRef url, CStrRef data, CArrRef headers = null_array, int timeout = 5);
Variant f_evhttp_async_get(CStrRef url, CArrRef headers = null_array, int timeout = 5);
Variant f_evhttp_async_post(CStrRef url, CStrRef data, CArrRef headers = null_array, int timeout = 5);
Variant f_evhttp_recv(CObjRef handle);

extern const int64_t k_CURLINFO_LOCAL_PORT;
extern const int64_t k_CURLOPT_TIMEOUT_MS;
extern const int64_t k_CURLOPT_CONNECTTIMEOUT_MS;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_CURL_H__
