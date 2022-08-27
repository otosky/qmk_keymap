#pragma once

// to save memory
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 175

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Combos
#define COMBO_COUNT 9
#undef COMBO_TERM
#define COMBO_TERM 25

// Leader
#define LEADER_TIMEOUT 300
#define LEADER_PER_KEY_TIMING

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

