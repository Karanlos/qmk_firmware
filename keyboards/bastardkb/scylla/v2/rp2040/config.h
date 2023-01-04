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
   { GP16, GP26, GP5, GP4, GP9 }
#define MATRIX_COL_PINS \
   { GP27, GP28, GP21, GP6, GP7, GP8 }

#define MASTER_LEFT

#define SOFT_SERIAL_PIN GP1

#define RGB_DI_PIN GP0

#define DIODE_DIRECTION COL2ROW

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
