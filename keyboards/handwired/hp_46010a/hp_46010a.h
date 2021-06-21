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
,-------------------------------------------------------------------------------------------------------------------------------,
|Reset| Stop|   |  F1  |  F2  |  F3  |  F4  | Menu| User|   F5  |  F6  |  F7  |  F8  |   |CLine|CDisp|  |     |     |     |     |
|-------------------------------------------------------------------------------------------------------------------------------|
| ~`  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -_ |  += | BackSpace| InsL| DelL|  |  *  |  /  |  +  |  -  |
|--------------------------------------------------------------------------------------------------- |  |-----------------------|
|   Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  {[ |  }] | BackSl| InsC| DelC|  |  7  |  8  |  9  |Enter|
|----------------------------------------------------------------------------------------------------|  |-----------------------|
| Caps | Ctrl|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  :; |  "'  | Return |  UL | Prev|  |  4  |  5  |  6  |  ,  |
|----------------------------------------------------------------------------------------------------|  |-----------------------|
| Del | Shift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  ?/ | Shift |Selct|  Up | Next|  |  1  |  2  |  3  | Tab |
|----------------------------------------------------------------------------------------------------|  |-----------|-----|     |
|Print|    |Extend1 |               Space                                | Entend2 | Left| Down|Right|  |    0      |  .  |     |
`-------------------------------------------------------------------------------------------------------------------------------'
*/

#define LAYOUT( \
    K28, K52,    K32,  K02,  K22,  K62,  K66,  K26,  K06,  K36,  K16,  K46,     K56, K76,   K2A, K3A, K4A, K7A, \
    K12, K13, K78, K19, K39, K09, K29, K69, K61, K21, K01, K31, K11,   K41,     K51, K71,   K27, K37, K47, K77, \
    K7D,   K5D, K4D, K1D, K3D, K0D, K2D, K6D, K65, K25, K05, K35, K15, K45,     K55, K75,   K2C, K3C, K4C, K7C, \
    K49, K42, K48, K18, K38, K08, K72, K68, K60, K20, K00, K30, K10,   K40,     K50, K70,   K0C, K1C, K5C, K6C, \
    K7B, K79, K4B, K1B, K3B, K0B, K2B, K6B, K63, K23, K03, K33,  K59,    K43,   K53, K73,   K07, K17, K57, K67, \
    K5B,      K04,                  K24,                K34,             K44,   K54, K74,   K0A, K5A \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, XXX, K15, K16, K17, K18, K19, XXX, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D }, \
    { K30, XXX, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, XXX, K59, K5A, K5B, K5C. K5D }, \
    { K60, K61, K62, K63, XXX, K65, K66, K67, K68, K69, XXX, K6B, K6C, K6D }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D } \
}

#define LAYOUT_debug( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, \
    K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, \
    K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, \
    K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K20, K1B, K1C, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D }, \
    { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D }, \
    { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D }, \
    { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D } \
}
