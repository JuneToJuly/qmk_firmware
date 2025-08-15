#pragma once

// #include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER "worg0le"
#define PRODUCT      "blasterv1"
#define DESCRIPTION  Custom Split Keyboard (Left Half)

/* Key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

/* Pin definitions */
#define MATRIX_ROW_PINS { GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_COL_PINS { GP3, GP2, GP10, GP19, GP20, GP18, GP26 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce time in ms */
#define DEBOUNCE 5

/* Mechanical locking support */
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE

/* Disable deprecated features */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
