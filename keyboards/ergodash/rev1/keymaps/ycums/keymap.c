#include QMK_KEYBOARD_H
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _WIN__ 0
#define _GAME_  1
#define _MAC__  2
#define _EMACS  3
#define _LOWER  4
#define _RAISE  5
#define _ADJUST 6

enum custom_keycodes {
  WIN__ = SAFE_RANGE,
  GAME_,
  MAC__,
  EMACS,
  LOWER,
  RAISE,
  ADJUST,
};

// Fillers to make layering more clear
#define KC______  KC_TRNS
#define KC_XXXXX  KC_NO
#define KC_WIN__  WIN__
#define KC_GAME_  GAME_
#define KC_MAC__  MAC__
#define KC_EMACS  EMACS
#define KC_RAISE  RAISE
#define KC_LOWER  LOWER

#define KC_EISU2 LT(_LOWER,KC_MHEN)
#define KC_KANA2 LT(_RAISE,KC_HENK)
#define KC_RSMHN LT(_RAISE,KC_MHEN)
#define KC_RSLN2 LT(_RAISE,KC_LANG2)
#define KC_SFENT SFT_T(KC_ENT)

#define KC_CTRLQ LCTL(KC_Q)
#define KC_CTRLW LCTL(KC_W)
#define KC_CTRLE LCTL(KC_E)
#define KC_CTRLR LCTL(KC_R)
#define KC_CTRLT LCTL(KC_T)
#define KC_CTRLA LCTL(KC_A)
#define KC_CTRLS LCTL(KC_S)
#define KC_CTRLD LCTL(KC_D)
#define KC_CTRLF LCTL(KC_F)
#define KC_CTRLZ LCTL(KC_Z)
#define KC_CTRLX LCTL(KC_X)
#define KC_CTRLC LCTL(KC_C)
#define KC_CTRLV LCTL(KC_V)

#define KC_CTRLI LCTL(KC_I)
#define KC_CTRLL LCTL(KC_L)
#define KC_CTREN LCTL(KC_ENT)
#define KC_CTRTB LCTL(KC_TAB)
#define KC_CTRAL LCTL(KC_LALT)
#define KC_ALTF4 LALT(KC_F4)

#define KC_CMDSP LCMD(KC_SPACE)

