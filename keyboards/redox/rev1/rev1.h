#pragma once

#include "../redox.h"

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT( \
  k00, k01, k02, k03, k04, k05,                          k08, k09, k10, k11, k12, k13, \
  k14, k15, k16, k17, k18, k19, k06,                k07, k22, k23, k24, k25, k26, k27, \
  k28, k29, k30, k31, k32, k33, k20,                k21, k36, k37, k38, k39, k40, k41, \
  k42, k43, k44, k45, k46, k47, k34, k48,      k49, k35, k50, k51, k52, k53, k54, k55, \
  k56, k57, k58, k59,    k60,   k61, k62,      k63, k64,   k65,    k66, k67, k68, k69  \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06 }, \
    { k14, k15, k16, k17, k18, k19, k20 }, \
    { k28, k29, k30, k31, k32, k33, k34 }, \
    { k42, k43, k44, k45, k46, k47, k48 }, \
    { k56, k57, k58, k59, k60, k61, k62 }, \
    { k13, k12, k11, k10, k09, k08, k07 }, \
    { k27, k26, k25, k24, k23, k22, k21 }, \
    { k41, k40, k39, k38, k37, k36, k35 }, \
    { k55, k54, k53, k52, k51, k50, k49 }, \
    { k69, k68, k67, k66, k65, k64, k63 }  \
}

#define LAYOUT_kc( \
  k00, k01, k02, k03, k04, k05, k06,                k07, k08, k09, k10, k11, k12, k13, \
  k14, k15, k16, k17, k18, k19,                          k22, k23, k24, k25, k26, k27, \
  k28, k29, k30, k31, k32, k33, k20,                k21, k36, k37, k38, k39, k40, k41, \
  k42, k43, k44, k45, k46, k47, k34, k48,      k49, k35, k50, k51, k52, k53, k54, k55, \
  k56, k57, k58, k59,    k60,   k61, k62,      k63, k64,   k65,    k66, k67, k68, k69  \
) \
{ \
    { KC_##k00, KC_##k01, KC_##k02, KC_##k03, KC_##k04, KC_##k05, KC_##k06 }, \
    { KC_##k14, KC_##k15, KC_##k16, KC_##k17, KC_##k18, KC_##k19, KC_##k20 }, \
    { KC_##k28, KC_##k29, KC_##k30, KC_##k31, KC_##k32, KC_##k33, KC_##k34 }, \
    { KC_##k42, KC_##k43, KC_##k44, KC_##k45, KC_##k46, KC_##k47, KC_##k48 }, \
    { KC_##k56, KC_##k57, KC_##k58, KC_##k59, KC_##k60, KC_##k61, KC_##k62 }, \
    { KC_##k13, KC_##k12, KC_##k11, KC_##k10, KC_##k09, KC_##k08, KC_##k07 }, \
    { KC_##k27, KC_##k26, KC_##k25, KC_##k24, KC_##k23, KC_##k22, KC_##k21 }, \
    { KC_##k41, KC_##k40, KC_##k39, KC_##k38, KC_##k37, KC_##k36, KC_##k35 }, \
    { KC_##k55, KC_##k54, KC_##k53, KC_##k52, KC_##k51, KC_##k50, KC_##k49 }, \
    { KC_##k69, KC_##k68, KC_##k67, KC_##k66, KC_##k65, KC_##k64, KC_##k63 }  \
}
