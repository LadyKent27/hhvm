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

#ifndef __EXT_SPL_H__
#define __EXT_SPL_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Array f_spl_classes();
String f_spl_object_hash(CObjRef obj);
inline int64_t f_hphp_object_pointer(CObjRef obj) { return (int64_t)obj.get();}
Variant f_hphp_get_this();
Variant f_class_implements(CVarRef obj, bool autoload = true);
Variant f_class_parents(CVarRef obj, bool autoload = true);
Variant f_class_uses(CVarRef obj, bool autoload = true);
Variant f_iterator_apply(CVarRef obj, CVarRef func, CArrRef params = null_array);
Variant f_iterator_count(CVarRef obj);
Variant f_iterator_to_array(CVarRef obj, bool use_keys = true);
void f_spl_autoload_call(CStrRef class_name);
String f_spl_autoload_extensions(CStrRef file_extensions = null_string);
Variant f_spl_autoload_functions();
bool f_spl_autoload_register(CVarRef autoload_function = null_variant, bool throws = true, bool prepend = false);
bool f_spl_autoload_unregister(CVarRef autoload_function);
void f_spl_autoload(CStrRef class_name, CStrRef file_extensions = null_string);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_SPL_H__
