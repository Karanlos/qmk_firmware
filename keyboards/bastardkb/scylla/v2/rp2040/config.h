/*
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

#pragma once

/* Key matrix configuration */

#define MATRIX_ROW_PINS \
   { GP11, GP12, GP13, GP14, GP15 }
#define MATRIX_COL_PINS \
   { GP16, GP17, GP18, GP19, GP20, GP21 }

#define MASTER_LEFT

#define SOFT_SERIAL_PIN GP6

#define RGB_DI_PIN GP0

#define DIODE_DIRECTION COL2ROW

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
