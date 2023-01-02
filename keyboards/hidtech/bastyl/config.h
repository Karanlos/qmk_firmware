/*
 * Copyright 2020 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2020 Anthony MARIN <anthony@hidtech.ca>
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

#define MATRIX_ROWS 10
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW
//#define DIODE_DIRECTION ROW2COL
#define matrix_row_pins { d7, b5, f7, f6, b6 }
#define matrix_col_pins { b4, e6, c6, b1, b3, b2 }
#define RGB_DI_PIN D2
#define RGBLED_NUM 38
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_SPLIT
#define RGBLIGHT_DEFAULT_VAL 16
#define RGBLIGHT_DEFAULT_HUE 64
#define RGBLIGHT_ANIMATIONS
#define DEBOUNCE 5
#define SOFT_SERIAL_PIN D0
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define RGBLIGHT_HUE_STEP 6
#define MASTER_LEFT
