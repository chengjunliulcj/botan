/*************************************************
* Lookup Table Management Header File            *
* (C) 1999-2007 Jack Lloyd                       *
*************************************************/

#ifndef BOTAN_LOOKUP_MANGEMENT_H__
#define BOTAN_LOOKUP_MANGEMENT_H__

#include <botan/libstate.h>

#include <botan/block_cipher.h>
#include <botan/stream_cipher.h>
#include <botan/hash.h>
#include <botan/mac.h>
#include <botan/s2k.h>
#include <botan/mode_pad.h>

namespace Botan {

/*************************************************
* Add an algorithm to the lookup table           *
*************************************************/
BOTAN_DLL void add_algorithm(Library_State&, BlockCipher*);
BOTAN_DLL void add_algorithm(Library_State&, StreamCipher*);
BOTAN_DLL void add_algorithm(Library_State&, HashFunction*);
BOTAN_DLL void add_algorithm(Library_State&, MessageAuthenticationCode*);
BOTAN_DLL void add_algorithm(Library_State&, S2K*);
BOTAN_DLL void add_algorithm(Library_State&, BlockCipherModePaddingMethod*);

}

#endif
