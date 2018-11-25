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
#define KC______ KC_TRNS
#define KC_XXXXX KC_NO
#define KC_RAISE RAISE
#define KC_LOWER LOWER

#define KC_CTLTB CTL_T(KC_TAB)
#define KC_EISU2 LT(_LOWER,KC_MHEN)
#define KC_KANA2 LT(_RAISE,KC_HENK)
#define KC_SFENT SFT_T(KC_ENT)
#define KC_CTRLZ LCTL(KC_Z)
#define KC_CTRLX LCTL(KC_X)
#define KC_CTRLC LCTL(KC_C)
#define KC_CTRLV LCTL(KC_V)
#define KC_CTRLS LCTL(KC_S)
#define KC_CTRLA LCTL(KC_A)
#define KC_CTRLD LCTL(KC_D)
#define KC_CTRLF LCTL(KC_F)
#define KC_ALTF4 LCTL(KC_F)

struct keymap
{
  /* data */
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_QWERTY] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
        ESC, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
        TAB,     Q,     W,     E,     R,     T, MINUS,                        EQL,     Y,     U,     I,     O,     P, MINUS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      CTLTB,     A,     S,     D,     F,     G,  LBRC,                       RBRC,     H,     J,     K,     L,  SCLN,  QUOT,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
       LSFT,     Z,     X,     C,     V,     B, XXXXX,                      XXXXX,     N,     M,  COMM,   DOT,  SLSH,  RSFT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      KANA2,  LGUI, XXXXX,         LALT, EISU2,   SPC, XXXXX,        XXXXX, SFENT, KANA2,  RALT,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_LOWER] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      GRAVE,     1,     2,     3,     4,     5, _____,                      _____,     6,     7,     8,     9,     0,    UP,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,  HOME, CTRLS,   DEL, RIGHT, _____,  LPRN,                       RPRN,  BSPC, MINUS,   EQL,  LBRC,  RBRC,  BSLS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------
      _____, CTRLZ, CTRLX, CTRLC, CTRLV,  LEFT, XXXXX,                      XXXXX,  DOWN, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      RAISE, _____, XXXXX,        _____, LOWER, _____, XXXXX,        XXXXX, _____, RAISE, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_RAISE] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      GRAVE,     1,     2,     3,     4,     5, _____,                      _____,     6,     7,     8,     9,     0,    UP,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,  HOME, CTRLS,   DEL, RIGHT, _____,  LPRN,                       RPRN,  BSPC, MINUS,    UP,  LBRC,  RBRC,  BSLS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------
      _____, CTRLZ, CTRLX, CTRLC, CTRLV,  LEFT, XXXXX,                      XXXXX,  DOWN,  LEFT,  DOWN, RIGHT, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      RAISE, _____, XXXXX,        _____, LOWER, _____, XXXXX,        XXXXX, _____, RAISE, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),
  [_ADJUST] = LAYOUT_kc(
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,    F1,    F2,    F3,    F4,    F5, _____,                      _____,    F6,    F7,    F8,    F9,   F10, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, ALTF4, _____, _____,                      _____, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, _____, XXXXX,        _____, _____, _____, XXXXX,        XXXXX, _____, _____, _____,        XXXXX, XXXXX, XXXXX \
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
