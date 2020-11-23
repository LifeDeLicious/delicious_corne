/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
*/


// #define MATRIX_ROWS 8
// #define MATRIX_COLS 12
// #define MATRIX_ROW_PINS { D4, C6, D7, B5 }
// #define MATRIX_COL_PINS { B3, B1, B2, B6, B4, E6}

// #define DIODE_DIRECTION COL2ROW

#define SPLIT_USB_DETECT //added, maybe wil help with slave not working, *I BELIEVE THIS WAS THE COMMAND THAT MADE BOTH SIDES COMMUNICATE AND FULLY FUCTION*


#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#define USB_MAX_POWER_CONSUMPTION 200 // this is used so the firmware can tell the device how much power it needs, used to make the keyboard work with phones and other mobile devices over an otg usb cable, 200 works great!

#include "../../config.h"

// #define TAPPING_TOGGLE 1
#define TAPPING_TERM 200 // edited down from 300
// #define ONESHOT_TAP_TOGGLE 2
// #define ONESHOT_LAYER_TOGGLE 2
// #define ONESHOT_TIMEOUT 800

#define USE_I2C
#define USE_MATRIX_I2C

// #define MATRIX_ROW_PINS {D4, C6, D7, B5} // left side rows
// #define MATRIX_COL_PINS {B3, B1, B2, B6, B4, E6} // left side columns
#define MATRIX_ROW_PINS {B6, B2, E6, B5} // right side rows
// #define MATRIX_COL_PINS  {B4, D7, D4, C6, B3, B1} // right side columns
#define MATRIX_COL_PINS  {B1, B3, C6, D4, D7, B4} // MIRRORED right side columns
// #define UNUSED_PINS // pins unused by the keyboard for reference

#define DIODE_DIRECTION COL2ROW

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// #define MOUSEKEY_INTERVAL 50
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_TIME_TO_MAX 60
// #define MOUSEKEY_MAX_SPEED 7

#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_MAX_SPEED   8
#define MOUSEKEY_WHEEL_TIME_TO_MAX 40

// #define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS


#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD

#endif
