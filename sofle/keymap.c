#include "otosky.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
  KC_GRV,     KC_1,         KC_2,         KC_3,         KC_4,          KC_5,                          KC_6,       KC_7,          KC_8,          KC_9,         KC_0,         KC_NO,
  KC_NO,      KC_Q,         KC_W,         KC_F,         KC_P,          KC_B,                          KC_J,       KC_L,          KC_U,          KC_Y,         KC_QUOT,      KC_NO,
  KC_CAPS,    LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T),  KC_G,                          KC_M,       LSFT_T(KC_N),  LCTL_T(KC_E),  LALT_T(KC_I), LGUI_T(KC_O), KC_NO,
  KC_NO,      KC_Z,         ALGR_T(KC_X), KC_C,         KC_D,          KC_V,   MO(FUN),     KC_NO,    KC_K,       KC_H,          KC_COMM,       KC_DOT,       KC_SLSH,      KC_NO,
                 KC_NO,          KC_NO,          KC_NO,  LT(NAV, KC_SPC), LT(MOUSE, KC_TAB),    LT(SYM, KC_ENT),   LT(NUM, KC_BSPC), KC_NO,       KC_NO,       KC_NO
),

[_QWERTY] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
  KC_ESC,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_TAB,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  MO(FUN),            KC_NO,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                 KC_LGUI,KC_LALT,KC_LCTL, MO(NAV), KC_SPC,             KC_ENT,  LT(NUM, KC_BSPC), KC_RCTL, KC_RALT, KC_RGUI
),

[_GAME] = LAYOUT(
  KC_ESC,   KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_GRV,
  KC_N,     KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_BSPC,
  KC_NO,    KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,                            KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_QUOT,
  KC_NO,    KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,  MO(FUN),        KC_NO,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
            KC_LGUI,  KC_LALT, KC_6,    KC_SPC,  KC_0,                    KC_ENT,  LT(NUM, KC_BSPC), KC_RCTL, KC_RALT, KC_RGUI
),

[NAV] = LAYOUT(
  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_LGUI, KC_LALT,  KC_LCTL,  KC_LSFT,   KC_NO,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,
  KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO,    KC_NO, MO(FUN),        KC_NO, KC_NO,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
                KC_NO, KC_NO, KC_NO,             KC_NO,    KC_NO,    KC_NO,  KC_BSPC, KC_NO, KC_NO, KC_NO
),

[MOUSE] = LAYOUT(
  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                         KC_NO,   KC_NO,   MS_UP,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,                         KC_NO,   MS_LEFT, MS_DOWN, MS_RGHT, KC_NO,   KC_NO,
  KC_NO,   KC_NO,    KC_ALGR,  KC_NO,    KC_NO,    KC_NO,  MO(FUN),       KC_NO,  MS_BTN2, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, KC_NO,
                              KC_NO, KC_NO, KC_NO, KC_NO,    KC_NO,       MS_BTN1, MS_BTN3, KC_NO, KC_NO, KC_NO
),

[NUM] = LAYOUT(
  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                        KC_NO,     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_LBRC, KC_7,     KC_8,     KC_9,     KC_RBRC,                       KC_NO,  KC_GRV,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_SCLN, KC_4,     KC_5,     KC_6,     KC_EQL,                       KC_NO, KC_LSFT,  KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
  KC_NO,   KC_GRV,  KC_1,     KC_2,     KC_3,     KC_BSLS,   MO(FUN),       KC_NO, KC_NO,     KC_COMM, KC_DOT,  KC_ALGR, KC_NO,   KC_NO,
                                KC_NO, KC_NO, KC_NO,     KC_0,   KC_MINS,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[SYM] = LAYOUT(
  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                    KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,     KC_NO,
  KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                        KC_NO,      KC_TILD, KC_PIPE, KC_BSLS, KC_NO,     KC_NO,
  KC_NO, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                        KC_NO,      KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,   KC_NO,
  KC_NO, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, MO(FUN),           KC_NO, KC_NO,    KC_NO,    KC_COMM, KC_DOT,  KC_ALGR, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_RPRN, KC_UNDS,            KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO
),

[FUN] = LAYOUT(
  KC_NO,   BASE,   QWERTY,  GAME,    KC_NO,    QK_BOOT,                        KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_F15, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                       KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
  KC_F14, KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,                       KC_NO,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
  KC_F13, KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, MO(FUN),      KC_NO,  KC_NO,    KC_NO,  KC_NO,  KC_ALGR, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO, KC_SPC,  KC_TAB,             KC_NO,    KC_NO, KC_NO, KC_NO, KC_NO
),

};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    // Print current mode
    oled_write_P(PSTR("\n\n"), false);
    oled_write_ln_P(PSTR("MODE"), false);
    oled_write_ln_P(PSTR(""), false);

    switch (get_highest_layer(default_layer_state)) {
        case _BASE:
            oled_write_ln_P(PSTR("Clmk"), false);
            break;
        case _QWERTY:
            oled_write_ln_P(PSTR("Qwrt"), false);
            break;
        case _GAME:
            oled_write_ln_P(PSTR("Game"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Base"), false);
            break;
        case _QWERTY:
            oled_write_P(PSTR("Qwrt"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("Game"), false);
            break;
        case FUN:
            oled_write_P(PSTR("Func"), false);
            break;
        case NAV:
            oled_write_P(PSTR("Nav"), false);
            break;
        case NUM:
            oled_write_P(PSTR("Num"), false);
            break;
        case MOUSE:
            oled_write_P(PSTR("Mous"), false);
            break;
        case SYM:
            oled_write_P(PSTR("Sym"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef"), false);
    }
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK"), led_usb_state.caps_lock);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BASE:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_BASE);
            }
            return false;
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
        case GAME:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_GAME);
            }
            return false;
    }
    return true;
}

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif

