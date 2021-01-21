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
#define LAYOUT( \
  K02, K23, K24, K14, K04,      K06, K08, K19, K29,      K26, K36, K3B, K3C,      K3F, K4F, K6E, \
  \
  K22, K32, K33, K34, K35, K25, K27, K37, K38, K39, K3A, K2A, K28,      K16,      K2C, K2E, K2D,     K6B, K6C, K6D, K7D, \
  K12,      K42, K43, K44, K45, K15, K17, K47, K48, K49, K4A, K1A, K18, K56,      K2B, K3E, K3D,     K4B, K4C, K4D, K4E, \
  K13,      K52, K53, K54, K55, K05, K07, K57, K58, K59, K5A, K0A,      K66,                         K1B, K1C, K1D     , \
  K11,      K62, K63, K64, K65, K75, K77, K67, K68, K69, K7A,           K61,           K0E,          K5B, K5C, K5D, K5E, \
  K20,           K0F,                K76,                K7F,           K60,      K7E, K7B, K7C,          K0C, K0D       \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H }, \
{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H }, \
{ K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H }, \
{ K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H }, \
{ K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, K6G, K6H }, \
{ K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F, K7G, K7H }, \
{ K80, K81, K82, K83, K84, K85, K86, K87, K88, K89, K8A, K8B, K8C, K8D, K8E, K8F, K8G, K8H }, \
{ K90, K91, K92, K93, K94, K95, K96, K97, K98, K99, K9A, K9B, K9C, K9D, K9E, K9F, K9G, K9H }  \
}
*/

#define LAYOUT_debug( \
          K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, \
          K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, \
          K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, \
          K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H, \
          K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H, \
          K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H, \
          K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, K6G, K6H, \
          K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F, K7G, K7H, \
          K80, K81, K82, K83, K84, K85, K86, K87, K88, K89, K8A, K8B, K8C, K8D, K8E, K8F, K8G, K8H, \
          K90, K91, K92, K93, K94, K95, K96, K97, K98, K99, K9A, K9B, K9C, K9D, K9E, K9F, K9G, K9H  \
) { \
/* 0 */  { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H }, \
/* 1 */  { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H }, \
/* 2 */  { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H }, \
/* 3 */  { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K3G, K3H }, \
/* 4 */  { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, K4G, K4H }, \
/* 5 */  { K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B, K5C, K5D, K5E, K5F, K5G, K5H }, \
/* 6 */  { K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E, K6F, K6G, K6H }, \
/* 7 */  { K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F, K7G, K7H }, \
/* 8 */  { K80, K81, K82, K83, K84, K85, K86, K87, K88, K89, K8A, K8B, K8C, K8D, K8E, K8F, K8G, K8H }, \
/* 9 */  { K90, K91, K92, K93, K94, K95, K96, K97, K98, K99, K9A, K9B, K9C, K9D, K9E, K9F, K9G, K9H }  \
}
/*         0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F    G    H    */