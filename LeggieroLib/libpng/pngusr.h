/* pngusr.h - custom library definition */

#ifndef __LEGGIERO__LIBRARY__LIBPNG__PNGUSR_H
#define __LEGGIERO__LIBRARY__LIBPNG__PNGUSR_H


#if defined(_WIN32) || defined(__WIN32__)
	#include "pngusr_WinPC.h"
#elif defined(__APPLE__)
    #ifdef __LP64__
        #include "pngusr_AArch64.h"
    #else
        #include "pngusr_Arm.h"
    #endif
#elif defined(ANDROID) || defined(__ANDROID__)
	#ifdef _ARM64
		#include "pngusr_AArch64.h"
	#else
		#include "pngusr_Arm.h"
	#endif
#else
	// Unknown Platform
#endif

#endif
