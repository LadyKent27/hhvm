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

#ifndef __EXT_SPLFILE_H__
#define __EXT_SPLFILE_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

class SplFileInfo: public ResourceData {
public:
  DECLARE_OBJECT_ALLOCATION(SplFileInfo);

  SplFileInfo() {}
  SplFileInfo(CStrRef fileName) : m_fileName(fileName) {}

  static StaticString s_class_name;
  // overriding ResourceData
  virtual CStrRef o_getClassNameHook() const { return s_class_name; }
  virtual bool isResource() const { return !m_fileName.empty(); }

  CStrRef getFileName() const { return m_fileName; }

public:
  String m_fileName;
};

class SplFileObject: public ResourceData {
public:
  DECLARE_OBJECT_ALLOCATION(SplFileObject);

  SplFileObject(Variant f) {
    m_file = f.isNull() ? Object() : f.toObject();
  }

  static StaticString s_class_name;
  // overriding ResourceData
  virtual CStrRef o_getClassNameHook() const { return s_class_name; }
  virtual bool isResource() const { return !m_file.isNull();}
  Object getFile() { return m_file;}
private:
  Object m_file;
};

Object f_hphp_splfileinfo___construct(CObjRef obj, CStrRef file_name);
int64_t f_hphp_splfileinfo_getatime(CObjRef obj);
String f_hphp_splfileinfo_getbasename(CObjRef obj, CStrRef suffix);
int64_t f_hphp_splfileinfo_getctime(CObjRef obj);
Object f_hphp_splfileinfo_getfileinfo(CObjRef obj, CStrRef class_name);
String f_hphp_splfileinfo_getfilename(CObjRef obj);
int64_t f_hphp_splfileinfo_getgroup(CObjRef obj);
int64_t f_hphp_splfileinfo_getinode(CObjRef obj);
String f_hphp_splfileinfo_getlinktarget(CObjRef obj);
int64_t f_hphp_splfileinfo_getmtime(CObjRef obj);
int64_t f_hphp_splfileinfo_getowner(CObjRef obj);
String f_hphp_splfileinfo_getpath(CObjRef obj);
Object f_hphp_splfileinfo_getpathinfo(CObjRef obj, CStrRef class_name);
String f_hphp_splfileinfo_getpathname(CObjRef obj);
int64_t f_hphp_splfileinfo_getperms(CObjRef obj);
Variant f_hphp_splfileinfo_getrealpath(CObjRef obj);
int64_t f_hphp_splfileinfo_getsize(CObjRef obj);
String f_hphp_splfileinfo_gettype(CObjRef obj);
bool f_hphp_splfileinfo_isdir(CObjRef obj);
bool f_hphp_splfileinfo_isexecutable(CObjRef obj);
bool f_hphp_splfileinfo_isfile(CObjRef obj);
bool f_hphp_splfileinfo_islink(CObjRef obj);
bool f_hphp_splfileinfo_isreadable(CObjRef obj);
bool f_hphp_splfileinfo_iswritable(CObjRef obj);
Object f_hphp_splfileinfo_openfile(CObjRef obj, CStrRef open_mode, bool use_include_path, CVarRef context);
void f_hphp_splfileinfo_setfileclass(CObjRef obj, CStrRef class_name);
void f_hphp_splfileinfo_setinfoclass(CObjRef obj, CStrRef class_name);
String f_hphp_splfileinfo___tostring(CObjRef obj);
Object f_hphp_splfileobject___construct(CObjRef obj, CStrRef filename, CStrRef open_mode, bool use_include_path, CVarRef context);
Variant f_hphp_splfileobject_current(CObjRef obj);
bool f_hphp_splfileobject_eof(CObjRef obj);
bool f_hphp_splfileobject_fflush(CObjRef obj);
String f_hphp_splfileobject_fgetc(CObjRef obj);
Variant f_hphp_splfileobject_fgetcsv(CObjRef obj, CStrRef delimiter, CStrRef enclosure, CStrRef escape);
String f_hphp_splfileobject_fgets(CObjRef obj);
String f_hphp_splfileobject_fgetss(CObjRef obj, CStrRef allowable_tags);
bool f_hphp_splfileobject_flock(CObjRef obj, VRefParam wouldblock);
int64_t f_hphp_splfileobject_fpassthru(CObjRef obj);
Variant f_hphp_splfileobject_fscanf(int64_t _argc, CObjRef obj, CStrRef format, CVarRef _argv);
int64_t f_hphp_splfileobject_fseek(CObjRef obj, int64_t offset, int64_t whence);
Variant f_hphp_splfileobject_fstat(CObjRef obj);
int64_t f_hphp_splfileobject_ftell(CObjRef obj);
bool f_hphp_splfileobject_ftruncate(CObjRef obj, int64_t size);
int64_t f_hphp_splfileobject_fwrite(CObjRef obj, CStrRef str, int64_t length);
Variant f_hphp_splfileobject_getcvscontrol(CObjRef obj);
int64_t f_hphp_splfileobject_getflags(CObjRef obj);
int64_t f_hphp_splfileobject_getmaxlinelen(CObjRef obj);
int64_t f_hphp_splfileobject_key(CObjRef obj);
void f_hphp_splfileobject_next(CObjRef obj);
void f_hphp_splfileobject_rewind(CObjRef obj);
bool f_hphp_splfileobject_valid(CObjRef obj);
void f_hphp_splfileobject_seek(CObjRef obj, int64_t line_pos);
void f_hphp_splfileobject_setcsvcontrol(CObjRef obj, CStrRef delimiter, CStrRef enclosure, CStrRef escape);
void f_hphp_splfileobject_setflags(CObjRef obj, int64_t flags);
void f_hphp_splfileobject_setmaxlinelen(CObjRef obj, int64_t max_len);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_SPLFILE_H__
