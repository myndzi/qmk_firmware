/*
Copyright 2021 MajorKoos <github.com/majorkoos>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base          ,-----------------------------------------.     ,-----------------------------------------------------.
  *                | ESC | F1  | F2  | F3  | F4  | F5  | F6  |     | F7  | F8  | F9  | F10 | F11 | F12 |Print| Ins | Del |
  * ,-----------.  |-----+-----+-----+-----+-----+-----+-----|     |-----+-----+-----+-----+-----+-----+-----------+-----|
  * |  8  |  9  |  |  ~  |  1  |  2  |  3  |  4  |  5  |  6  |     |  7  |  8  |  9  |  0  |  -  |  =  | Backspace | Home|
  * |-----+-----|  |-----------------------------------------'  ,--------------------------------------------------+-----|
  * |  6  |  7  |  | Tab   |  Q  |  W  |  E  |  R  |  T  |     |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \    | PgUp|
  * |-----+-----|  |---------------------------------------.    `--------------------------------------------------+-----|
  * |  4  |  5  |  | Caps    |  A  |  S  |  D  |  F  |  G  |     |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    | PgDn|
  * |-----+-----|  |-----------------------------------------.   `-------------------------------------------------+-----|
  * |  2  |  3  |  | Shift     |  Z  |  X  |  C  |  V  |  B  |     |  N  |  M  |  ,  |  .  |   /   |  Shift  | Up  | End |
  * |-----+-----|  |-----------------------------------------'   ,-------------------------------------------+-----+-----|
  * |  0  |  1  |  | Ctrl  |  GUI |  Alt |   Space   | Fn  |     | Space         |  Alt  |     | Ctrl  | Left| Down|Right|
  * `-----------'  `---------------------------------------'     `-------------------------------------------------------'
  *                                        ^-- swapped --^
  */
[0] = LAYOUT(
    //--------------------------------Left Hand-----------------------------------------|       |--------------------------------Right Hand------------------------------------------------
                  KC_ESC,   KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,                   KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,   KC_PSCR,  KC_INS,  KC_DEL,
    KC_8, KC_9,   KC_GRAVE, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,   KC_6,                    KC_7,   KC_8,   KC_9,    KC_0,    KC_MINUS, KC_EQUAL, KC_BSPC,           KC_HOME,
    KC_6, KC_7,   KC_TAB,   KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,   KC_Y,                    KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSLS,           KC_END,
    KC_4, KC_5,   KC_CAPS,  KC_A,    KC_S,    KC_D,   KC_F,   KC_G,                            KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  KC_ENTER,          KC_PGUP,
    KC_2, KC_3,   KC_LSFT,  KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,                            KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT,  KC_UP,   KC_PGDN,
    KC_0, KC_1,   KC_LCTL,  KC_LGUI, KC_LALT, MO(1), KC_SPC,                                   KC_SPC,         KC_RALT, KC_RGUI, KC_RCTL,            KC_LEFT,  KC_DOWN, KC_RIGHT
  ),

[1] = LAYOUT(
    //--------------------------------Left Hand-----------------------------------------|       |--------------------------------Right Hand------------------------------------------------
                          KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS,    RGB_TOG,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_RMOD, RGB_MOD, KC_TRNS,           KC_TRNS,
    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,           KC_TRNS,
    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS, KC_TRNS
  )

};


#define IDLE_TIMEOUT_MS 5000  // Idle timeout in milliseconds.

#define ACTIVE_EFFECT RGBLIGHT_MODE_STATIC_LIGHT
#define IDLE_EFFECT RGBLIGHT_MODE_RAINBOW_SWIRL+3

static uint8_t backlight_mode = IDLE_EFFECT;


bool is_idle(void) {
    return backlight_mode == IDLE_EFFECT;
}

void set_active(void) {
    rgblight_mode_noeeprom(ACTIVE_EFFECT);
    rgblight_setrgb(255, 255, 255);
    backlight_mode = ACTIVE_EFFECT;
}

void set_idle(void) {
    rgblight_mode_noeeprom(IDLE_EFFECT);
    backlight_mode = IDLE_EFFECT;
}

void keyboard_post_init_user(void) {
    rgblight_set_speed_noeeprom(254);
    set_idle();
}

uint32_t idle_callback(uint32_t trigger_time, void *cb_arg) {
    set_idle();
    return 0;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (is_idle()) {
        set_active();
    }

    // On every key event, start or extend the deferred execution to call
    // `idle_callback()` after IDLE_TIMEOUT_MS.
    static deferred_token idle_token = INVALID_DEFERRED_TOKEN;
    if (!extend_deferred_exec(idle_token, IDLE_TIMEOUT_MS)) {
        idle_token = defer_exec(IDLE_TIMEOUT_MS, idle_callback, NULL);
    }

    return true;
}