#define KC_ELTOG RGB_TOG
#define KC_ELMOD RGB_MOD
#define KC_ELHUD RGB_HUD
#define KC_ELHUI RGB_HUI
#define KC_ELSAD RGB_SAD
#define KC_ELSAI RGB_SAI
#define KC_ELVAD RGB_VAD
#define KC_ELVAI RGB_VAI
#define KC_ELMP_ RGB_MODE_PLAIN    // Static (no animation) mode
#define KC_ELMB_ RGB_MODE_BREATHE  // Breathing animation mode
#define KC_ELMR_ RGB_MODE_RAINBOW  // Rainbow animation mode
#define KC_ELMSW RGB_MODE_SWIRL    // Swirl animation mode
#define KC_ELMSN RGB_MODE_SNAKE    // Snake animation mode
#define KC_ELMK_ RGB_MODE_KNIGHT   // "Knight Rider" animation mode
#define KC_ELMX_ RGB_MODE_XMAS     // Christmas animation mode
#define KC_ELMG_ RGB_MODE_GRADIENT // Static gradient animation mode
#define KC_ELMT_ RGB_MODE_RGBTEST  // Red, Green, Blue test animation mode

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_WIN__] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
        ESC,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,  BSPC,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
        TAB,     Q,     W,     E,     R,     T, XXXXX,                      XXXXX,     Y,     U,     I,     O,     P, MINUS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      EMACS,     A,     S,     D,     F,     G,     H,                      XXXXX,     H,     J,     K,     L,  SCLN,  QUOT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
       LSFT,     Z,     X,     C,     V,     B, RSMHN,                       HENK,     N,     M,  COMM,   DOT,  SLSH,  RSFT,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX,  LALT,  LGUI,         LALT, LCTRL, LOWER, SPACE,          ENT, RAISE, RAISE, XXXXX,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_GAME_] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
        ESC,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,  BSPC,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
        TAB,     Q,     W,     E,     R,     T, XXXXX,                      XXXXX,     Y,     U,     I,     O,     P, MINUS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      LCTRL,     A,     S,     D,     F,     G,     H,                      XXXXX,     H,     J,     K,     L,  SCLN,  QUOT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
       LSFT,     Z,     X,     C,     V,     B, RSMHN,                       HENK,     N,     M,  COMM,   DOT,  SLSH,  RSFT,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX,  LALT,  LGUI,         LALT, EMACS, LOWER, SPACE,          ENT, RAISE, RAISE, XXXXX,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_MAC__] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
        ESC,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,  BSPC,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
        TAB,     Q,     W,     E,     R,     T, XXXXX,                      XXXXX,     Y,     U,     I,     O,     P, MINUS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      LCTRL,     A,     S,     D,     F,     G,     H,                      XXXXX,     H,     J,     K,     L,  SCLN,  QUOT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
       LSFT,     Z,     X,     C,     V,     B, RSLN2,                      LANG1,     N,     M,  COMM,   DOT,  SLSH,  RSFT,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX,  LALT, CMDSP,         LALT,  LCMD, LOWER, SPACE,          ENT, RAISE, RAISE, XXXXX,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_EMACS] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      CTRTB, CTRLQ, CTRLW,   END, CTRLR, CTRLT, XXXXX,                      XXXXX, _____, _____, CTRLI, _____,    UP, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,  HOME, CTRLS,   DEL, RIGHT, CTRLF,  BSPC,                      XXXXX,  BSPC, _____, _____, CTRLL, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, CTRLZ, CTRLX, CTRLC, CTRLV,  LEFT, _____,                      _____,  DOWN, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX, _____, _____,        _____, _____, _____, _____,        CTREN, _____, _____, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_LOWER] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      GRAVE,     1,     2,     3,     4,     5, XXXXX,                      XXXXX,     6,     7,     8,     9,     0,  BSLS,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,  HOME, CTRLS,   DEL,  PLUS,  LBRC,  BSPC,                      XXXXX,  RBRC, MINUS,   EQL, _____,  COLN,   DQT,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, CTRLZ, CTRLX, CTRLC,   EQL,  LCBR, _____,                      _____,  RCBR,  UNDS, _____, _____,  QUES, _____,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX, _____, _____,        _____, _____, _____, _____,        _____, _____, _____, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_RAISE] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,    F1,    F2,    F3,    F4,    F5, XXXXX,                      XXXXX,    F6,    F7,    F8,    F9,   F10, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____,   F11,   F12, _____, _____, _____, _____,                      XXXXX,  BSPC, _____,    UP, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, _____,                      _____, _____,  LEFT,  DOWN, RIGHT, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX, _____, _____,        _____, _____, _____, CTREN,        _____, _____, _____, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT_kc( \
  //,------------------------------------------------.                    ,------------------------------------------------.
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, XXXXX,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------|                    |------+------+------+------+------+------+------|
      _____, _____, _____, _____, _____, _____, _____,                      XXXXX, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+------|      |------+------+------+------+------+------+------+------|
      _____, WIN__, GAME_, MAC__, _____, _____, _____,                      _____, _____, _____, _____, _____, _____, _____,\
  //|------+------+------+------+------+------+------+      |      |      +------+------+------+------+------+------+------|
      XXXXX, _____, _____,        _____, _____, _____, _____,        _____, _____, _____, _____,        XXXXX, XXXXX, XXXXX \
  //`-------------------------------------------------------'      `-------------------------------------------------------'
  ),
};

#ifdef AUDIO_ENABLE
float tone_WIN__[][2]     = SONG(WIN__);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case WIN__:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_WIN__);
        rgblight_setrgb_blue();
      }
      return false;
      break;
    case GAME_:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_GAME_);
        rgblight_setrgb_red();
      }
      return false;
      break;
    case MAC__:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_MAC__);
        rgblight_setrgb_white();
      }
      return false;
      break;
    case EMACS:
      if (record->event.pressed)
      {
        layer_on(_EMACS);
      }
      else
      {
        layer_off(_EMACS);
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

#define RGBLIGHT_COLOR_LAYER_DEFAULT    0x00, 0x00, 0x00
#define RGBLIGHT_COLOR_LAYER_EMACS      0xFF, 0x00, 0x00
#define RGBLIGHT_COLOR_LAYER_LOWER      0x00, 0x00, 0xFF
#define RGBLIGHT_COLOR_LAYER_RAISE      0x00, 0xFF, 0x00
#define RGBLIGHT_COLOR_LAYER_ADJUST     0x00, 0xFF, 0xFF

uint32_t layer_state_set_user(uint32_t state)
{
  state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
  uint8_t layer = biton32(state);
  switch (layer) {
      case _EMACS:
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_EMACS);
          break;

      case _LOWER:
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_LOWER);
          break;

      case _RAISE:
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_RAISE);
          break;

      case _ADJUST:
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_ADJUST);
          break;

      default:
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_DEFAULT);
          break;
  }
  return state;
};
