#include QMK_KEYBOARD_H
#include "keymap_us_international_linux.h"
#include "sendstring_us_international.h"


enum layer_names {
    // _QWERTY,
    _CMDH,
    _LOWER,
    _RAISE,
    _ADJUST
};

enum custom_keycodes {
  // QWERTY = SAFE_RANGE,
  CMDH = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

#define KC_VOLI KC_KB_VOLUME_UP
#define KC_VOLD KC_KB_VOLUME_DOWN

#define LG(kc) LGUI_T(kc)
#define LA(kc) LALT_T(kc)
#define LC(kc) LCTL_T(kc)
#define LS(kc) LSFT_T(kc)
#define RG(kc) RGUI_T(kc)
#define RA(kc) RALT_T(kc)
#define RC(kc) RCTL_T(kc)
#define RS(kc) RSFT_T(kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // [_QWERTY] = LAYOUT(
  //   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                        KC_EQL , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //   KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,                        KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC ,                        KC_BSPC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(CMDH),
  //   KC_LCTL, KC_LGUI, KC_LALT, KC_LALT,          LOWER,   KC_SPC , KC_DEL,        KC_ENT, KC_BSPC, RAISE,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  // ),
  //
  [_CMDH] = LAYOUT(
    KC_TAB,  US_Q,    US_W,    US_F,    US_P,    US_B,    US_MINS,                        US_EQL , US_J,    US_L,    US_U,    US_Y,    US_SCLN, US_BSLS,
    LG(KC_ESC),US_A,  US_R,    US_S,    US_T,    US_G,    US_LBRC,                        US_RBRC, US_M,    US_N,    US_E,    US_I,    US_O,    RG(US_QUOT),
    KC_LSFT, US_Z,    US_X,    US_C,    US_D,    US_V,    XXXXXXX,                        XXXXXXX, US_K,    US_H,    US_COMM, US_DOT,  US_SLSH, KC_RSFT,
    KC_LCTL, KC_ALGR, KC_LGUI, KC_LALT,          LOWER,   KC_SPC , KC_DEL,       KC_ENT,  KC_BSPC, RAISE,            KC_LEFT, KC_DOWN, KC_UP,   LC(KC_RGHT)
  ),
  // [_CMDH] = LAYOUT(
  //   KC_TAB,  US_Q,        US_W,        US_F,        US_P,        US_B,    US_MINS,                        US_EQL , US_J,    US_L,        US_U,        US_Y,        US_SCLN,     US_BSLS,
  //   KC_ESC,  LG(US_A),    LA(US_R),    LC(US_S),    LS(US_T),    US_G,    US_LBRC,                        US_RBRC, US_M,    RS(US_N),    RC(US_E),    LA(US_I),    RG(US_O),    US_QUOT,
  //   KC_LSFT, US_Z,        US_X,        US_C,        US_D,        US_V,    XXXXXXX,                        XXXXXXX, US_K,    US_H,        US_COMM,     US_DOT,      US_SLSH,     KC_RSFT,
  //   KC_LCTL, KC_ALGR,     KC_LGUI,     KC_LALT,                  LOWER,   KC_SPC , KC_DEL,       KC_ENT,  KC_BSPC, RAISE,                KC_LEFT,     KC_DOWN,     KC_UP,       KC_RGHT
  // ),

