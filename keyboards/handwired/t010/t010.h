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

/*
,---------------------------------------------------------------------------------------------------------------------.
| F1  |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 |  F10|  F11|  F12|  F13|  F14| ESC  |  |  I  | II  | III | IV  |
|---------------------------------------------------------------------------------------------------------------------|
|  \  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  ~  |backsp|  |  7  |  8  |  9  |  -  |
|---------------------------------------------------------------------------------------------------------------------|
|  tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   del    |  |  4  |  5  |  6  |  ,  |
|---------------------------------------------------------------------------------------------------------------------|
|  caps  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;: |  '" |     return    |  |  1  |  2  |  3  |     |
|---------------------------------------------------------------------------------------------------------------|     |
|   shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /? |    shift   | aux |  |     0     |  .  |enter|
|---------------------------------------------------------------------------------------------------------------------|
|  ctrl |                                space                                     | funct |                          |
`---------------------------------------------------------------------------------------------------------------------'
*/

/* fixme: K00?*/

#define LAYOUT(K07, K17, K27, K37, K47, K57, K67, K77, K78, K68, K58, K48, K38, K28, K18, K70, K50, K30, K10, K06, K16, K26, K36, K46, K56, K66, K76, K7C, K6C, K5C, K4C, K3C, K2C, K1C, K60, K40, K20, K00, K05, K15, K25, K35, K45, K55, K65, K75, K79, K69, K49, K39, K29, K19, K61, K31, K21, K01, K04, K14, K24, K34, K44, K54, K64, K74, K7A, K6A, K4A, K3A, K2A, K51, K41, K11, K32, K03, K13, K23, K33, K43, K53, K63, K73, K7B, K5B, K4B, K3B, K1B, K52, K42, K02, K22, K12)                                                                                                                                            \
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            \
        /* 0 */ {K00, K01, K02, K03, K04, K05, K06, K07, XXX, XXX, XXX, XXX, XXX}, /* 1 */ {K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, XXX, K1B, K1C}, /* 2 */ {K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, XXX, K2C}, /* 3 */ {K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C}, /* 4 */ {K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C}, /* 5 */ {K50, K51, K52, K53, K54, K55, K56, K57, K58, XXX, XXX, K5B, K5C}, /* 6 */ {K60, K61, XXX, K63, K64, K65, K66, K67, K68, K69, K6A, XXX, K6C}, /* 7 */ { K70, XXX, XXX, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C } \
    }
/*          0    1    2    3    4    5    6    7    8    9    A    B    C   */