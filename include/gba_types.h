/*
	"$Id: gba_types.h,v 1.2 2004-08-08 19:28:07 wntrmute Exp $"

	Header file for libgba basic types

	Copyright 2003-2004 by Dave Murphy.

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Library General Public
	License as published by the Free Software Foundation; either
	version 2 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Library General Public License for more details.

	You should have received a copy of the GNU Library General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
	USA.

	Please report all bugs and problems through the bug tracker at
	"http://sourceforge.net/tracker/?group_id=114505&atid=668551".

	"$Header: /lvm/shared/ds/ds/cvs/devkitpro-cvsbackup/libgba/include/gba_types.h,v 1.2 2004-08-08 19:28:07 wntrmute Exp $"

*/

//---------------------------------------------------------------------------------
#ifndef	_gba_types_h_
#define	_gba_types_h_
//---------------------------------------------------------------------------------

//---------------------------------------------------------------------------------
// Data	types
//---------------------------------------------------------------------------------
/** Unsigned 8 bit value

*/
typedef	unsigned char			u8;
/** Unsigned 16 bit value

*/
typedef	unsigned short int		u16;
/** Unsigned 32 bit value

*/
typedef	unsigned int			u32;

/** signed 8 bit value

*/
typedef	signed char				s8;
/** Signed 16 bit value

*/
typedef	signed short int		s16;
/** Signed 32 bit value

*/
typedef	signed int				s32;

/** Unsigned volatile 8 bit value

*/
typedef	volatile u8				vu8;
/** Unsigned volatile 16 bit value

*/
typedef	volatile u16			vu16;
/** Unsigned volatile 32 bit value

*/
typedef	volatile u32			vu32;

/** Unsigned volatile 8 bit value

*/
typedef	volatile s8				vs8;
/** Signed volatile 16 bit value

*/
typedef	volatile s16			vs16;
/** Signed volatile 32 bit value

*/
typedef	volatile s32			vs32;

#ifndef __cplusplus
/** C++ compatible bool for C

*/
typedef enum { false, true } bool;
#endif

//---------------------------------------------------------------------------------
#endif // _gba_types_h_
//---------------------------------------------------------------------------------