  [_LOWER] = LAYOUT(
    US_TILD, US_1,    US_2,    US_3,    US_4,    US_5,    US_UNDS,                        US_PLUS, US_6,    US_7,    US_8,    US_9,    US_0,    US_ARNG,
    _______, US_CIRC, US_AMPR, US_LPRN, US_RPRN, US_ASTR, US_LCBR,                        KC_RCBR, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, US_ODIA, RG(US_ADIA),
    _______, US_EXLM, US_AT,   US_HASH, US_DLR,  US_PERC, XXXXXXX,                        XXXXXXX, US_ACUT, US_GRV,  KC_LT,   KC_GT,   US_QUES, _______,
    _______, _______, _______, _______,          _______, _______, _______,      _______, _______, _______,          KC_HOME, KC_PGDN, KC_PGUP, LC(KC_END)
  ),
  // [_LOWER] = LAYOUT(
  //   US_TILD, US_1,        US_2,        US_3,        US_4,        US_5,    US_UNDS,                        US_PLUS, US_6,    US_7,        US_8,        US_9,        US_0,        US_ARNG,
  //   _______, LG(US_CIRC), LA(US_AMPR), LC(US_LPRN), LS(US_RPRN), US_ASTR, US_LCBR,                        KC_RCBR, KC_LEFT, RS(KC_DOWN), RC(KC_UP),   LA(KC_RGHT), RG(US_ODIA), US_ADIA,
  //   _______, US_EXLM,     US_AT,       US_HASH,     US_DLR,      US_PERC, XXXXXXX,                        XXXXXXX, US_ACUT, US_GRV,      KC_LT,       KC_GT,       US_QUES,     _______,
  //   _______, _______,     _______,     _______,                  _______, _______, _______,      _______, _______, _______,              KC_HOME,     KC_PGDN,     KC_PGUP,     KC_END
  // ),
  //
  [_RAISE] = LAYOUT(
    US_TILD, US_1,    US_2,    US_3,    US_4,    US_5,    US_UNDS,                        US_PLUS, US_6,    US_7,    US_8,    US_9,    US_0,    US_ARNG,
    _______, US_CIRC, US_AMPR, US_LPRN, US_RPRN, US_ASTR, US_LCBR,                        KC_RCBR, US_H,    US_J,    US_K,    US_L,    US_ODIA, RG(US_ADIA),
    _______, US_EXLM, US_AT,   US_HASH, US_DLR,  US_PERC, XXXXXXX,                        XXXXXXX, US_ACUT, US_GRV,  KC_LT,   KC_GT,   US_QUES, _______,
    _______, _______, _______, _______,          _______, _______, _______,      _______, _______, _______,          KC_HOME, KC_PGDN, KC_PGUP, LC(KC_END)
  ),
  // [_RAISE] = LAYOUT(
  //   US_TILD, US_1,        US_2,        US_3,        US_4,        US_5,    US_UNDS,                        US_PLUS, US_6,    US_7,        US_8,        US_9,        US_0,        US_ARNG,
  //   _______, LG(US_CIRC), LA(US_AMPR), LC(US_LPRN), LS(US_RPRN), US_ASTR, US_LCBR,                        KC_RCBR, US_H,    RS(US_J),    RC(US_K),    LA(US_L),    RG(US_ODIA), US_ADIA,
  //   _______, US_EXLM,     US_AT,       US_HASH,     US_DLR,      US_PERC, XXXXXXX,                        XXXXXXX, US_ACUT, US_GRV,      KC_LT,       KC_GT,       US_QUES,     _______,
  //   _______, _______,     _______,     _______,                  _______, _______, _______,      _______, _______, _______,              KC_HOME,     KC_PGDN,     KC_PGUP,     KC_END
  // ),
  //
  [_ADJUST] = LAYOUT(
    XXXXXXX, QK_BOOT, RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, KC_BRIU,                        KC_VOLI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, XXXXXXX, KC_PSCR,
    XXXXXXX, XXXXXXX, BL_TOGG, BL_BRTG, BL_UP  , BL_DOWN, KC_BRID,                        KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6 , XXXXXXX,                        XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RG(US_QUOT): // US_QUOT uses AltGr modifier, overridden by RG(). Fix:
        if (record->tap.count && record->event.pressed) {
            tap_code16(US_QUOT); // Send US_QUOT on tap
            return false;
        }
        break;
    case RG(US_ADIA):
        if (record->tap.count && record->event.pressed) {
            tap_code16(US_ADIA);
            return false;
        }
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
