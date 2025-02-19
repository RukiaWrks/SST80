/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x1D, 0x32, 0xD0, 0xDC, 0x30, 0x1C, 0x7F, 0x1B}

/* CONSIDER ADDING AN UNLOCK COMBO. SEE DOCUMENTATION. */
#define VIAL_INSECURE

/* Enable RGB Matrix */
#define RGB_MATRIX_ENABLE
#define RGBLIGHT_ANIMATIONS
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

/* Enable Backlight */
#define BACKLIGHT_ENABLE
#define BACKLIGHT_BREATHING

/* LED Indicator Pins */
#define LED_CAPS_LOCK_PIN B0  // Change B0 to your actual pin
#define LED_SCROLL_LOCK_PIN B1  // Change B1 to your actual pin
