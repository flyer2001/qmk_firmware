/* Copyright 2019 DmNosachev
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

/* readability */
#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
 
/* Keymap with all usable pads
 * K03: pad under the stabilizer insert of 2.25U ANSI left Shift (pad K11) or key between 1.25U ISO left Shift and Z (KC_NUBS).
 * K46: pad under the stabilizer insert of 2U Backspace (pad K16)
 * K6A: pad under the stabilizer insert of ANSI Enter (pad K66). With ISO Enter this pad usually maps to KC_NUHS or KC_BSLS
 * K0B: pad under the stabilizer insert of 2U numpad "0"
 * K1E: pad under the stabilizer insert of 2U numpad Plus
 * K5F: pad under the stabilizer insert of 2U numpad Enter
 * Pad under the stabilizer insert of 2.75U right Shift not shown here
*/

#define LAYOUT_ALL( \
  K02, K23, K24, K14, K04,      K06, K08, K19, K29,      K26, K36, K3B, K3C,      K3F, K4F, K6E, \
  \
  K22, K32, K33, K34, K35, K25, K27, K37, K38, K39, K3A, K2A, K28, K46, K16,      K2C, K2E, K2D,     K6B, K6C, K6D, K7D, \
  K12,      K42, K43, K44, K45, K15, K17, K47, K48, K49, K4A, K1A, K18, K56,      K2B, K3E, K3D,     K4B, K4C, K4D, K4E, \
  K13,      K52, K53, K54, K55, K05, K07, K57, K58, K59, K5A, K0A, K6A, K66,                         K1B, K1C, K1D, K1E, \
  K11, K03, K62, K63, K64, K65, K75, K77, K67, K68, K69, K7A,           K61,           K0E,          K5B, K5C, K5D, K5E, \
  K20,           K0F,                K76,                K7F,           K60,      K7E, K7B, K7C,     K0B, K0C, K0D, K5F  \
) \
{ \
/* 0 */  { XXX, XXX, K02, K03, K04, K05, K06, K07, K08, XXX, K0A, K0B, K0C, K0D, K0E, K0F }, \
/* 1 */  { XXX, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, XXX }, \
/* 2 */  { K20, XXX, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, XXX }, \
/* 3 */  { XXX, XXX, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
/* 4 */  { XXX, XXX, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
/* 5 */  { XXX, XXX, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, XXX }, \
/* 7 */  { XXX, XXX, XXX, XXX, XXX, K75, K76, K77, XXX, XXX, K7A, K7B, K7C, K7D, K7E, K7F }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F     */

#define LAYOUT_ANSI101( \
  K02, K23, K24, K14, K04,      K06, K08, K19, K29,      K26, K36, K3B, K3C,      K3F, K4F, K6E, \
  \
  K22, K32, K33, K34, K35, K25, K27, K37, K38, K39, K3A, K2A, K28,      K16,      K2C, K2E, K2D,     K6B, K6C, K6D, K7D, \
  K12,      K42, K43, K44, K45, K15, K17, K47, K48, K49, K4A, K1A, K18, K56,      K2B, K3E, K3D,     K4B, K4C, K4D, K4E, \
  K13,      K52, K53, K54, K55, K05, K07, K57, K58, K59, K5A, K0A,      K66,                         K1B, K1C, K1D     , \
  K11,      K62, K63, K64, K65, K75, K77, K67, K68, K69, K7A,           K61,           K0E,          K5B, K5C, K5D, K5E, \
  K20,           K0F,                K76,                K7F,           K60,      K7E, K7B, K7C,          K0C, K0D       \
) \
{ \
/* 0 */  { XXX, XXX, K02, XXX, K04, K05, K06, K07, K08, XXX, K0A, XXX, K0C, K0D, K0E, K0F }, \
/* 1 */  { XXX, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, XXX, XXX }, \
/* 2 */  { K20, XXX, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, XXX }, \
/* 3 */  { XXX, XXX, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
/* 4 */  { XXX, XXX, K42, K43, K44, K45, XXX, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
/* 5 */  { XXX, XXX, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, XXX }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, XXX, K6B, K6C, K6D, K6E, XXX }, \
/* 7 */  { XXX, XXX, XXX, XXX, XXX, K75, K76, K77, XXX, XXX, K7A, K7B, K7C, K7D, K7E, K7F }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F     */

#define LAYOUT_ISO102( \
  K02, K23, K24, K14, K04,      K06, K08, K19, K29,      K26, K36, K3B, K3C,      K3F, K4F, K6E, \
  \
  K22, K32, K33, K34, K35, K25, K27, K37, K38, K39, K3A, K2A, K28,      K16,      K2C, K2E, K2D,     K6B, K6C, K6D, K7D, \
  K12,      K42, K43, K44, K45, K15, K17, K47, K48, K49, K4A, K1A, K18,           K2B, K3E, K3D,     K4B, K4C, K4D, K4E, \
  K13,      K52, K53, K54, K55, K05, K07, K57, K58, K59, K5A, K0A, K6A, K66,                         K1B, K1C, K1D,      \
  K11, K03, K62, K63, K64, K65, K75, K77, K67, K68, K69, K7A,           K61,           K0E,          K5B, K5C, K5D, K5E, \
  K20,           K0F,                K76,                K7F,           K60,      K7E, K7B, K7C,          K0C, K0D       \
) \
{ \
/* 0 */  { XXX, XXX, K02, K03, K04, K05, K06, K07, K08, XXX, K0A, XXX, K0C, K0D, K0E, K0F }, \
/* 1 */  { XXX, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, XXX, XXX }, \
/* 2 */  { K20, XXX, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, XXX }, \
/* 3 */  { XXX, XXX, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
/* 4 */  { XXX, XXX, K42, K43, K44, K45, XXX, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
/* 5 */  { XXX, XXX, K52, K53, K54, K55, XXX, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, XXX }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, XXX }, \
/* 7 */  { XXX, XXX, XXX, XXX, XXX, K75, K76, K77, XXX, XXX, K7A, K7B, K7C, K7D, K7E, K7F }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F     */

#define LAYOUT_SSSK( \
  K02, K23, K24, K14, K04,      K06, K08, K19, K29,      K26, K36, K3B, K3C, \
  \
  K22, K32, K33, K34, K35, K25, K27, K37, K38, K39, K3A, K2A, K28,      K16, \
  K12,      K42, K43, K44, K45, K15, K17, K47, K48, K49, K4A, K1A, K18, K56, \
  K13,      K52, K53, K54, K55, K05, K07, K57, K58, K59, K5A, K0A,      K66, \
  K11,      K62, K63, K64, K65, K75, K77, K67, K68, K69, K7A,           K61, \
  K20,           K0F,                K76,                K7F,           K60  \
) \
{ \
/* 0 */  { XXX, XXX, K02, XXX, K04, K05, K06, K07, K08, XXX, K0A, XXX, XXX, XXX, XXX, K0F }, \
/* 1 */  { XXX, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, XXX, XXX, XXX, XXX, XXX }, \
/* 2 */  { K20, XXX, K22, K23, K24, K25, K26, K27, K28, K29, K2A, XXX, XXX, XXX, XXX, XXX }, \
/* 3 */  { XXX, XXX, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, XXX, XXX, XXX }, \
/* 4 */  { XXX, XXX, K42, K43, K44, K45, XXX, K47, K48, K49, K4A, XXX, XXX, XXX, XXX, XXX }, \
/* 5 */  { XXX, XXX, K52, K53, K54, K55, K56, K57, K58, K59, K5A, XXX, XXX, XXX, XXX, XXX }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, XXX, XXX, XXX, XXX, XXX, XXX }, \
/* 7 */  { XXX, XXX, XXX, XXX, XXX, K75, K76, K77, XXX, XXX, K7A, XXX, XXX, XXX, XXX, K7F }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F     */
