#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _SYMB 1
#define _RGB 2

enum custom_keycodes {
  SFT_F6 = SAFE_RANGE,
};

//enum combo_events {
//  P_BSLS_RBRC,
//  O_P_LBRC
//};
//
//const uint16_t PROGMEM rbrc_combo[] = {KC_P, KC_BSLS, COMBO_END};
//const uint16_t PROGMEM lbrc_combo[] = {KC_O, KC_P, COMBO_END};
//
//combo_t key_combos[COMBO_COUNT] = {
//  [P_BSLS_RBRC] = COMBO_ACTION(rbrc_combo),
//  [O_P_LBRC] = COMBO_ACTION(lbrc_combo),
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,KC_EQL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,KC_6    ,                          KC_6    ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_BSLS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_LBRC ,                          KC_RBRC ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B  ,KC__VOLDOWN,KC__VOLUP,      KC_MFFD ,KC_MPLY ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LCTL ,KC_LCTL ,KC_LALT ,KC_LGUI ,     KC_SPC  ,    KC_BSPC ,MO(1)   ,        MO(1)   ,KC_ENT  ,    KC_SPC  ,     KC_LGUI ,KC_LBRC ,KC_RBRC ,MO(2) 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,KC_F12  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_F6   ,                          KC_F6   ,KC_TRNS ,KC_TRNS ,KC_UP   ,KC_TRNS ,KC_LBRC ,KC_RBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,SFT_F6  ,                          KC_TRNS ,KC_TRNS ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS,         KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,    KC_DEL  ,KC_TRNS,         KC_TRNS ,KC_TRNS ,    KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_RGB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     RGB_TOG ,RGB_MOD ,RGB_HUD ,RGB_HUI ,RGB_SAD ,RGB_SAI ,                                            KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,RGB_TOG ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,RGB_VAD ,                          RGB_VAI ,KC_TRNS ,KC_TRNS ,KC_UP   ,KC_TRNS ,KC_LBRC ,KC_RBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,SFT_F6  ,                          KC_TRNS ,KC_TRNS ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS,         KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,     KC_TRNS ,    KC_DEL  ,KC_TRNS,         KC_TRNS ,KC_TRNS ,    KC_TRNS ,     KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case SFT_F6:
      if (record->event.pressed) {
        tap_code16(LSFT(KC_F6));
      }
      break;

  }
  return true;
};

//void process_combo_event(uint8_t combo_index, bool pressed) {
//  switch(combo_index) {
//    case P_BSLS_RBRC:
//      if (pressed) {
//        tap_code(KC_RBRC);
//      }
//      break;
//    case O_P_LBRC:
//      if (pressed) {
//        tap_code(KC_LBRC);
//      }
//      break;
//  }
//}
//
//uint16_t get_tapping_term(uint16_t keycode) {
//  switch (keycode) {
//    case LT(1, KC_DEL):
//      return 200;
//    default:
//      return TAPPING_TERM;
//  }
//}

