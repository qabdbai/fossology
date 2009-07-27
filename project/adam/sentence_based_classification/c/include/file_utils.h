/*********************************************************************
Copyright (C) 2009 Hewlett-Packard Development Company, L.P.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <ctype.h>

#ifndef __FILE_UTILS_H__
#define __FILE_UTILS_H__

#if defined(__cplusplus)
extern "C" {
#endif

void openfile(char *filename, char **buffer);
int readline(FILE *pFile, char **line);

#if defined(__cplusplus)
}
#endif

#endif
