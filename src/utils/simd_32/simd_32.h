/**
* Lightweight wrappers for SIMD operations
* (C) 2009 Jack Lloyd
*
* Distributed under the terms of the Botan license
*/

#ifndef BOTAN_SIMD_32_H__
#define BOTAN_SIMD_32_H__

#include <botan/types.h>

#if defined(BOTAN_TARGET_CPU_HAS_SSE2)

  #include <botan/internal/simd_sse.h>
  namespace Botan { typedef SIMD_SSE2 SIMD_32; }

#elif defined(BOTAN_TARGET_CPU_HAS_ALTIVEC)

  #include <botan/internal/simd_altivec.h>
  namespace Botan { typedef SIMD_Altivec SIMD_32; }

#else

  #include <botan/internal/simd_scalar.h>
  namespace Botan { typedef SIMD_Scalar SIMD_32; }

#endif

namespace Botan {

inline SIMD_32 rotate_left(SIMD_32 x, u32bit rot)
   {
   x.rotate_left(rot);
   return x;
   }

inline SIMD_32 rotate_right(SIMD_32 x, u32bit rot)
   {
   x.rotate_right(rot);
   return x;
   }

}

#endif
