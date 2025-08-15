#pragma once

#include "quantum.h"

/* Custom layout macro: 6x7 matrix, arranged as 3 / 7 / 7 / 2 / 2 / 3 */
#define LAYOUT_right( \
K00, K01, K02,                     /* Row 0: 3 keys */ \
K10, K11, K12, K13, K14, K15, K16, /* Row 1: 7 keys */ \
K20, K21, K22, K23, K24, K25, K26, /* Row 2: 7 keys */ \
K30, K31,                          /* Row 3: 2 keys */ \
K40, K41,                          /* Row 4: 2 keys */ \
K50, K51, K52                      /* Row 5: 3 keys */ \
) { \
{ KC_NO, K00, K01, K02, KC_NO, KC_NO, KC_NO }, \
{ K10, K11, K12, K13, K14, K15, K16 }, \
{ K20, K21, K22, K23, K24, K25, K26 }, \
{ K30, K31, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
{ K40, K41, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
{ K50, K51, K52, KC_NO, KC_NO, KC_NO, KC_NO } \
}

/* Custom layout macro: 6x7 matrix, arranged as 3 / 7 / 7 / 2 / 2 / 3 */
#define LAYOUT_left( \
K02, K01, K00,                    /* Row 0: 3 keys */ \
K16, K15, K14, K13, K12, K11, K10, /* Row 1: 7 keys */ \
K26, K25, K24, K23, K22, K21, K20, /* Row 2: 7 keys */ \
K31, K30,                          /* Row 3: 2 keys */ \
K41, K40,                          /* Row 4: 2 keys */ \
K52, K51, K50                      /* Row 5: 3 keys */ \
) { \
{ KC_NO, K00, K01, K02, KC_NO, KC_NO, KC_NO }, \
{ K10, K11, K12, K13, K14, K15, K16 }, \
{ K20, K21, K22, K23, K24, K25, K26 }, \
{ K30, K31, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
{ K40, K41, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
{ K50, K51, K52, KC_NO, KC_NO, KC_NO, KC_NO } \
}
