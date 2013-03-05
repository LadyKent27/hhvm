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

#ifndef __EXT_MAGICK_H__
#define __EXT_MAGICK_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

String f_magickgetcopyright();
String f_magickgethomeurl();
String f_magickgetpackagename();
double f_magickgetquantumdepth();
String f_magickgetreleasedate();
double f_magickgetresourcelimit(int resource_type);
Array f_magickgetversion();
int64_t f_magickgetversionnumber();
String f_magickgetversionstring();
String f_magickqueryconfigureoption(CStrRef option);
Array f_magickqueryconfigureoptions(CStrRef pattern);
Array f_magickqueryfonts(CStrRef pattern);
Array f_magickqueryformats(CStrRef pattern);
bool f_magicksetresourcelimit(int resource_type, double limit);
Object f_newdrawingwand();
Object f_newmagickwand();
Object f_newpixeliterator(CObjRef mgck_wnd);
Object f_newpixelregioniterator(CObjRef mgck_wnd, int x, int y, int columns, int rows);
Object f_newpixelwand(CStrRef imagemagick_col_str = null_string);
Array f_newpixelwandarray(int num_pxl_wnds);
Array f_newpixelwands(int num_pxl_wnds);
void f_destroydrawingwand(CObjRef drw_wnd);
void f_destroymagickwand(CObjRef mgck_wnd);
void f_destroypixeliterator(CObjRef pxl_iter);
void f_destroypixelwand(CObjRef pxl_wnd);
void f_destroypixelwandarray(CArrRef pxl_wnd_array);
void f_destroypixelwands(CArrRef pxl_wnd_array);
bool f_isdrawingwand(CVarRef var);
bool f_ismagickwand(CVarRef var);
bool f_ispixeliterator(CVarRef var);
bool f_ispixelwand(CVarRef var);
void f_cleardrawingwand(CObjRef drw_wnd);
void f_clearmagickwand(CObjRef mgck_wnd);
void f_clearpixeliterator(CObjRef pxl_iter);
void f_clearpixelwand(CObjRef pxl_wnd);
Object f_clonedrawingwand(CObjRef drw_wnd);
Object f_clonemagickwand(CObjRef mgck_wnd);
Array f_wandgetexception(CObjRef wnd);
String f_wandgetexceptionstring(CObjRef wnd);
int64_t f_wandgetexceptiontype(CObjRef wnd);
bool f_wandhasexception(CObjRef wnd);
void f_drawaffine(CObjRef drw_wnd, double sx, double sy, double rx, double ry, double tx, double ty);
void f_drawannotation(CObjRef drw_wnd, double x, double y, CStrRef text);
void f_drawarc(CObjRef drw_wnd, double sx, double sy, double ex, double ey, double sd, double ed);
void f_drawbezier(CObjRef drw_wnd, CArrRef x_y_points_array);
void f_drawcircle(CObjRef drw_wnd, double ox, double oy, double px, double py);
void f_drawcolor(CObjRef drw_wnd, double x, double y, int paint_method);
void f_drawcomment(CObjRef drw_wnd, CStrRef comment);
bool f_drawcomposite(CObjRef drw_wnd, int composite_operator, double x, double y, double width, double height, CObjRef mgck_wnd);
void f_drawellipse(CObjRef drw_wnd, double ox, double oy, double rx, double ry, double start, double end);
String f_drawgetclippath(CObjRef drw_wnd);
int64_t f_drawgetcliprule(CObjRef drw_wnd);
int64_t f_drawgetclipunits(CObjRef drw_wnd);
Array f_drawgetexception(CObjRef drw_wnd);
String f_drawgetexceptionstring(CObjRef drw_wnd);
int64_t f_drawgetexceptiontype(CObjRef drw_wnd);
double f_drawgetfillalpha(CObjRef drw_wnd);
Object f_drawgetfillcolor(CObjRef drw_wnd);
double f_drawgetfillopacity(CObjRef drw_wnd);
int64_t f_drawgetfillrule(CObjRef drw_wnd);
String f_drawgetfont(CObjRef drw_wnd);
String f_drawgetfontfamily(CObjRef drw_wnd);
double f_drawgetfontsize(CObjRef drw_wnd);
int64_t f_drawgetfontstretch(CObjRef drw_wnd);
int64_t f_drawgetfontstyle(CObjRef drw_wnd);
double f_drawgetfontweight(CObjRef drw_wnd);
int64_t f_drawgetgravity(CObjRef drw_wnd);
double f_drawgetstrokealpha(CObjRef drw_wnd);
bool f_drawgetstrokeantialias(CObjRef drw_wnd);
Object f_drawgetstrokecolor(CObjRef drw_wnd);
Array f_drawgetstrokedasharray(CObjRef drw_wnd);
double f_drawgetstrokedashoffset(CObjRef drw_wnd);
int64_t f_drawgetstrokelinecap(CObjRef drw_wnd);
int64_t f_drawgetstrokelinejoin(CObjRef drw_wnd);
double f_drawgetstrokemiterlimit(CObjRef drw_wnd);
double f_drawgetstrokeopacity(CObjRef drw_wnd);
double f_drawgetstrokewidth(CObjRef drw_wnd);
int64_t f_drawgettextalignment(CObjRef drw_wnd);
bool f_drawgettextantialias(CObjRef drw_wnd);
int64_t f_drawgettextdecoration(CObjRef drw_wnd);
String f_drawgettextencoding(CObjRef drw_wnd);
Object f_drawgettextundercolor(CObjRef drw_wnd);
String f_drawgetvectorgraphics(CObjRef drw_wnd);
void f_drawline(CObjRef drw_wnd, double sx, double sy, double ex, double ey);
void f_drawmatte(CObjRef drw_wnd, double x, double y, int paint_method);
void f_drawpathclose(CObjRef drw_wnd);
void f_drawpathcurvetoabsolute(CObjRef drw_wnd, double x1, double y1, double x2, double y2, double x, double y);
void f_drawpathcurvetoquadraticbezierabsolute(CObjRef drw_wnd, double x1, double y1, double x, double y);
void f_drawpathcurvetoquadraticbezierrelative(CObjRef drw_wnd, double x1, double y1, double x, double y);
void f_drawpathcurvetoquadraticbeziersmoothabsolute(CObjRef drw_wnd, double x, double y);
void f_drawpathcurvetoquadraticbeziersmoothrelative(CObjRef drw_wnd, double x, double y);
void f_drawpathcurvetorelative(CObjRef drw_wnd, double x1, double y1, double x2, double y2, double x, double y);
void f_drawpathcurvetosmoothabsolute(CObjRef drw_wnd, double x2, double y2, double x, double y);
void f_drawpathcurvetosmoothrelative(CObjRef drw_wnd, double x2, double y2, double x, double y);
void f_drawpathellipticarcabsolute(CObjRef drw_wnd, double rx, double ry, double x_axis_rotation, bool large_arc_flag, bool sweep_flag, double x, double y);
void f_drawpathellipticarcrelative(CObjRef drw_wnd, double rx, double ry, double x_axis_rotation, bool large_arc_flag, bool sweep_flag, double x, double y);
void f_drawpathfinish(CObjRef drw_wnd);
void f_drawpathlinetoabsolute(CObjRef drw_wnd, double x, double y);
void f_drawpathlinetohorizontalabsolute(CObjRef drw_wnd, double x);
void f_drawpathlinetohorizontalrelative(CObjRef drw_wnd, double x);
void f_drawpathlinetorelative(CObjRef drw_wnd, double x, double y);
void f_drawpathlinetoverticalabsolute(CObjRef drw_wnd, double y);
void f_drawpathlinetoverticalrelative(CObjRef drw_wnd, double y);
void f_drawpathmovetoabsolute(CObjRef drw_wnd, double x, double y);
void f_drawpathmovetorelative(CObjRef drw_wnd, double x, double y);
void f_drawpathstart(CObjRef drw_wnd);
void f_drawpoint(CObjRef drw_wnd, double x, double y);
void f_drawpolygon(CObjRef drw_wnd, CArrRef x_y_points_array);
void f_drawpolyline(CObjRef drw_wnd, CArrRef x_y_points_array);
void f_drawrectangle(CObjRef drw_wnd, double x1, double y1, double x2, double y2);
bool f_drawrender(CObjRef drw_wnd);
void f_drawrotate(CObjRef drw_wnd, double degrees);
void f_drawroundrectangle(CObjRef drw_wnd, double x1, double y1, double x2, double y2, double rx, double ry);
void f_drawscale(CObjRef drw_wnd, double x, double y);
bool f_drawsetclippath(CObjRef drw_wnd, CStrRef clip_path);
void f_drawsetcliprule(CObjRef drw_wnd, int fill_rule);
void f_drawsetclipunits(CObjRef drw_wnd, int clip_path_units);
void f_drawsetfillalpha(CObjRef drw_wnd, double fill_opacity);
void f_drawsetfillcolor(CObjRef drw_wnd, CObjRef fill_pxl_wnd);
void f_drawsetfillopacity(CObjRef drw_wnd, double fill_opacity);
bool f_drawsetfillpatternurl(CObjRef drw_wnd, CStrRef fill_url);
void f_drawsetfillrule(CObjRef drw_wnd, int fill_rule);
bool f_drawsetfont(CObjRef drw_wnd, CStrRef font_file);
bool f_drawsetfontfamily(CObjRef drw_wnd, CStrRef font_family);
void f_drawsetfontsize(CObjRef drw_wnd, double pointsize);
void f_drawsetfontstretch(CObjRef drw_wnd, int stretch_type);
void f_drawsetfontstyle(CObjRef drw_wnd, int style_type);
void f_drawsetfontweight(CObjRef drw_wnd, double font_weight);
void f_drawsetgravity(CObjRef drw_wnd, int gravity_type);
void f_drawsetstrokealpha(CObjRef drw_wnd, double stroke_opacity);
void f_drawsetstrokeantialias(CObjRef drw_wnd, bool stroke_antialias = true);
void f_drawsetstrokecolor(CObjRef drw_wnd, CObjRef strokecolor_pxl_wnd);
void f_drawsetstrokedasharray(CObjRef drw_wnd, CArrRef dash_array = null_array);
void f_drawsetstrokedashoffset(CObjRef drw_wnd, double dash_offset);
void f_drawsetstrokelinecap(CObjRef drw_wnd, int line_cap);
void f_drawsetstrokelinejoin(CObjRef drw_wnd, int line_join);
void f_drawsetstrokemiterlimit(CObjRef drw_wnd, double miterlimit);
void f_drawsetstrokeopacity(CObjRef drw_wnd, double stroke_opacity);
bool f_drawsetstrokepatternurl(CObjRef drw_wnd, CStrRef stroke_url);
void f_drawsetstrokewidth(CObjRef drw_wnd, double stroke_width);
void f_drawsettextalignment(CObjRef drw_wnd, int align_type);
void f_drawsettextantialias(CObjRef drw_wnd, bool text_antialias = true);
void f_drawsettextdecoration(CObjRef drw_wnd, int decoration_type);
void f_drawsettextencoding(CObjRef drw_wnd, CStrRef encoding);
void f_drawsettextundercolor(CObjRef drw_wnd, CObjRef undercolor_pxl_wnd);
bool f_drawsetvectorgraphics(CObjRef drw_wnd, CStrRef vector_graphics);
void f_drawsetviewbox(CObjRef drw_wnd, double x1, double y1, double x2, double y2);
void f_drawskewx(CObjRef drw_wnd, double degrees);
void f_drawskewy(CObjRef drw_wnd, double degrees);
void f_drawtranslate(CObjRef drw_wnd, double x, double y);
void f_pushdrawingwand(CObjRef drw_wnd);
void f_drawpushclippath(CObjRef drw_wnd, CStrRef clip_path_id);
void f_drawpushdefs(CObjRef drw_wnd);
void f_drawpushpattern(CObjRef drw_wnd, CStrRef pattern_id, double x, double y, double width, double height);
void f_popdrawingwand(CObjRef drw_wnd);
void f_drawpopclippath(CObjRef drw_wnd);
void f_drawpopdefs(CObjRef drw_wnd);
void f_drawpoppattern(CObjRef drw_wnd);
bool f_magickadaptivethresholdimage(CObjRef mgck_wnd, double width, double height, double offset);
bool f_magickaddimage(CObjRef mgck_wnd, CObjRef add_wand);
bool f_magickaddnoiseimage(CObjRef mgck_wnd, int noise_type);
bool f_magickaffinetransformimage(CObjRef mgck_wnd, CObjRef drw_wnd);
bool f_magickannotateimage(CObjRef mgck_wnd, CObjRef drw_wnd, double x, double y, double angle, CStrRef text);
Object f_magickappendimages(CObjRef mgck_wnd, bool stack_vertical = false);
Object f_magickaverageimages(CObjRef mgck_wnd);
bool f_magickblackthresholdimage(CObjRef mgck_wnd, CObjRef threshold_pxl_wnd);
bool f_magickblurimage(CObjRef mgck_wnd, double radius, double sigma, int channel_type = 0);
bool f_magickborderimage(CObjRef mgck_wnd, CObjRef bordercolor, double width, double height);
bool f_magickcharcoalimage(CObjRef mgck_wnd, double radius, double sigma);
bool f_magickchopimage(CObjRef mgck_wnd, double width, double height, int x, int y);
bool f_magickclipimage(CObjRef mgck_wnd);
bool f_magickclippathimage(CObjRef mgck_wnd, CStrRef pathname, bool inside);
Object f_magickcoalesceimages(CObjRef mgck_wnd);
bool f_magickcolorfloodfillimage(CObjRef mgck_wnd, CObjRef fillcolor_pxl_wnd, double fuzz, CObjRef bordercolor_pxl_wnd, int x, int y);
bool f_magickcolorizeimage(CObjRef mgck_wnd, CObjRef colorize, CObjRef opacity_pxl_wnd);
Object f_magickcombineimages(CObjRef mgck_wnd, int channel_type);
bool f_magickcommentimage(CObjRef mgck_wnd, CStrRef comment);
Array f_magickcompareimages(CObjRef mgck_wnd, CObjRef reference_wnd, int metric_type, int channel_type = 0);
bool f_magickcompositeimage(CObjRef mgck_wnd, CObjRef composite_wnd, int composite_operator, int x, int y);
bool f_magickconstituteimage(CObjRef mgck_wnd, double columns, double rows, CStrRef smap, int storage_type, CArrRef pixel_array);
bool f_magickcontrastimage(CObjRef mgck_wnd, bool sharpen);
bool f_magickconvolveimage(CObjRef mgck_wnd, CArrRef kernel_array, int channel_type = 0);
bool f_magickcropimage(CObjRef mgck_wnd, double width, double height, int x, int y);
bool f_magickcyclecolormapimage(CObjRef mgck_wnd, int num_positions);
Object f_magickdeconstructimages(CObjRef mgck_wnd);
String f_magickdescribeimage(CObjRef mgck_wnd);
bool f_magickdespeckleimage(CObjRef mgck_wnd);
bool f_magickdrawimage(CObjRef mgck_wnd, CObjRef drw_wnd);
bool f_magickechoimageblob(CObjRef mgck_wnd);
bool f_magickechoimagesblob(CObjRef mgck_wnd);
bool f_magickedgeimage(CObjRef mgck_wnd, double radius);
bool f_magickembossimage(CObjRef mgck_wnd, double radius, double sigma);
bool f_magickenhanceimage(CObjRef mgck_wnd);
bool f_magickequalizeimage(CObjRef mgck_wnd);
bool f_magickevaluateimage(CObjRef mgck_wnd, int evaluate_op, double constant, int channel_type = 0);
Object f_magickflattenimages(CObjRef mgck_wnd);
bool f_magickflipimage(CObjRef mgck_wnd);
bool f_magickflopimage(CObjRef mgck_wnd);
bool f_magickframeimage(CObjRef mgck_wnd, CObjRef matte_color, double width, double height, int inner_bevel, int outer_bevel);
Object f_magickfximage(CObjRef mgck_wnd, CStrRef expression, int channel_type = 0);
bool f_magickgammaimage(CObjRef mgck_wnd, double gamma, int channel_type = 0);
bool f_magickgaussianblurimage(CObjRef mgck_wnd, double radius, double sigma, int channel_type = 0);
double f_magickgetcharheight(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
double f_magickgetcharwidth(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
Array f_magickgetexception(CObjRef mgck_wnd);
String f_magickgetexceptionstring(CObjRef mgck_wnd);
int64_t f_magickgetexceptiontype(CObjRef mgck_wnd);
String f_magickgetfilename(CObjRef mgck_wnd);
String f_magickgetformat(CObjRef mgck_wnd);
Object f_magickgetimage(CObjRef mgck_wnd);
Object f_magickgetimagebackgroundcolor(CObjRef mgck_wnd);
String f_magickgetimageblob(CObjRef mgck_wnd);
Array f_magickgetimageblueprimary(CObjRef mgck_wnd);
Object f_magickgetimagebordercolor(CObjRef mgck_wnd);
Array f_magickgetimagechannelmean(CObjRef mgck_wnd, int channel_type);
Object f_magickgetimagecolormapcolor(CObjRef mgck_wnd, double index);
double f_magickgetimagecolors(CObjRef mgck_wnd);
int64_t f_magickgetimagecolorspace(CObjRef mgck_wnd);
int64_t f_magickgetimagecompose(CObjRef mgck_wnd);
int64_t f_magickgetimagecompression(CObjRef mgck_wnd);
double f_magickgetimagecompressionquality(CObjRef mgck_wnd);
double f_magickgetimagedelay(CObjRef mgck_wnd);
double f_magickgetimagedepth(CObjRef mgck_wnd, int channel_type = 0);
int64_t f_magickgetimagedispose(CObjRef mgck_wnd);
Array f_magickgetimageextrema(CObjRef mgck_wnd, int channel_type = 0);
String f_magickgetimagefilename(CObjRef mgck_wnd);
String f_magickgetimageformat(CObjRef mgck_wnd);
double f_magickgetimagegamma(CObjRef mgck_wnd);
Array f_magickgetimagegreenprimary(CObjRef mgck_wnd);
double f_magickgetimageheight(CObjRef mgck_wnd);
Array f_magickgetimagehistogram(CObjRef mgck_wnd);
int64_t f_magickgetimageindex(CObjRef mgck_wnd);
int64_t f_magickgetimageinterlacescheme(CObjRef mgck_wnd);
double f_magickgetimageiterations(CObjRef mgck_wnd);
Object f_magickgetimagemattecolor(CObjRef mgck_wnd);
String f_magickgetimagemimetype(CObjRef mgck_wnd);
Array f_magickgetimagepixels(CObjRef mgck_wnd, int x_offset, int y_offset, double columns, double rows, CStrRef smap, int storage_type);
String f_magickgetimageprofile(CObjRef mgck_wnd, CStrRef name);
Array f_magickgetimageredprimary(CObjRef mgck_wnd);
int64_t f_magickgetimagerenderingintent(CObjRef mgck_wnd);
Array f_magickgetimageresolution(CObjRef mgck_wnd);
double f_magickgetimagescene(CObjRef mgck_wnd);
String f_magickgetimagesignature(CObjRef mgck_wnd);
int64_t f_magickgetimagesize(CObjRef mgck_wnd);
int64_t f_magickgetimagetype(CObjRef mgck_wnd);
int64_t f_magickgetimageunits(CObjRef mgck_wnd);
int64_t f_magickgetimagevirtualpixelmethod(CObjRef mgck_wnd);
Array f_magickgetimagewhitepoint(CObjRef mgck_wnd);
double f_magickgetimagewidth(CObjRef mgck_wnd);
String f_magickgetimagesblob(CObjRef mgck_wnd);
int64_t f_magickgetinterlacescheme(CObjRef mgck_wnd);
double f_magickgetmaxtextadvance(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
String f_magickgetmimetype(CObjRef mgck_wnd);
double f_magickgetnumberimages(CObjRef mgck_wnd);
Array f_magickgetsamplingfactors(CObjRef mgck_wnd);
Array f_magickgetsize(CObjRef mgck_wnd);
double f_magickgetstringheight(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
double f_magickgetstringwidth(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
double f_magickgettextascent(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
double f_magickgettextdescent(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
Array f_magickgetwandsize(CObjRef mgck_wnd);
bool f_magickhasnextimage(CObjRef mgck_wnd);
bool f_magickhaspreviousimage(CObjRef mgck_wnd);
bool f_magickimplodeimage(CObjRef mgck_wnd, double amount);
bool f_magicklabelimage(CObjRef mgck_wnd, CStrRef label);
bool f_magicklevelimage(CObjRef mgck_wnd, double black_point, double gamma, double white_point, int channel_type = 0);
bool f_magickmagnifyimage(CObjRef mgck_wnd);
bool f_magickmapimage(CObjRef mgck_wnd, CObjRef map_wand, bool dither);
bool f_magickmattefloodfillimage(CObjRef mgck_wnd, double opacity, double fuzz, CObjRef bordercolor_pxl_wnd, int x, int y);
bool f_magickmedianfilterimage(CObjRef mgck_wnd, double radius);
bool f_magickminifyimage(CObjRef mgck_wnd);
bool f_magickmodulateimage(CObjRef mgck_wnd, double brightness, double saturation, double hue);
Object f_magickmontageimage(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef tile_geometry, CStrRef thumbnail_geometry, int montage_mode, CStrRef frame);
Object f_magickmorphimages(CObjRef mgck_wnd, double number_frames);
Object f_magickmosaicimages(CObjRef mgck_wnd);
bool f_magickmotionblurimage(CObjRef mgck_wnd, double radius, double sigma, double angle);
bool f_magicknegateimage(CObjRef mgck_wnd, bool only_the_gray = false, int channel_type = 0);
bool f_magicknewimage(CObjRef mgck_wnd, double width, double height, CStrRef imagemagick_col_str = null_string);
bool f_magicknextimage(CObjRef mgck_wnd);
bool f_magicknormalizeimage(CObjRef mgck_wnd);
bool f_magickoilpaintimage(CObjRef mgck_wnd, double radius);
bool f_magickpaintopaqueimage(CObjRef mgck_wnd, CObjRef target_pxl_wnd, CObjRef fill_pxl_wnd, double fuzz = 0.0);
bool f_magickpainttransparentimage(CObjRef mgck_wnd, CObjRef target, double opacity = k_MW_TransparentOpacity, double fuzz = 0.0);
bool f_magickpingimage(CObjRef mgck_wnd, CStrRef filename);
bool f_magickposterizeimage(CObjRef mgck_wnd, double levels, bool dither);
Object f_magickpreviewimages(CObjRef mgck_wnd, int preview);
bool f_magickpreviousimage(CObjRef mgck_wnd);
bool f_magickprofileimage(CObjRef mgck_wnd, CStrRef name, CStrRef profile = null_string);
bool f_magickquantizeimage(CObjRef mgck_wnd, double number_colors, int colorspace_type, double treedepth, bool dither, bool measure_error);
bool f_magickquantizeimages(CObjRef mgck_wnd, double number_colors, int colorspace_type, double treedepth, bool dither, bool measure_error);
Array f_magickqueryfontmetrics(CObjRef mgck_wnd, CObjRef drw_wnd, CStrRef txt, bool multiline = false);
bool f_magickradialblurimage(CObjRef mgck_wnd, double angle);
bool f_magickraiseimage(CObjRef mgck_wnd, double width, double height, int x, int y, bool raise);
bool f_magickreadimage(CObjRef mgck_wnd, CStrRef filename);
bool f_magickreadimageblob(CObjRef mgck_wnd, CStrRef blob);
bool f_magickreadimagefile(CObjRef mgck_wnd, CObjRef handle);
bool f_magickreadimages(CObjRef mgck_wnd, CArrRef img_filenames_array);
bool f_magickreducenoiseimage(CObjRef mgck_wnd, double radius);
bool f_magickremoveimage(CObjRef mgck_wnd);
String f_magickremoveimageprofile(CObjRef mgck_wnd, CStrRef name);
bool f_magickremoveimageprofiles(CObjRef mgck_wnd);
bool f_magickresampleimage(CObjRef mgck_wnd, double x_resolution, double y_resolution, int filter_type, double blur);
void f_magickresetiterator(CObjRef mgck_wnd);
bool f_magickresizeimage(CObjRef mgck_wnd, double columns, double rows, int filter_type, double blur);
bool f_magickrollimage(CObjRef mgck_wnd, int x_offset, int y_offset);
bool f_magickrotateimage(CObjRef mgck_wnd, CObjRef background, double degrees);
bool f_magicksampleimage(CObjRef mgck_wnd, double columns, double rows);
bool f_magickscaleimage(CObjRef mgck_wnd, double columns, double rows);
bool f_magickseparateimagechannel(CObjRef mgck_wnd, int channel_type);
bool f_magicksetcompressionquality(CObjRef mgck_wnd, double quality);
bool f_magicksetfilename(CObjRef mgck_wnd, CStrRef filename = null_string);
void f_magicksetfirstiterator(CObjRef mgck_wnd);
bool f_magicksetformat(CObjRef mgck_wnd, CStrRef format);
bool f_magicksetimage(CObjRef mgck_wnd, CObjRef replace_wand);
bool f_magicksetimagebackgroundcolor(CObjRef mgck_wnd, CObjRef background_pxl_wnd);
bool f_magicksetimagebias(CObjRef mgck_wnd, double bias);
bool f_magicksetimageblueprimary(CObjRef mgck_wnd, double x, double y);
bool f_magicksetimagebordercolor(CObjRef mgck_wnd, CObjRef border_pxl_wnd);
bool f_magicksetimagecolormapcolor(CObjRef mgck_wnd, double index, CObjRef mapcolor_pxl_wnd);
bool f_magicksetimagecolorspace(CObjRef mgck_wnd, int colorspace_type);
bool f_magicksetimagecompose(CObjRef mgck_wnd, int composite_operator);
bool f_magicksetimagecompression(CObjRef mgck_wnd, int compression_type);
bool f_magicksetimagecompressionquality(CObjRef mgck_wnd, double quality);
bool f_magicksetimagedelay(CObjRef mgck_wnd, double delay);
bool f_magicksetimagedepth(CObjRef mgck_wnd, int depth, int channel_type = 0);
bool f_magicksetimagedispose(CObjRef mgck_wnd, int dispose_type);
bool f_magicksetimagefilename(CObjRef mgck_wnd, CStrRef filename = null_string);
bool f_magicksetimageformat(CObjRef mgck_wnd, CStrRef format);
bool f_magicksetimagegamma(CObjRef mgck_wnd, double gamma);
bool f_magicksetimagegreenprimary(CObjRef mgck_wnd, double x, double y);
bool f_magicksetimageindex(CObjRef mgck_wnd, int index);
bool f_magicksetimageinterlacescheme(CObjRef mgck_wnd, int interlace_type);
bool f_magicksetimageiterations(CObjRef mgck_wnd, double iterations);
bool f_magicksetimagemattecolor(CObjRef mgck_wnd, CObjRef matte_pxl_wnd);
bool f_magicksetimageoption(CObjRef mgck_wnd, CStrRef format, CStrRef key, CStrRef value);
bool f_magicksetimagepixels(CObjRef mgck_wnd, int x_offset, int y_offset, double columns, double rows, CStrRef smap, int storage_type, CArrRef pixel_array);
bool f_magicksetimageprofile(CObjRef mgck_wnd, CStrRef name, CStrRef profile);
bool f_magicksetimageredprimary(CObjRef mgck_wnd, double x, double y);
bool f_magicksetimagerenderingintent(CObjRef mgck_wnd, int rendering_intent);
bool f_magicksetimageresolution(CObjRef mgck_wnd, double x_resolution, double y_resolution);
bool f_magicksetimagescene(CObjRef mgck_wnd, double scene);
bool f_magicksetimagetype(CObjRef mgck_wnd, int image_type);
bool f_magicksetimageunits(CObjRef mgck_wnd, int resolution_type);
bool f_magicksetimagevirtualpixelmethod(CObjRef mgck_wnd, int virtual_pixel_method);
bool f_magicksetimagewhitepoint(CObjRef mgck_wnd, double x, double y);
bool f_magicksetinterlacescheme(CObjRef mgck_wnd, int interlace_type);
void f_magicksetlastiterator(CObjRef mgck_wnd);
bool f_magicksetpassphrase(CObjRef mgck_wnd, CStrRef passphrase);
bool f_magicksetresolution(CObjRef mgck_wnd, double x_resolution, double y_resolution);
bool f_magicksetsamplingfactors(CObjRef mgck_wnd, double number_factors, CArrRef sampling_factors);
bool f_magicksetsize(CObjRef mgck_wnd, int columns, int rows);
bool f_magicksetwandsize(CObjRef mgck_wnd, int columns, int rows);
bool f_magicksharpenimage(CObjRef mgck_wnd, double radius, double sigma, int channel_type = 0);
bool f_magickshaveimage(CObjRef mgck_wnd, int columns, int rows);
bool f_magickshearimage(CObjRef mgck_wnd, CObjRef background, double x_shear, double y_shear);
bool f_magicksolarizeimage(CObjRef mgck_wnd, double threshold);
bool f_magickspliceimage(CObjRef mgck_wnd, double width, double height, int x, int y);
bool f_magickspreadimage(CObjRef mgck_wnd, double radius);
Object f_magicksteganoimage(CObjRef mgck_wnd, CObjRef watermark_wand, int offset);
bool f_magickstereoimage(CObjRef mgck_wnd, CObjRef offset_wand);
bool f_magickstripimage(CObjRef mgck_wnd);
bool f_magickswirlimage(CObjRef mgck_wnd, double degrees);
Object f_magicktextureimage(CObjRef mgck_wnd, CObjRef texture_wand);
bool f_magickthresholdimage(CObjRef mgck_wnd, double threshold, int channel_type = 0);
bool f_magicktintimage(CObjRef mgck_wnd, int tint_pxl_wnd, CObjRef opacity_pxl_wnd);
Object f_magicktransformimage(CObjRef mgck_wnd, CStrRef crop, CStrRef geometry);
bool f_magicktrimimage(CObjRef mgck_wnd, double fuzz);
bool f_magickunsharpmaskimage(CObjRef mgck_wnd, double radius, double sigma, double amount, double threshold, int channel_type = 0);
bool f_magickwaveimage(CObjRef mgck_wnd, double amplitude, double wave_length);
bool f_magickwhitethresholdimage(CObjRef mgck_wnd, CObjRef threshold_pxl_wnd);
bool f_magickwriteimage(CObjRef mgck_wnd, CStrRef filename);
bool f_magickwriteimagefile(CObjRef mgck_wnd, CObjRef handle);
bool f_magickwriteimages(CObjRef mgck_wnd, CStrRef filename = "", bool join_images = false);
bool f_magickwriteimagesfile(CObjRef mgck_wnd, CObjRef handle);
double f_pixelgetalpha(CObjRef pxl_wnd);
double f_pixelgetalphaquantum(CObjRef pxl_wnd);
double f_pixelgetblack(CObjRef pxl_wnd);
double f_pixelgetblackquantum(CObjRef pxl_wnd);
double f_pixelgetblue(CObjRef pxl_wnd);
double f_pixelgetbluequantum(CObjRef pxl_wnd);
String f_pixelgetcolorasstring(CObjRef pxl_wnd);
double f_pixelgetcolorcount(CObjRef pxl_wnd);
double f_pixelgetcyan(CObjRef pxl_wnd);
double f_pixelgetcyanquantum(CObjRef pxl_wnd);
Array f_pixelgetexception(CObjRef pxl_wnd);
String f_pixelgetexceptionstring(CObjRef pxl_wnd);
int64_t f_pixelgetexceptiontype(CObjRef pxl_wnd);
double f_pixelgetgreen(CObjRef pxl_wnd);
double f_pixelgetgreenquantum(CObjRef pxl_wnd);
double f_pixelgetindex(CObjRef pxl_wnd);
double f_pixelgetmagenta(CObjRef pxl_wnd);
double f_pixelgetmagentaquantum(CObjRef pxl_wnd);
double f_pixelgetopacity(CObjRef pxl_wnd);
double f_pixelgetopacityquantum(CObjRef pxl_wnd);
Array f_pixelgetquantumcolor(CObjRef pxl_wnd);
double f_pixelgetred(CObjRef pxl_wnd);
double f_pixelgetredquantum(CObjRef pxl_wnd);
double f_pixelgetyellow(CObjRef pxl_wnd);
double f_pixelgetyellowquantum(CObjRef pxl_wnd);
void f_pixelsetalpha(CObjRef pxl_wnd, double alpha);
void f_pixelsetalphaquantum(CObjRef pxl_wnd, double alpha);
void f_pixelsetblack(CObjRef pxl_wnd, double black);
void f_pixelsetblackquantum(CObjRef pxl_wnd, double black);
void f_pixelsetblue(CObjRef pxl_wnd, double blue);
void f_pixelsetbluequantum(CObjRef pxl_wnd, double blue);
void f_pixelsetcolor(CObjRef pxl_wnd, CStrRef imagemagick_col_str);
void f_pixelsetcolorcount(CObjRef pxl_wnd, int count);
void f_pixelsetcyan(CObjRef pxl_wnd, double cyan);
void f_pixelsetcyanquantum(CObjRef pxl_wnd, double cyan);
void f_pixelsetgreen(CObjRef pxl_wnd, double green);
void f_pixelsetgreenquantum(CObjRef pxl_wnd, double green);
void f_pixelsetindex(CObjRef pxl_wnd, double index);
void f_pixelsetmagenta(CObjRef pxl_wnd, double magenta);
void f_pixelsetmagentaquantum(CObjRef pxl_wnd, double magenta);
void f_pixelsetopacity(CObjRef pxl_wnd, double opacity);
void f_pixelsetopacityquantum(CObjRef pxl_wnd, double opacity);
void f_pixelsetquantumcolor(CObjRef pxl_wnd, double red, double green, double blue, double opacity = 0.0);
void f_pixelsetred(CObjRef pxl_wnd, double red);
void f_pixelsetredquantum(CObjRef pxl_wnd, double red);
void f_pixelsetyellow(CObjRef pxl_wnd, double yellow);
void f_pixelsetyellowquantum(CObjRef pxl_wnd, double yellow);
Array f_pixelgetiteratorexception(CObjRef pxl_iter);
String f_pixelgetiteratorexceptionstring(CObjRef pxl_iter);
int64_t f_pixelgetiteratorexceptiontype(CObjRef pxl_iter);
Array f_pixelgetnextiteratorrow(CObjRef pxl_iter);
void f_pixelresetiterator(CObjRef pxl_iter);
bool f_pixelsetiteratorrow(CObjRef pxl_iter, int row);
bool f_pixelsynciterator(CObjRef pxl_iter);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_MAGICK_H__
