
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
#include <keymap_danish.h>
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_4x6_5(
    KC_ESC,  DK_1, DK_2, DK_3, DK_4, DK_5,			            DK_6, DK_7, DK_8,    DK_9,   DK_0,     DK_MINS,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_TAB,  DK_Q, DK_W, DK_E, DK_R, DK_T,			            DK_Y, DK_U, DK_I,    DK_O,   DK_P,     DK_ARNG,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LSFT, DK_A, DK_S, DK_D, DK_F, DK_G,	                DK_H, DK_J, DK_K,    DK_L,   DK_AE,    DK_OSTR,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LCTL, DK_Z, DK_X, DK_C, DK_V, DK_B,                  DK_N, DK_M, DK_COMM, DK_DOT, DK_MINS,  DK_LABK,
//-------------------------------------------------//-----------------------------------------------------------//
                        KC_LCTL, KC_SPC, MO(1),		     MO(2),  KC_ENT, KC_RGUI,
                                 KC_LSFT,  KC_BSPC,      KC_DEL, KC_RALT
  ),

  [1] = LAYOUT_split_4x6_5(
    DK_SECT, DK_EXLM, DK_DQUO, DK_HASH, DK_CURR, DK_PERC,           DK_AMPR, DK_SLSH, DK_LPRN, DK_RPRN, DK_EQL,   DK_DIAE,
//------------------------------------------------------------//-----------------------------------------------------------//
    QK_BOOT,   KC_GRV, RALT(DK_4), DK_QUOT, DK_DQUO, DK_LBRC,           DK_RBRC, KC_P7,   KC_P8,   KC_P9,   DK_ACUT,  DK_GRV,
//------------------------------------------------------------//-----------------------------------------------------------//
    KC_LSFT, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  DK_LPRN,           DK_RPRN, KC_P4,   KC_P5,   KC_P6,   DK_PLUS,  DK_ASTR,
//------------------------------------------------------------//-----------------------------------------------------------//
    TO(3), TO(6), LGUI(KC_LEFT), LGUI(KC_DOWN), LGUI(KC_RIGHT), DK_LCBR,           DK_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_P0,    DK_LABK,
//------------------------------------------------------------//-----------------------------------------------------------//
                               KC_LCTL, KC_HOME, KC_TRNS,		        KC_TRNS, KC_RALT, KC_RGUI,
                                        KC_SPC,  KC_BSPC,           LALT(KC_ENT), KC_ENT
  ),

  [2] = LAYOUT_split_4x6_5(
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,			      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, _______, RGB_RMOD, RGB_TOG, RGB_MOD, XXXXXXX,			  XXXXXXX, _______, KC_NUM, KC_INS,  KC_SCRL,  KC_MUTE,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, KC_LEFT, KC_UP,    KC_DOWN, KC_RGHT, KC_LPRN,	      KC_RPRN, KC_MPRV, KC_MPLY, KC_MNXT, _______,  KC_VOLU,
//---------------------------------------------------------//--------------------------------------------------------------//
    NK_TOGG, _______, _______,  RGB_SAD, RGB_VAD, RGB_HUD,        RGB_HUI, RGB_VAI, RGB_SAI, _______, _______,  KC_VOLD,
//---------------------------------------------------------//--------------------------------------------------------------//
                               KC_LCTL, KC_HOME, KC_TRNS,		    KC_TRNS, KC_RALT, QK_BOOT,
                                        KC_SPC,  KC_BSPC,       LALT(KC_ENT), KC_ENT
  ),

  [3] = LAYOUT_split_4x6_5(
    KC_ESC,  DK_1, DK_2, DK_3, DK_4, DK_5,			            DK_6, DK_7, DK_8,    DK_9,   DK_0,     DK_MINS,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_TAB,  DK_Q, DK_W, DK_E, DK_R, DK_T,			            DK_Y, DK_U, DK_I,    DK_O,   DK_P,     DK_ARNG,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LSFT, DK_A, DK_S, DK_D, DK_F, DK_G,	                DK_H, DK_J, DK_K,    DK_L,   DK_AE,    DK_OSTR,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LCTL, DK_Z, DK_X, DK_C, DK_V, DK_B,                  DK_N, DK_M, DK_COMM, DK_DOT, DK_MINS,  DK_LABK,
//-------------------------------------------------//-----------------------------------------------------------//
                        KC_LCTL, KC_SPC, MO(4),		     MO(5),  KC_ENT, KC_RGUI,
                                 KC_LSFT,  KC_BSPC,      KC_DEL, KC_RALT
  ),

  [4] = LAYOUT_split_4x6_5(
    DK_SECT, DK_EXLM, DK_DQUO, DK_HASH, DK_CURR, DK_PERC,           DK_AMPR, DK_SLSH, DK_LPRN, DK_RPRN, DK_EQL,   DK_DIAE,
//------------------------------------------------------------//-----------------------------------------------------------//
    QK_BOOT,   _______, RSA(DK_3), DK_QUOT, DK_DQUO, DK_LBRC,           DK_RBRC, KC_P7,   KC_P8,   KC_P9,   DK_ACUT,  DK_GRV,
//------------------------------------------------------------//-----------------------------------------------------------//
    _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  DK_LPRN,           DK_RPRN, KC_P4,   KC_P5,   KC_P6,   DK_PLUS,  DK_ASTR,
//------------------------------------------------------------//-----------------------------------------------------------//
    TO(0), TO(6), LCA(KC_LEFT), LCA(KC_UP), LCA(KC_RIGHT), RSA(DK_8),           RSA(DK_9), KC_P1,   KC_P2,   KC_P3,   KC_P0,    DK_LABK,
//------------------------------------------------------------//-----------------------------------------------------------//
                               KC_LCTL, KC_HOME, KC_TRNS,		        KC_TRNS, KC_RALT, KC_RGUI,
                                        KC_SPC,  KC_BSPC,           KC_RCTL, KC_ENT
  ),

  [5] = LAYOUT_split_4x6_5(
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,			      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, _______, RGB_RMOD, RGB_TOG, RGB_MOD, XXXXXXX,			  XXXXXXX, _______, KC_NUM, KC_INS,  KC_SCRL,  KC_MUTE,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, KC_LEFT, KC_UP,    KC_DOWN, KC_RGHT, KC_LPRN,	      KC_RPRN, KC_MPRV, KC_MPLY, KC_MNXT, _______,  KC_VOLU,
//---------------------------------------------------------//--------------------------------------------------------------//
    NK_TOGG, _______, _______,  RGB_SAD, RGB_VAD, RGB_HUD,        RGB_HUI, RGB_VAI, RGB_SAI, _______, _______,  KC_VOLD,
//---------------------------------------------------------//--------------------------------------------------------------//
                               KC_LCTL, KC_HOME, KC_TRNS,		    KC_TRNS, KC_RALT, QK_BOOT,
                                        KC_SPC,  KC_BSPC,       KC_RCTL, KC_ENT
  ),

  [6] = LAYOUT_split_4x6_5(
    KC_ESC,  DK_1, DK_2, DK_3, DK_4, DK_5,		            TO(7), DK_7, DK_8,    DK_9,   DK_0,     DK_MINS,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_TAB,  DK_Q, KC_P1, DK_E, DK_R, DK_T,		            DK_Y, DK_U, DK_I,    DK_O,   DK_P,     TO(0),
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LALT, DK_AE, DK_OSTR, DK_ARNG, DK_F, DK_G,           DK_H, DK_J, DK_K,    DK_L,   DK_AE,    DK_OSTR,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LCTL, DK_Z, DK_X, KC_C, DK_V, DK_B,                  DK_N, DK_M, DK_COMM, DK_DOT, DK_MINS,  DK_LABK,
//-------------------------------------------------//-----------------------------------------------------------//
                        KC_LEFT, KC_SPC, KC_RIGHT,        MO(2),  KC_ENT, KC_RGUI,
                                 KC_UP,  KC_LSFT,      KC_DEL, KC_RALT
  ),

  [7] = LAYOUT_split_4x6_5(
    KC_ESC,  DK_1, DK_2, DK_3, DK_4, DK_5,			            DK_6, DK_7, DK_8,    DK_9,   DK_0,     DK_MINS,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_TAB,  DK_T, DK_Q, DK_W, DK_E, DK_R,			            DK_Y, DK_U, DK_I,    DK_O,   DK_P,     TO(0),
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LSFT, DK_G, DK_A, DK_S, DK_D, DK_F,	                DK_H, DK_J, DK_K,    DK_L,   DK_AE,    DK_OSTR,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LCTL, DK_B, DK_Z, DK_X, DK_C, DK_V,                  DK_N, DK_M, DK_COMM, DK_DOT, DK_MINS,  DK_LABK,
//-------------------------------------------------//-----------------------------------------------------------//
                        KC_LCTL, KC_SPC, MO(1),		     MO(2),  KC_ENT, KC_RGUI,
                                 KC_LALT,  KC_BSPC,      KC_DEL, KC_RALT
  )
};

/*
void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers;
    rgblight_set_layer_state(1, true);
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  // TO([NUM]) sets the [NUM] bit to be enabled all the time
  // even though MO([NUM]) is held.
  // Unset the TO layers.
  if (state & ~(1 | 8)) {
    state = state & ~(1 | 8);
  }
  rgblight_set_layer_state(1, layer_state_cmp(state, 0));
  rgblight_set_layer_state(2, layer_state_cmp(state, 1));
  rgblight_set_layer_state(3, layer_state_cmp(state, 2));
  rgblight_set_layer_state(4, layer_state_cmp(state, 3));
  rgblight_set_layer_state(5, layer_state_cmp(state, 4));
  rgblight_set_layer_state(6, layer_state_cmp(state, 5));
  return state;
}
*/

