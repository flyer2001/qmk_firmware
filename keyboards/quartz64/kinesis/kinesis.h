#pragma once

#include "quantum.h"

#define ___ KC_NO

#define LAYOUT(                                                               \
    k00, k01, k02, k03, k04, k05,               k06, k07, k08, k09, k0A, k0B, \
    k10, k11, k12, k13, k14, k15,               k16, k17, k18, k19, k1A, k1B, \
    k20, k21, k22, k23, k24, k25,               k26, k27, k28, k29, k2A, k2B, \
    k30, k31, k32, k33, k34, k35,               k36, k37, k38, k39, k3A, k3B, \
    k40, k41, k42, k43, k44, k45,               k46, k47, k48, k49, k4A, k4B, \
         k51, k52, k53, k54,                         k57, k58, k59, k5A,      \
                             k62, k63,     k68, k69,                          \
                                  k64,     k67,                               \
                        k60, k61, k65,     k66, k6A, k6B                      \
) {                                                                 \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B }, \
    { ___, k51, k52, k53, k54, ___, ___, k57, k58, k59, k5A, ___ }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, k6A, k6B }  \
}

