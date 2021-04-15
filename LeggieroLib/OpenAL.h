////////////////////////////////////////////////////////////////////////////////
// OpenAL.h (Leggiero - Library)
//
// Include OpenAL Header (dependes on each platform)
////////////////////////////////////////////////////////////////////////////////

#ifndef __LIBRARY__OPENAL_H
#define __LIBRARY__OPENAL_H


// Leggiero.Basic
#include "../../Common/Basic/LeggieroBasic.h"


#if defined _LEGGIERO_IOS
    #include <soft_oal/al.h>
    #include <soft_oal/alc.h>
#elif defined _LEGGIERO_WINPC
    #include <AL/al.h>
	#include <AL/alc.h>
#else
	// Cannot use OpenAL in Android
	#error The platform does not support OpenAL
#endif

#endif
