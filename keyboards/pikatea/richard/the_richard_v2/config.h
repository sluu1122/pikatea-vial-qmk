/*
Copyright 2020 Jack Kester

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Final working configuration: 1 row (GP26), 8 columns */
#define MATRIX_ROWS 1
#define MATRIX_COLS 8

/* Ordered by physical position: keys 1-6, then encoder presses */
#define MATRIX_COL_PINS {GP11, GP27, GP28, GP10, GP3, GP4, GP9, GP2}
#define MATRIX_ROW_PINS {GP26}

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

/* Encoders - using v4-style pins for prototype hardware */
#define ENCODERS_PAD_A {GP5, GP7}
#define ENCODERS_PAD_B {GP6, GP8}
#define ENCODER_RESOLUTION 4

