////////////////////////////////////////////////////////////////////////////////
// GLES3.h (Leggiero - Library)
//
// Include OpenGL ES 3.0 Header (dependes on each platform)
////////////////////////////////////////////////////////////////////////////////

#ifndef __LIBRARY__GLES3_H
#define __LIBRARY__GLES3_H


// Leggiero.Basic
#include "../../Common/Basic/LeggieroBasic.h"


#if defined _LEGGIERO_IOS
    #include <MetalANGLE/GLES3/gl3.h>
#elif defined _LEGGIERO_ANDROID
	#include <GLES3/gl3.h>
#elif defined _LEGGIERO_WINPC
	#define GL_GLEXT_PROTOTYPES
	#include <GLES3/gl3.h>
#else
	#error The platform does not support OpenGL ES 3.0
#endif

#endif
