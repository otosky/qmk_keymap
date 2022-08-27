#include "layers.h"
#include "combo.h"

const uint16_t PROGMEM SP_BSPC[]    = {LT(NAV, KC_SPC), LT(NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM SP_ENT[]     = {LT(NAV, KC_SPC), LT(SYM, KC_ENT), COMBO_END};
const uint16_t PROGMEM _X_C[]       = {ALGR_T(KC_X), KC_C, COMBO_END};
const uint16_t PROGMEM _F_P[]       = {KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM _L_U[]       = {KC_L, KC_U, COMBO_END};
const uint16_t PROGMEM _COMM_DOT[]  = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM _W_F[]       = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM _C_D[]       = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM _H_COMM[]    = {KC_H, KC_COMM, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(SP_BSPC, LT(FUN, KC_ESC)),
    COMBO(SP_ENT, KC_CAPS),
    COMBO(_X_C, KC_Z),
    COMBO(_F_P, KC_B),
    COMBO(_L_U, KC_J),
    COMBO(_COMM_DOT, LT(FUN, KC_SLSH)),
    COMBO(_W_F, KC_ESC),
    COMBO(_C_D, KC_V),
    COMBO(_H_COMM, KC_K),
};
