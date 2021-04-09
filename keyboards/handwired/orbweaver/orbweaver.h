/* Copyright 2021 DmNosachev
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

#define LAYOUT( \
<<<<<<< HEAD
        K60, K61, K63, K62,            \
  K53,  K43, K33, K23, K13, K03,       \
  K52,  K42, K32, K22, K13, K03,  K70, \
  K51,  K41, K31, K21, K11, K01,       \
  K50,  K40, K30, K20, K10, K00,  K71  \
=======
  K71,  K00, K10, K20, K30, K40,  K50, \
  K70,  K01, K11, K21, K31, K41,  K51, \
        K02, K12, K22, K32, K42,  K52, \
        K03, K13, K23, K33, K43,  K53, \
        K62, K63, K61, K60 \
>>>>>>> 0b142f87a9662b2c611f7c78c98c8d3c59166808
) \
{ \
/* 0 */  { K00, K01, K02, K03 }, \
/* 1 */  { K10, K11, K12, K13 }, \
/* 2 */  { K20, K21, K22, K23 }, \
/* 3 */  { K30, K31, K32, K33 }, \
/* 4 */  { K40, K41, K42, K43 }, \
/* 5 */  { K50, K51, K52, K53 }, \
/* 6 */  { K60, K61, K62, K63 }, \
/* 7 */  { K70, K71, XXX, XXX }  \
}
/*          0    1    2    3    */

#define LAYOUT_debug( \
  K00, K01, K02, K03, \
  K10, K11, K12, K13, \
  K20, K21, K22, K23, \
  K30, K31, K32, K33, \
  K40, K41, K42, K43, \
  K50, K51, K52, K53, \
  K60, K61, K62, K63, \
  K70, K71, K72, K73 \
) \
{ \
/* 0 */  { K00, K01, K02, K03 }, \
/* 1 */  { K10, K11, K12, K13 }, \
/* 2 */  { K20, K21, K22, K23 }, \
/* 3 */  { K30, K31, K32, K33 }, \
/* 4 */  { K40, K41, K42, K43 }, \
/* 5 */  { K50, K51, K52, K53 }, \
/* 6 */  { K60, K61, K62, K63 }, \
/* 7 */  { K70, K71, K72, K73 }  \
}
/*          0    1    2    3    */
