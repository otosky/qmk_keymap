#include "otosky.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_reviung34(
  LT(MEDIA, KC_Q),   KC_W,              KC_F,              KC_P,              KC_NO,              KC_NO,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
  LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
  KC_LEAD,  ALGR_T(KC_X),      KC_C,              KC_D,              KC_NO,              KC_K,              KC_H,              KC_COMM,           KC_DOT,    LT(FUN, KC_SLSH),
                                                           LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC)  
),

[_QWERTY] = LAYOUT_reviung34(
  LT(MEDIA, KC_Q),   KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
  LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
  LT(BUTTON, KC_Z),  ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,    LT(FUN, KC_SLSH),
                                                           LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC)  
),

[_HALMAK] = LAYOUT_reviung34(
  LT(MEDIA, KC_Q),   KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,
  LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            LSFT_T(KC_A),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
  LT(BUTTON, KC_F),  ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              KC_K,      LT(FUN, KC_Y),
                                                           LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC)
),

[_WORKMAN] = LAYOUT_reviung34(
  LT(MEDIA, KC_Q),   KC_D,              KC_R,              KC_W,              KC_B,              KC_J,              KC_F,              KC_U,              KC_P,              KC_QUOT,
  LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_H),      LSFT_T(KC_T),      KC_G,              KC_Y,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_O),      LGUI_T(KC_I),
  LT(BUTTON, KC_Z),  ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_L,              KC_COMM,           KC_DOT,    LT(FUN, KC_SLSH),
                                                           LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC)
),

#if defined MIRYOKKC_NOV_VI
[NAV] = LAYOUT_reviung34(
  RESET,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS,
  KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO,    KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_INS,
                             KC_NO,    KC_NO,    KC_ESC,  KC_BSPC
),
[MEDIA] = LAYOUT_reviung34(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
  KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                             KC_NO,    KC_NO,    KC_MSTP, KC_MPLY
),
#else
[NAV] = LAYOUT_reviung34(
  RESET,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
  KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                             KC_NO,    KC_NO,    KC_ESC,  KC_BSPC
),
[MEDIA] = LAYOUT_reviung34(
  RESET,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_NO,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
  KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                             KC_NO,    KC_NO,    KC_MSTP, KC_MPLY
),
#endif

[MOUSE] = LAYOUT_reviung34(
  RESET,   KC_NO,    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_MS_U, KC_NO,    KC_NO,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_NO,    KC_MS_L, KC_MS_D, KC_MS_R, KC_NO,
  KC_NO,    KC_ALGR, KC_NO,    KC_NO,    KC_NO,    KC_BTN2, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                             KC_NO,    KC_NO,    KC_BTN1, KC_BTN3
),

[NUM] = LAYOUT_reviung34(
  KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_NO,    KC_GRV,  KC_NO,    KC_NO,    RESET,
  KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_NO,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NO,    KC_NO,    KC_COMM, KC_DOT,  KC_ALGR,
                             KC_0,    KC_MINS, KC_NO,    KC_NO
),

[SYM] = LAYOUT_reviung34(
  KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO,    KC_TILD, KC_PIPE, KC_BSLS, RESET,
  KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NO,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NO,    KC_NO,    KC_COMM, KC_DOT,  KC_ALGR,
                             KC_RPRN, KC_UNDS, KC_NO,    KC_NO
),

[FUN] = LAYOUT_reviung34(
  KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NO,    KC_NO,    KC_NO,    KC_NO,    RESET,
  KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, BASE,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NO,    QWERTY,  HALMAK,  KC_ALGR, KC_NO,
                             KC_SPC,  KC_TAB,  KC_NO,    KC_NO
),

[BUTTON] = LAYOUT_reviung34(
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                             KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3
)

};

