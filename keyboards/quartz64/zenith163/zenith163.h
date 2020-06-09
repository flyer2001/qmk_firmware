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


#define LAYOUT( \
  K50, K02, K03, K32, K52,      K58, K55, K36, K08,      K0B, K56, K1C, K1A,      K5C, K5D, K7B, \
  \
  K00, K11, K12, K14, K15, K16, K17, K05, K06, K18, K19, K0A, K07, K70,           K0C, K7C, K3C,     K6C, K6B, K6D, K79, \
  K30, K20, K21, K23, K24, K33, K34, K25, K26, K27, K28, K37, K35,                K0D, K1D, K4D,     K2A, K29, K2B, K2D, \
  K31, K40, K42, K41, K43, K53, K54, K44, K45, K46, K47, K3D, K6A,                                   K39, K38, K3B,      \
  K60, K62, K61, K64, K65, K71, K72, K67, K68, K69, K73, K75, K76,                     K5B,          K4A, K49, K4B, K4C, \
  K51,           K63,                K74,                K66,           K7D,      K7A, K78, K77,     K59,      K5A       \
) \
{ \
/* 0 */  { K00, XXX, K02, K03, XXX, K05, K06, K07, K08, XXX, K0A, K0B, K0C, K0D }, \
/* 1 */  { XXX, K11, K12, XXX, K14, K15, K16, K17, K18, K19, K1A, XXX, K1C, K1D }, \
/* 2 */  { K20, K21, XXX, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, XXX, K2D }, \
/* 3 */  { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, XXX, K3B, K3C, K3D }, \
/* 4 */  { K40, K41, K42, K43, K44, K45, K46, K47, XXX, K49, K4A, K4B, K4C, K4D }, \
/* 5 */  { K50, K51, K52, K53, K54, K55, K56, XXX, K58, K59, K5A, K5B, K5C, K5D }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D }, \
/* 7 */  { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D     */

