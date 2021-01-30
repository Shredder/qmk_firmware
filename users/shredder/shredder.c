// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include "shredder.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined MIRYOKU_ALPHAS_QWERTY
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
    LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MEDR, KC_ESC),  LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_BSPC),  LT(FUNL, KC_DEL),  U_NP,              U_NP
  ),
#else
  [BASE] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    U_NP,              U_NP,              LT(MOUR, KC_ESC),  LT(NAVR, KC_BSPC), LT(NSL, KC_DEL),   LT(FUNL, KC_ENT),  LT(NSSL, KC_SPC),  LT(MEDR, KC_TAB),  U_NP,              U_NP
  ),
#endif
  [NAVR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,   KC_ENT,  KC_BSPC, KC_DEL,  U_NP,    U_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,   U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,   U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,   U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,   KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MBO] = LAYOUT_miryoku(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    U_NP,    U_NP,    KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, U_NP,    U_NP
  ),
  [MEDR] = LAYOUT_miryoku(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, U_NA,   U_NA,    U_NA,    U_NA,    RESET,
    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_NA,   U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_MSTP, KC_MPLY, KC_MUTE, U_NA,   U_NA,    U_NA,    U_NP,    U_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12, KC_F7, KC_F8,  KC_F9,   KC_PSCR, U_NA,   U_NA,    U_NA,    U_NA,    RESET,
    KC_F11, KC_F4, KC_F5,  KC_F6,   KC_SLCK, U_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10, KC_F1, KC_F2,  KC_F3,   KC_PAUS, U_NA,   U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,   U_NP,  KC_APP, KC_SPC,  KC_TAB,  U_NA,   U_NA,    U_NA,    U_NP,    U_NP
  ),
  [NSL] = LAYOUT_miryoku(
    RESET,   U_NA,    U_NA,    U_NA,    U_NA,   KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,   KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,
    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,   KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS,
    U_NP,    U_NP,    U_NA,    U_NA,    U_NA,   KC_MINS, KC_0,    KC_DOT,  U_NP,    U_NP
  ),
  [NSSL] = LAYOUT_miryoku(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_RCBR, KC_LPRN, U_NA,   U_NA,    U_NA,    U_NA,    RESET,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,   U_NA,    U_NA,    KC_ALGR, U_NA,
    U_NP,    U_NP,    KC_UNDS, KC_LPRN, KC_RPRN, U_NA,   U_NA,    U_NA,    U_NP,    U_NP
  )
};


LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_Q) {
      register_code(KC_LALT);
      register_code(KC_F4);
      unregister_code(KC_F4);
      unregister_code(KC_LALT);
    }
    SEQ_ONE_KEY(KC_M) {
      register_code(KC_F11);
      unregister_code(KC_F11);
    }
    // Add personalized sequences
  }
}
