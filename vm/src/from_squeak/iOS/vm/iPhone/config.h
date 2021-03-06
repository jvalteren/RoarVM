/* config.h.  Generated by configure.  */
/* config.h.in -- template for config.h			-*- C -*-
 *
 *   Copyright (C) 1996-2005 by Ian Piumarta and other authors/contributors
 *                              listed elsewhere in this file.
*/
/* Permission is hereby granted, free of charge, to any person
*  obtaining a copy of this software and associated documentation
*  files (the "Software"), to deal in the Software without
*  restriction, including without limitation the rights to use,
*  copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the
*  Software is furnished to do so, subject to the following
*  conditions:
*  
*  The above copyright notice and this permission notice shall be
*  included in all copies or substantial portions of the Software.
*  
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
*  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
*  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
*  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
*  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
*  OTHER DEALINGS IN THE SOFTWARE.
*/
//

/* Author: Ian.Piumarta@squeakland.org
 *
 * Last edited: 2005-03-28 22:47:17 by piumarta on emilia.local
 */

#ifndef __sq_config_h
#define __sq_config_h

/* explicit image width */

#define	HAVE_INTERP_H 1

/* package options */

#define	USE_X11 1
/* #undef	USE_X11_GLX */
#define	USE_QUARTZ 1
#define	USE_QUARTZ_CGL 1
/* #undef	USE_RFB */

/* libraries */

/* #undef	HAVE_LIBX11 */
#define	HAVE_LIBXEXT 1
/* #undef	HAVE_LIBDL */
#define	HAVE_DYLD 1
/* #undef	HAVE_LIBFFI */
/* #undef	HAVE_ICONV */

/* #undef	USE_AUDIO_NONE */
/* #undef	USE_AUDIO_SUN */
/* #undef	USE_AUDIO_NAS */
/* #undef	USE_AUDIO_OSS */
/* #undef	USE_AUDIO_MACOSX */
/* #undef	OSS_DEVICE */

/* header files */

#define	HAVE_UNISTD_H 1
/* #undef	NEED_GETHOSTNAME_P */

#define	HAVE_DIRENT_H 1
/* #undef	HAVE_SYS_NDIR_H */
/* #undef	HAVE_SYS_DIR_H */
/* #undef	HAVE_NDIR_H */

#if MAC_OS_X_VERSION_MIN_REQUIRED < MAC_OS_X_VERSION_10_3
#undef	HAVE_DLFCN_H 
#else
#define	HAVE_DLFCN_H 1
#endif

#define	HAVE_ICONV_H 1

#define	HAVE_SYS_TIME_H 1
#define	TIME_WITH_SYS_TIME 1

#define	HAVE_SYS_FILIO_H 1

/* #undef	HAVE_SYS_AUDIOIO_H */
/* #undef	HAVE_SUN_AUDIOIO_H */

/* #undef	HAVE_PTY_H */
#define	HAVE_UTIL_H 1
/* #undef	HAVE_LIBUTIL_H */
/* #undef	HAVE_STROPTS_H */

/* #undef	HAVE_GL_GL_H */
#define	HAVE_OPENGL_GL_H 1

/* #undef	NEED_SUNOS_H */

/* system calls/library functions */

#define	AT_EXIT atexit

#define	HAVE_TZSET 1

#define	HAVE_OPENPTY 1
/* #undef	HAVE_UNIX98_PTYS */

#define	HAVE_SNPRINTF 1
/* #undef	HAVE___SNPRINTF */

#define	HAVE_MMAP 1

#define	HAVE_DYLD 1

#define	HAVE_LANGINFO_CODESET 1

#define	HAVE_ALLOCA 1
#define	HAVE_ALLOCA_H 1

#define	HAVE_UNSETENV 1

/* widths of primitive types */

#define	SIZEOF_INT 4
#define	SIZEOF_LONG 4
#define	SIZEOF_LONG_LONG 8
#ifdef __x86_64__
#define	SIZEOF_VOID_P 8
#else
#define	SIZEOF_VOID_P 4
#endif
/* structures */

#define	HAVE_TM_GMTOFF 1
#define	HAVE_TIMEZONE 1

/* typedefs */

/* #undef	size_t */

#define	squeakInt64 long long

/* architecture */

#define	OS_TYPE "unix"

/* #undef	VM_HOST_VENDOR */
#define	VM_HOST_OS "darwin8.5.0"

#if defined(__BIG_ENDIAN__)
#define	WORDS_BIGENDIAN 1
#define VMENDIANNESS 1
#define VMBIGENDIAN 1
#define	VM_HOST "powerpc-apple-darwin8.5.0"
#define	VM_HOST_CPU "powerpc"
#else
#undef	WORDS_BIGENDIAN 
#define VMENDIANNESS 0
#define VMBIGENDIAN 0
#define	VM_HOST "intel-apple-darwin8.5.0"
#define	VM_HOST_CPU "intel"
#if COGVM
#else
#define	DOUBLE_WORD_ORDER 1
#endif
#define LSB_FIRST 1
#endif

#define HAVE_LIBDL 1
/* #undef	DOUBLE_WORD_ALIGNMENT */
/* #undef	DOUBLE_WORD_ORDER */

/* damage containment */

#define	DARWIN 1

#ifdef NEED_SUNOS_H
# include "sunos.h"
#endif

/* other configured variables */

#define SQ_VERSION "3.8g-6548"
#define VM_VERSION "3.8a-2"
#define VM_LIBDIR "/usr/local/lib/squeak/3.8a-2"
#define VM_MODULE_PREFIX ""
/* #undef VM_DLSYM_PREFIX */
#define VM_X11DIR "/usr/X11R6/lib"

/* avoid dependencies on glibc2.3 */

/* #undef HAVE_FEATURES_H */

#if defined(HAVE_FEATURES_H)
# include "glibc.h"
#endif


#endif /* __sq_config_h */
