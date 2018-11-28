#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LAYR1 1
#define _LOWER 2
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LAYR1,
  LOWER,
  RAISE,
  ADJUST,
};


// Fillers to make layering more clear
#define KC______ KC_TRNS
#define KC_XXXXX KC_NO
#define KC_RAISE RAISE
#define KC_LOWER LOWER
#define KC_LAYR1 LAYR1

#define KC_CTLTB CTL_T(KC_TAB)
// #define KC_EISU2 LT(_LOWER,KC_MHEN)
#define KC_EISU1 LT(_LAYR1, KC_MHEN)
#define KC_EISU2 LT(_LOWER, KC_MHEN)
#define KC_KANA2 LT(_RAISE, KC_HENK)
#define KC_SFENT SFT_T(KC_ENT)
#define KC_CTRLZ LCTL(KC_Z)
#define KC_CTRLX LCTL(KC_X)
#define KC_CTRLC LCTL(KC_C)
#define KC_CTRLV LCTL(KC_V)
#define KC_CTRLS LCTL(KC_S)
#define KC_CTRLA LCTL(KC_A)
#define KC_CTRLD LCTL(KC_D)
#define KC_CTRLF LCTL(KC_F)
#define KC_CTRLW LCTL(KC_W)
#define KC_CTRLL LCTL(KC_L)
#define KC_CTRLT LCTL(KC_T)
#define KC_CTREN LCTL(KC_ENT)
#define KC_CTRTB LCTL(KC_TAB)
#define KC_CTRAL LCTL(KC_LALT)
#define KC_ALTF4 LALT(KC_F4)

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
      LCTRL,     A,     S,     D,     F,     G, XXXXX,                      XXXXX,     H,     J,     K,     L,  SCLN,  QUOT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
       LSFT,     Z,     X,     C,     V,     B, KANA2,               XXXXX,            N,     M,  COMM,   DOT,  SLSH,  RSFT,\
  //|------+------+------+------+------+------+------+      |      |------+      +------+------+------+------+------+------|
       LGUI, XXXXX, XXXXX,         LALT, EISU1, EISU2, SPACE,        XXXXX, SFENT, KANA2,  RALT,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),
  [_LAYR1] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      CTRTB, ALTF4, CTRLW,   END, _____, CTRLT, XXXXX,                      XXXXX, _____, _____, _____, _____, _____,    UP,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      LCTRL,  HOME, CTRLS,   DEL, RIGHT, CTRLF, XXXXX,                      XXXXX,  BSPC, _____, _____, CTRLL, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, CTRLZ, CTRLX, CTRLC, CTRLV,  LEFT, RAISE,               XXXXX,         DOWN, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |------+      +------+------+------+------+------+------|
       LGUI, XXXXX, XXXXX,        CTRAL, LAYR1, LOWER, _____,        XXXXX, CTREN, RAISE, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),
  [_LOWER] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      GRAVE,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,    UP,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      LCTRL,  HOME, CTRLS,   DEL, RIGHT, CTRLF, XXXXX,                      XXXXX,  BSPC, MINUS,   EQL,  LBRC,  RBRC,  BSLS,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, CTRLZ, CTRLX, CTRLC, CTRLV,  LEFT, RAISE,               XXXXX,         DOWN, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |------+      +------+------+------+------+------+------|
       LGUI, XXXXX, XXXXX,        _____, LAYR1, LOWER, _____,        XXXXX, SFENT, RAISE, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_RAISE] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      GRAVE,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,    UP,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      LCTRL,  HOME, CTRLS,   DEL, RIGHT, _____, XXXXX,                      XXXXX,  BSPC, MINUS,    UP,  LBRC,  RBRC,  BSLS,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, CTRLZ, CTRLX, CTRLC, CTRLV,  LEFT, RAISE,               XXXXX,         DOWN,  LEFT,  DOWN, RIGHT, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |------+      +------+------+------+------+------+------|
       LGUI, XXXXX, XXXXX,        _____, LAYR1, LOWER, _____,        XXXXX, SFENT, RAISE, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT_kc(
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,                      XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX, XXXXX,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,    F1,    F2,    F3,    F4,    F5, XXXXX,                      XXXXX,    F6,    F7,    F8,    F9,   F10, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,  F11,    F12, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, _____,               XXXXX,        _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |------+      +------+------+------+------+------+------|
      _____, XXXXX, XXXXX,        _____, _____, _____, _____,        XXXXX, _____, _____, _____,        XXXXX, XXXXX, XXXXX \
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
    case LAYR1:
      if (record->event.pressed)
      {
        layer_on(_LAYR1);
      }
      else
      {
        layer_off(_LAYR1);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed)
      {
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
