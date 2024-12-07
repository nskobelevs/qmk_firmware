/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

enum layers{
  BASE,
  NS_FN,
  NS_FN2,
  LAYER4,
};

enum {
    NS_CAPS_MO = NEW_SAFE_RANGE,
    NS_TLG_CAPS_MO
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_92(
        KC_MUTE,  KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,   KC_F13,   KC_F14,  C(G(KC_Q)),
                  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        _______,  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        _______,  NS_CAPS_MO,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,
        _______,  KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,          KC_UP,
        NS_TLG_CAPS_MO,  KC_LCTL,  KC_LOPT,  KC_LCMD,                                KC_SPC,                                 KC_RCMD,  KC_ROPT,  MO(NS_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RIGHT),

    [NS_FN] = LAYOUT_ansi_92(
        RGB_TOG,  _______,            KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  _______,  _______,  DB_TOGG,
                  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BT_HST1,  _______,  _______,  _______,  LSFT(KC_9),  LSFT(KC_0),  KC_MINS,  KC_EQL,  LSFT(KC_RBRC),  KC_UP,  LSFT(KC_SLSH), _______,  _______,  _______,    _______,  _______,  _______,  _______,
        BT_HST2,  NS_CAPS_MO  ,  _______, KC_LOPT,  KC_LCMD,  KC_BSPC, KC_ENT,  LSFT(KC_LBRC),  KC_LEFT  ,  KC_DOWN,  KC_RIGHT,  KC_LSFT, LSFT(KC_QUOT),              _______,
        BT_HST3,  _______,            _______,  _______,  LSFT(KC_COMM),  LSFT(KC_DOT),  KC_BSLS,  KC_LBRC,  KC_RBRC,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,  _______,                                LT(NS_FN2, KC_SPC),                                 _______,  _______,  _______,    _______,  _______,  _______,  _______),

    [NS_FN2] = LAYOUT_ansi_92(
        _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
                  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______ ,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  LGUI(KC_S),  _______,  LGUI(KC_Z),  _______,  _______,  _______,  _______,   _______, _______, _______,              _______,
        _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,  _______,                                _______,                                 _______,  _______,  _______,    _______,  _______,  _______,  _______),

    [LAYER4] = LAYOUT_ansi_92(
        _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,
                  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,
        _______,  _______,  _______, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,
        _______,  _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            _______,
        _______,  _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,  _______,  _______,  _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [NS_FN]   = { ENCODER_CCW_CW(RGB_VAI, RGB_VAD)},
    [NS_FN2] = { ENCODER_CCW_CW(_______, _______)},
    [LAYER4]   = { ENCODER_CCW_CW(_______, _______)},
};
#endif // ENCODER_MAP_ENABLE

static bool CAPS_LOCK_MODIFIER_ENABLED = 0;

void keyboard_post_init_user(void) {
    debug_enable = true;

    rgb_matrix_enable();
    rgb_matrix_sethsv(HSV_CYAN);
    rgb_matrix_mode(1);

    CAPS_LOCK_MODIFIER_ENABLED = true;
    layer_off(NS_FN);
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
        case NS_TLG_CAPS_MO:
            if (record->event.pressed) {
                CAPS_LOCK_MODIFIER_ENABLED = !CAPS_LOCK_MODIFIER_ENABLED;
            }
            return false;
        case NS_CAPS_MO:
            if (!CAPS_LOCK_MODIFIER_ENABLED) {
                if (record->event.pressed) {
                    register_code(KC_CAPS);
                } else {
                    unregister_code(KC_CAPS);
                }
                return false;
            }

            if (record->event.pressed) {
                layer_on(NS_FN);
            } else {
                layer_off(NS_FN);
            }
            return false;
        default:
            return true;
    }
}

bool dip_switch_update_user(uint8_t index, bool active) {
    return false;
}

bool rgb_matrix_indicators_user(void) {
    if (!CAPS_LOCK_MODIFIER_ENABLED) {
        rgb_matrix_set_color(79, 255, 0, 0);
    }
    return false;
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(NS_FN, KC_SPC):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
}
