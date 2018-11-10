#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};


// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KC______ KC_TRNS
#define KC_XXXXX KC_NO

#define KC_RAISE RAISE
#define KC_LOWER LOWER

#define KC_CTLTB CTL_T(KC_TAB)
#define KC_EISU2 LT(_LOWER,KC_MHEN)
#define KC_KANA2 LT(_RAISE,KC_HENK)
#define KC_SFENT SFT_T(KC_ENT)

struct keymap
{
  /* data */
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QWERTY] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
        ESC, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
        TAB,     Q,     W,     E,     R,     T, XXXXX,                      XXXXX,     Y,     U,     I,     O,     P, MINUS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      CTLTB,     A,     S,     D,     F,     G, XXXXX,                      XXXXX,     H,     J,     K,     L,  SCLN,  QUOT,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
       LSFT,     Z,     X,     C,     V,     B, XXXXX,                      XXXXX,     N,     M,  COMM,   DOT,  SLSH,  RSFT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
       LGUI, XXXXX, KANA2,         LALT, EISU2,   SPC, XXXXX,        XXXXX, SFENT, KANA2,  RALT,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_LOWER] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____,   END, _____, _____, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,    UP,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,  HOME, _____,   DEL, RIGHT, _____, XXXXX,                      XXXXX,  BSPC, _____, _____,  LBRC,  RBRC, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____,  LEFT, XXXXX,                      XXXXX,  DOWN, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, _____, _____,        _____, LOWER, _____, XXXXX,        XXXXX, _____, RAISE , _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_RAISE] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,      1,    2,     3,     4,    5,  XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, _____, _____,        _____, LOWER, _____, XXXXX,        XXXXX, _____, RAISE, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT_kc(
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____,     4,     5,     6, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____,     1,     2,     3, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, _____, _____,        _____, LOWER, _____, XXXXX,        XXXXX, _____, RAISE , _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  )
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
         print("mode just switched to qwerty and this is a huge string\n");
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
