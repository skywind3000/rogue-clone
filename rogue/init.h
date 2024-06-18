//=====================================================================
//
// init.h - platform specific initialization
//
// Last Modified: 2024/06/18 17:38:20
//
//=====================================================================
#ifndef _INIT_H_
#define _INIT_H_

#include <stddef.h>
#include <stdint.h>

#if defined(WIN32) || defined(_WIN32) || defined(_WIN64) || defined(WIN64)
	#ifndef _WIN32
		#define _WIN32
	#endif
	#ifndef WINDOWS
		#define WINDOWS 1
	#endif
#else
	#ifndef __linux
		#define __linux 1
	#endif
#endif


#ifndef __RCSID
#define __RCSID(arg)	static const char rcsid[] __attribute__((__unused__)) = arg
#endif

#ifndef __COPYRIGHT
#define __COPYRIGHT(arg)	static const char copyright[] __attribute__((__unused__)) = arg
#endif



//---------------------------------------------------------------------
// types
//---------------------------------------------------------------------
#ifndef boolean
typedef unsigned char boolean;
#endif


//---------------------------------------------------------------------
// OPTIONS
//---------------------------------------------------------------------
#ifdef WINDOWS
#define HAVE_PDCURSES 1
#endif


#endif



