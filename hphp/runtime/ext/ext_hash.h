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

#ifndef __EXT_HASH_H__
#define __EXT_HASH_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Variant f_hash(CStrRef algo, CStrRef data, bool raw_output = false);
Array f_hash_algos();
Variant f_hash_init(CStrRef algo, int options = 0, CStrRef key = null_string);
Variant f_hash_file(CStrRef algo, CStrRef filename, bool raw_output = false);
String f_hash_final(CObjRef context, bool raw_output = false);
Variant f_hash_hmac_file(CStrRef algo, CStrRef filename, CStrRef key, bool raw_output = false);
Variant f_hash_hmac(CStrRef algo, CStrRef data, CStrRef key, bool raw_output = false);
bool f_hash_update_file(CObjRef init_context, CStrRef filename, CObjRef stream_context = null);
int64_t f_hash_update_stream(CObjRef context, CObjRef handle, int length = -1);
bool f_hash_update(CObjRef context, CStrRef data);
int64_t f_furchash_hphp_ext(CStrRef key, int len, int nPart);
bool f_furchash_hphp_ext_supported();
int64_t f_hphp_murmurhash(CStrRef key, int len, int seed);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_HASH_H__
