//-----------------------------------------------------------------------------
//
// Copyright 1993-1996 id Software
// Copyright 1999-2016 Randy Heit
// Copyright 2002-2016 Christoph Oelckers
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/
//
//-----------------------------------------------------------------------------
//


#ifndef __M_MISC__
#define __M_MISC__

#include "basics.h"
#include "zstring.h"
#include "tarray.h"

class FConfigFile;
class FGameConfigFile;
class FIWadManager;

extern FGameConfigFile *GameConfig;

void M_FindResponseFile (void);

// [RH] M_ScreenShot now accepts a filename parameter.
//		Pass a NULL to get the original behavior.
void M_ScreenShot (const char *filename);
// Paired captures use the native screenshot location and explicit PNG results.
bool M_Doom4KComparisonNames(FString& original, FString& hq, const char* requested);
bool M_Doom4KWritePNG(const FString& filename, const TArray<uint8_t>& buffer, int pitch, int colorType, float gamma, int width, int height);


void M_LoadDefaults ();

bool M_SaveDefaults (const char *filename);
void M_SaveCustomKeys (FConfigFile *config, char *section, char *subsection, size_t sublen);


#include "i_specialpaths.h"
#endif
