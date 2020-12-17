/* Copyright 2020 DmNosachev
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
/*
,-------------------------------------------------------------------------------------------------------------------------------------,
|Reset|Break| |  F1  |  F2  |  F3  |  F4  | Menu| | User|   F5  |  F6  |  F7  |  F8  |   |CLine|CDisp|  | File| Ntpd|Calen| Calc|  ?  |
|----------------------------------------------------------------------------------------------------|  |-----------------------------|
| ~`  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -_ |  += | BackSpace| InsL| DelL|  |  *  |  /  |  +  |  -  |  %  |
|--------------------------------------------------------------------------------------------------- |  |-----------------------------|
|   Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  {[ |  }] | BackSl| InsC| DelC|  |  7  |  8  |  9  |Enter|Trfer|
|----------------------------------------------------------------------------------------------------|  |-----------------------------|
| Caps | Ctrl|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  :; |  "'  | Return |  UL | Prev|  |  4  |  5  |  6  |  ,  |  =  |
|----------------------------------------------------------------------------------------------------|  |-----------------------|     |
| Del | Shift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  ?/ | Shift |Selct|  Up | Next|  |  1  |  2  |  3  | Tab |     |
|----------------------------------------------------------------------------------------------------|  |-----------|-----|     |     |
|Print|    |Extend1 |               Space                                | Entend2 | Left| Down|Right|  |    0      |  .  |     |     |
`-------------------------------------------------------------------------------------------------------------------------------------'
*/

<<<<<<< HEAD
/*
LAYOUT_stock: original 17x9 matrix. It will not compile as it has two pairs of keys which
connected in parallel (K8F and K8G). Need to separate them.
Col0 has only 1 key (K80). It can be moved to another location.

LAYOUT: modified matrix.
remaps:
,---------------------------,
|legend         | old | new |
|---------------------------|
|Ctrl	          | K80 | K53 |
|Left Shift	    | K8F | K51 | 
|Left Ext Char 	| K8G | K61 | 
|Right Shift	  | K8F	| K5A |
|Right Ext Char |	K8G	| K5B |
'---------------------------'
*/

/*
#define LAYOUT_stock( \
    K02, K01, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K75, K76, K77, K78, K79, \
    K12, K11, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K55, K56, K65, K66, K67, K68, K69, \
    K22, K21, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K59, K58, K7E, K7D, K7C, K7A, K7B, \
    K32, K80, K31, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K57, K6E, K6D, K6C, K6A, K6B, \
    K42, K8F, K41, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K8F, K4C, K4D, K4E, K62, K64, K63, K73, \
    K52, K8G, K54, K8G, K5C, K5D, K5E, K72, K74 \
) { \
    { XXX, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, XXX, XXX }, \
    { XXX, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, XXX, XXX }, \
    { XXX, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, XXX, XXX }, \
    { XXX, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, XXX, XXX }, \
    { XXX, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, XXX, XXX }, \
    { XXX, XXX, K52, XXX, K54, K55, K56, K57, K58, K59, XXX, XXX, K5C, K5D, K5E, XXX, XXX }, \
    { XXX, XXX, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, XXX, XXX }, \
    { XXX, XXX, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, XXX, XXX }, \
    { K80, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, K8F, K8G } \
}

#define LAYOUT_stock_debug( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K4G, \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K5G, \
    K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, K6G, \
    K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F, K7G, \
    K80, K81, K82, K83, K84, K85, K86, K87, K88, K89, K8A, K8B, K8C, K8D, K8E, K8F, K8G \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K4G }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K5G }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, K6G }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F, K7G }, \
    { K80, K81, K82, K83, K84, K85, K86, K87, K88, K89, K8A, K8B, K8C, K8D, K8E, K8F, K8G } \
}
*/
#define LAYOUT( \
    K02, K01, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K75, K76, K77, K78, K79, \
    K12, K11, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K55, K56, K65, K66, K67, K68, K69, \
    K22, K21, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K59, K58, K7E, K7D, K7C, K7A, K7B, \
    K32, K53, K31, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K57, K6E, K6D, K6C, K6A, K6B, \
    K42, K51, K41, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K5A, K4C, K4D, K4E, K62, K64, K63, K73, \
    K52, K61, K54, K5B, K5C, K5D, K5E, K72, K74 \
) { \
    { K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
    { K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E }, \
    { K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
    { K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E }, \
    { K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E }, \
    { K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E }, \
    { XXX, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E } \
}

#define LAYOUT_debug( \
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
    K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
    K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, \
    K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
    K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, \
    K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, \
    K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, \
    K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E \
) { \
    { K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
    { K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E }, \
    { K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
    { K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E }, \
    { K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E }, \
    { K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E }, \
    { K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E } \
=======
#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K59, K5A, K5B, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K5C, K5D, K5E, K5F, K60, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K61, K62, K63, K64, K65, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K66, K67, K68, K69, K6A, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K6B, K6C, K6D, K6E, \
    K50, K51, K52, K53, K54, K55, K56, K57, K58 \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, XXX }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX, XXX } \
}

#define LAYOUT_debug( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, \
    K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, \
    K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F } \
>>>>>>> 07856c27d93b5aaf77951b07738797362df1cddc
}
