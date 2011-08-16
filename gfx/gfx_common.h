/*  SSNES - A Super Nintendo Entertainment System (SNES) Emulator frontend for libsnes.
 *  Copyright (C) 2010-2011 - Hans-Kristian Arntzen
 *
 *  Some code herein may be based on code found in BSNES.
 * 
 *  SSNES is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  SSNES is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with SSNES.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GFX_COMMON_H
#define __GFX_COMMON_H

#include <stddef.h>
#include <stdbool.h>

bool gfx_window_title(char *buf, size_t size);
void gfx_window_title_reset(void);

#ifdef _WIN32
void gfx_set_dwm(void);
#endif

#if !defined(__APPLE__) && !defined(_WIN32)
void gfx_get_window_size(unsigned *width, unsigned *height);
#endif

#endif
