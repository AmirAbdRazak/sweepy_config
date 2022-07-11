#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC2AB
#define PRODUCT_ID      0x3939
#define DEVICE_VER      0x0001
#define MANUFACTURER    DPB
#define PRODUCT         Sweepy

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS { \
    { F6, D0, F5, D1, F4 }, \
    { D7, B1, C6, F7, D4 }, \
    { E6, B4, B5, B7, D5 }, \
    { B3, B2, B6, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT { \
    { F4, D1, F5, D0, F6 }, \
    { D4, F7, C6, B1, D7}, \
    { D5, B7, B5, B4, E6}, \
    { B6, B2, B3, NO_PIN, NO_PIN } \
}

#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Serial settings */
#define USE_SERIAL
/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

#define EE_HANDS

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
