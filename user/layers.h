#pragma once
#include QMK_KEYBOARD_H

enum layers { 
  _BASE, 
  _QWERTY,
  _HALMAK,
  _WORKMAN,
  BUTTON, 
  MEDIA, 
  NAV, 
  MOUSE, 
  SYM, 
  NUM, 
  FUN 
};

enum layer_keycodes { 
  BASE = SAFE_RANGE, 
  QWERTY,
  HALMAK,
  WORKMAN,
};
