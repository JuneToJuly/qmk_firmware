// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "blaster_v1.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_left(
   S(KC_1),   S(KC_9),   S(KC_0),                        // row 0
    KC_TAB, KC_Z, KC_Q,  KC_W, KC_E, KC_R, KC_T, // row 1
    KC_CAPS_LOCK, KC_X,  KC_A, KC_S, KC_D, KC_F, KC_G,   // row 2
    KC_C,   KC_U,                                    // row 3
    KC_LBRC, KC_Z,                               // row 4
    KC_LEFT_SHIFT, KC_LEFT_ALT, KC_SPC// row 5
  )
};
