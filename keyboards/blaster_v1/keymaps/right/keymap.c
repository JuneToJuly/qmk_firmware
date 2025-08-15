// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "blaster_v1.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_right(
    KC_I,   KC_B,   KC_O,                        // row 0
    KC_Y,   KC_U,   KC_K,   KC_L, KC_P, KC_EQL, KC_BSPC, // row 1
    KC_H,   KC_J,   KC_COMM, KC_DOT, KC_SCLN, KC_QUOT, KC_ENT,   // row 2
    KC_N,   KC_M,                                    // row 3
    KC_LBRC, KC_RBRC,                               // row 4
    KC_RSFT, KC_SPC, KC_RCTL                        // row 5
  )
};
