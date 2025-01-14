/*
	This file is part of Warzone 2100.
	Copyright (C) 2004  Giel van Schijndel
	Copyright (C) 2007-2020  Warzone 2100 Project

	Warzone 2100 is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	Warzone 2100 is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with Warzone 2100; if not, write to the Free Software
	Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef __INCLUDED_VERSION_H__
#define __INCLUDED_VERSION_H__

#include "lib/framework/types.h"
#include <string>

const char *version_getVersionString();
const char *version_getFormattedVersionString(bool translated = true); // not thread-safe
std::string version_getVersionedAppDirFolderName();

std::string version_getBuildIdentifierReleaseString();
std::string version_getBuildIdentifierReleaseEnvironment();

#endif // __INCLUDED_VERSION_H__
