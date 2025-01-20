#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_HOME,                                        KC_END,         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_2),    
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           AS_TOGG,                                        LGUI(LSFT(UK_S)),KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    CW_TOGG,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_MS_BTN1,                                                                     KC_MS_BTN2,     KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TILD,        
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           UK_COMM,        KC_N,           KC_M,           UK_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(2),          KC_LEFT_GUI,    KC_LEFT_CTRL,   TD(DANCE_0),    TD(DANCE_1),    KC_ENTER,                                                                                                       KC_ENTER,       KC_PC_PASTE,    KC_TRANSPARENT, TG(7),          KC_TRANSPARENT, TG(4),          
    LT(1,KC_SPACE), LT(5,KC_BSPC),  LT(6,KC_DELETE),                TD(DANCE_3),    KC_DELETE,      KC_BSPC
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F12,                                         KC_MS_WH_DOWN,  KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, UK_AT,          TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    TD(DANCE_7),    KC_F5,                                          KC_MS_WH_UP,    KC_TRANSPARENT, UK_DLR,         KC_UP,          UK_PND,         KC_TRANSPARENT, KC_F12,         
    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   UK_HASH,        UK_DQUO,        LCTL(KC_B),                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_INSERT,      
    KC_TRANSPARENT, UK_PIPE,        UK_BSLS,        UK_SLSH,        UK_GRV,         UK_QUOT,                                        KC_TRANSPARENT, UK_ASTR,        UK_PERC,        UK_AMPR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(UK_S),     LALT(KC_F4),    KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_LEFT),                                  LGUI(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(LCTL(LSFT(UK_4))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_LEFT_ALT,    KC_LEFT_CTRL,   TD(DANCE_12),   TD(DANCE_13),   KC_ENTER,                                                                                                       KC_ENTER,       KC_MAC_PASTE,   KC_F1,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LT(3,KC_SPACE), LT(5,KC_BSPC),  KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPC
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   LGUI(UK_R),                                     KC_MS_WH_UP,    KC_TRANSPARENT, UK_DLR,         KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TD(DANCE_18),   TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   KC_HASH,        KC_DQUO,        LGUI(KC_B),                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PIPE,        KC_BSLS,        KC_SLASH,       KC_GRAVE,       KC_QUOTE,                                       KC_TRANSPARENT, UK_ASTR,        UK_PERC,        UK_AMPR,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    LGUI(KC_SPACE), LGUI(UK_Q),     KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TG(8),          
    KC_NO,          KC_F22,         KC_F23,         KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          MOON_LED_LEVEL, RGB_VAI,        RGB_VAD,        KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          AU_TOGG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TG(9),          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          MU_TOGG,        MU_NEXT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN3,     KC_TRANSPARENT, KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MEDIA_STOP,  KC_PAUSE,       KC_MEDIA_PLAY_PAUSE,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MEDIA_PREV_TRACK,KC_NO,          KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          UK_7,           UK_8,           UK_9,           UK_PLUS,        UK_MINS,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          UK_4,           UK_5,           UK_6,           UK_ASTR,        UK_SLSH,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          UK_1,           UK_2,           UK_3,           KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          UK_0,           KC_DOT,         KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_C,           KC_T,           KC_NO,          KC_8,           KC_NO,          KC_F2,                                          KC_LBRC,        KC_U,           MT(MOD_LALT, KC_I),KC_O,           MT(MOD_LALT, KC_P),KC_NO,          KC_TRANSPARENT, 
    KC_V,           KC_Q,           KC_W,           KC_E,           KC_NO,          KC_X,           UK_AT,                                          KC_RBRC,        KC_L,           LALT(KC_K),     KC_N,           KC_K,           KC_R,           KC_SLASH,       
    KC_NO,          KC_A,           KC_S,           KC_D,           KC_F,           KC_F8,          KC_G,                                                                           KC_V,           KC_NO,          KC_Y,           KC_T,           KC_6,           KC_NO,          KC_COMMA,       
    KC_LEFT_SHIFT,  KC_NO,          KC_NO,          KC_J,           KC_NO,          KC_NO,                                          KC_J,           KC_NO,          KC_H,           KC_NO,          UK_QUES,        UK_UNDS,        
    KC_F1,          KC_NO,          KC_NO,          KC_NO,          KC_LEFT_SHIFT,  KC_B,                                                                                                           KC_ENTER,       KC_H,           KC_NO,          KC_NO,          LALT(KC_C),     KC_F4,          
    KC_SPACE,       KC_LEFT_CTRL,   MT(MOD_LALT, KC_Z),                KC_F6,          KC_F7,          KC_F5
  ),
  [9] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_COMMA,       KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_ENTER,                                                                                                       KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_NO,          
    KC_SPACE,       UK_SCLN,        KC_NO,                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_0):
            return TAPPING_TERM -40;
        case TD(DANCE_12):
            return TAPPING_TERM -35;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,245,245}, {32,208,255}, {32,208,255}, {7,255,255}, {172,106,255}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {32,208,255}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {32,208,255}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {32,208,255}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {32,208,255}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {0,245,245}, {32,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {87,105,255}, {133,167,255}, {7,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {133,167,255}, {7,255,255}, {7,255,255}, {32,208,255}, {77,255,247}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {0,0,0}, {133,167,255}, {7,255,255}, {7,255,255}, {7,255,255}, {32,208,255}, {133,167,255}, {7,255,255}, {7,255,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {0,245,245} },

    [1] = { {0,245,245}, {0,0,0}, {172,106,255}, {0,0,0}, {0,0,0}, {172,106,255}, {172,106,255}, {172,106,255}, {172,106,255}, {0,0,0}, {172,106,255}, {172,106,255}, {172,106,255}, {172,106,255}, {87,255,255}, {172,106,255}, {172,106,255}, {172,106,255}, {172,106,255}, {7,255,255}, {172,106,255}, {172,106,255}, {172,106,255}, {172,106,255}, {0,0,0}, {172,106,255}, {172,106,255}, {172,106,255}, {172,106,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,106,255}, {172,106,255}, {172,221,247}, {0,0,0}, {0,0,0}, {172,106,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,106,255}, {172,106,255}, {32,208,255}, {172,106,255}, {0,0,0}, {172,106,255}, {32,208,255}, {32,208,255}, {172,106,255}, {0,0,0}, {172,106,255}, {172,106,255}, {32,208,255}, {172,106,255}, {0,0,0}, {172,106,255}, {0,0,0}, {0,0,0}, {0,0,0}, {32,208,255}, {32,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,245,245}, {32,208,255}, {32,208,255}, {32,208,255}, {7,255,255}, {172,178,220}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {172,178,220}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {172,178,220}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {172,178,220}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {172,178,220}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {0,245,245}, {32,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {87,105,255}, {172,178,220}, {172,227,224}, {0,0,0}, {0,0,0}, {0,0,0}, {172,178,220}, {172,227,224}, {172,227,224}, {32,208,255}, {77,255,247}, {172,227,224}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {172,178,220}, {172,227,224}, {172,227,224}, {172,227,224}, {32,208,255}, {172,178,220}, {172,227,224}, {172,227,224}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {32,208,255}, {0,245,245} },

    [3] = { {0,0,0}, {0,0,0}, {172,106,255}, {0,0,0}, {0,0,0}, {172,227,224}, {172,106,255}, {172,106,255}, {172,106,255}, {0,0,0}, {172,227,224}, {172,106,255}, {172,106,255}, {172,106,255}, {87,255,255}, {172,227,224}, {172,106,255}, {172,106,255}, {172,106,255}, {7,255,255}, {172,227,224}, {172,106,255}, {172,106,255}, {172,106,255}, {0,0,0}, {172,227,224}, {172,106,255}, {172,106,255}, {172,106,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,227,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,227,224}, {172,106,255}, {32,208,255}, {172,106,255}, {0,0,0}, {172,227,224}, {32,208,255}, {32,208,255}, {172,106,255}, {0,0,0}, {172,227,224}, {172,106,255}, {32,208,255}, {172,106,255}, {0,0,0}, {172,227,224}, {0,0,0}, {0,0,0}, {0,0,0}, {32,208,255}, {32,208,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {76,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {172,255,255}, {0,0,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {87,105,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {87,255,255}, {0,0,255}, {178,200,255}, {0,0,255}, {0,0,255}, {87,255,100}, {0,0,255}, {178,200,255}, {0,245,245}, {0,0,255}, {19,242,236}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {87,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {87,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {87,255,255}, {4,106,255}, {0,0,0}, {0,0,0}, {87,255,255}, {4,106,255}, {4,106,255}, {0,0,0}, {0,0,0}, {0,0,0}, {87,255,255}, {4,106,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {112,255,247}, {77,255,247}, {112,255,247}, {0,0,0}, {0,0,0}, {23,244,245}, {0,245,245}, {0,245,245}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {19,244,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {12,255,247}, {12,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {12,255,247}, {12,255,247}, {0,0,0}, {0,0,0}, {0,0,0}, {110,255,255}, {110,255,255}, {110,255,255}, {0,0,0}, {77,255,247}, {110,255,255}, {110,255,255}, {110,255,255}, {12,255,247}, {0,0,0}, {110,255,255}, {110,255,255}, {110,255,255}, {110,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {209,255,255}, {0,0,0}, {172,255,255}, {19,255,255}, {228,255,255}, {126,255,255}, {76,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {76,255,255}, {76,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {126,255,255}, {76,255,255}, {143,255,255}, {0,0,0}, {19,255,255}, {0,0,0}, {126,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {76,255,255}, {0,0,0}, {19,255,255}, {192,255,255}, {19,255,255}, {76,255,255}, {76,255,255}, {172,255,255}, {101,255,255}, {0,0,0}, {0,255,255}, {101,255,255}, {0,255,255}, {209,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {33,255,255}, {126,255,255}, {19,255,255}, {63,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {19,255,255}, {63,255,255}, {0,255,255}, {143,255,255}, {0,0,0}, {19,255,255}, {63,255,255}, {0,255,255}, {0,0,0}, {0,255,255}, {19,255,255}, {0,0,255}, {0,0,0}, {143,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {101,255,255}, {192,255,255}, {0,0,0} },

    [9] = { {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {101,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {192,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {0,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[22];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(UK_Z));
        tap_code16(LCTL(UK_Z));
        tap_code16(LCTL(UK_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(UK_Z));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(UK_Z)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LCTL(UK_Z)); register_code16(LCTL(UK_Z)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(UK_Z)); register_code16(LCTL(UK_Z));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(UK_Z)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LCTL(UK_Z)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(UK_Z)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); register_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case DOUBLE_TAP: register_code16(KC_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_TAP: unregister_code16(KC_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: register_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_TAP: unregister_code16(KC_TAB); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LBRC);
        tap_code16(UK_LBRC);
        tap_code16(UK_LBRC);
    }
    if(state->count > 3) {
        tap_code16(UK_LBRC);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(UK_LBRC); break;
        case SINGLE_HOLD: register_code16(UK_RBRC); break;
        case DOUBLE_TAP: register_code16(UK_LBRC); register_code16(UK_LBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LBRC); register_code16(UK_LBRC);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(UK_LBRC); break;
        case SINGLE_HOLD: unregister_code16(UK_RBRC); break;
        case DOUBLE_TAP: unregister_code16(UK_LBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LBRC); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LCBR);
        tap_code16(UK_LCBR);
        tap_code16(UK_LCBR);
    }
    if(state->count > 3) {
        tap_code16(UK_LCBR);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(UK_LCBR); break;
        case SINGLE_HOLD: register_code16(UK_RCBR); break;
        case DOUBLE_TAP: register_code16(UK_LCBR); register_code16(UK_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LCBR); register_code16(UK_LCBR);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(UK_LCBR); break;
        case SINGLE_HOLD: unregister_code16(UK_RCBR); break;
        case DOUBLE_TAP: unregister_code16(UK_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LCBR); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LABK);
        tap_code16(UK_LABK);
        tap_code16(UK_LABK);
    }
    if(state->count > 3) {
        tap_code16(UK_LABK);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(UK_LABK); break;
        case SINGLE_HOLD: register_code16(UK_RABK); break;
        case DOUBLE_TAP: register_code16(KC_CIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LABK); register_code16(UK_LABK);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(UK_LABK); break;
        case SINGLE_HOLD: unregister_code16(UK_RABK); break;
        case DOUBLE_TAP: unregister_code16(KC_CIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LABK); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_EQL);
        tap_code16(UK_EQL);
        tap_code16(UK_EQL);
    }
    if(state->count > 3) {
        tap_code16(UK_EQL);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(UK_EQL); break;
        case SINGLE_HOLD: register_code16(UK_TILD); break;
        case DOUBLE_TAP: register_code16(UK_EQL); register_code16(UK_EQL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_EQL); register_code16(UK_EQL);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(UK_EQL); break;
        case SINGLE_HOLD: unregister_code16(UK_TILD); break;
        case DOUBLE_TAP: unregister_code16(UK_EQL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_EQL); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LPRN);
        tap_code16(UK_LPRN);
        tap_code16(UK_LPRN);
    }
    if(state->count > 3) {
        tap_code16(UK_LPRN);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(UK_LPRN); break;
        case SINGLE_HOLD: register_code16(UK_RPRN); break;
        case DOUBLE_TAP: register_code16(UK_LPRN); register_code16(UK_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LPRN); register_code16(UK_LPRN);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(UK_LPRN); break;
        case SINGLE_HOLD: unregister_code16(UK_RPRN); break;
        case DOUBLE_TAP: unregister_code16(UK_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LPRN); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_QUES);
        tap_code16(UK_QUES);
        tap_code16(UK_QUES);
    }
    if(state->count > 3) {
        tap_code16(UK_QUES);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(UK_QUES); break;
        case SINGLE_HOLD: register_code16(UK_EXLM); break;
        case DOUBLE_TAP: register_code16(UK_QUES); register_code16(UK_QUES); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_QUES); register_code16(UK_QUES);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(UK_QUES); break;
        case SINGLE_HOLD: unregister_code16(UK_EXLM); break;
        case DOUBLE_TAP: unregister_code16(UK_QUES); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_QUES); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_COLN);
        tap_code16(UK_COLN);
        tap_code16(UK_COLN);
    }
    if(state->count > 3) {
        tap_code16(UK_COLN);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(UK_COLN); break;
        case SINGLE_HOLD: register_code16(UK_SCLN); break;
        case DOUBLE_TAP: register_code16(UK_COLN); register_code16(UK_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_COLN); register_code16(UK_COLN);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(UK_COLN); break;
        case SINGLE_HOLD: unregister_code16(UK_SCLN); break;
        case DOUBLE_TAP: unregister_code16(UK_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_COLN); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_MINS);
        tap_code16(UK_MINS);
        tap_code16(UK_MINS);
    }
    if(state->count > 3) {
        tap_code16(UK_MINS);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(UK_MINS); break;
        case SINGLE_HOLD: register_code16(UK_UNDS); break;
        case DOUBLE_TAP: register_code16(UK_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_MINS); register_code16(UK_MINS);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(UK_MINS); break;
        case SINGLE_HOLD: unregister_code16(UK_UNDS); break;
        case DOUBLE_TAP: unregister_code16(UK_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_MINS); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(UK_Z));
        tap_code16(LGUI(UK_Z));
        tap_code16(LGUI(UK_Z));
    }
    if(state->count > 3) {
        tap_code16(LGUI(UK_Z));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LGUI(UK_Z)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LGUI(UK_Z)); register_code16(LGUI(UK_Z)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(UK_Z)); register_code16(LGUI(UK_Z));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LGUI(UK_Z)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(UK_Z)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(UK_Z)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
        tap_code16(LGUI(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_C));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: register_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_C)); register_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_C)); register_code16(LGUI(KC_C));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LGUI(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_C)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_C)); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LBRC);
        tap_code16(UK_LBRC);
        tap_code16(UK_LBRC);
    }
    if(state->count > 3) {
        tap_code16(UK_LBRC);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(UK_LBRC); break;
        case SINGLE_HOLD: register_code16(UK_RBRC); break;
        case DOUBLE_TAP: register_code16(UK_LBRC); register_code16(UK_LBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LBRC); register_code16(UK_LBRC);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(UK_LBRC); break;
        case SINGLE_HOLD: unregister_code16(UK_RBRC); break;
        case DOUBLE_TAP: unregister_code16(UK_LBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LBRC); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LCBR);
        tap_code16(UK_LCBR);
        tap_code16(UK_LCBR);
    }
    if(state->count > 3) {
        tap_code16(UK_LCBR);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(UK_LCBR); break;
        case SINGLE_HOLD: register_code16(UK_RCBR); break;
        case DOUBLE_TAP: register_code16(UK_LCBR); register_code16(UK_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LCBR); register_code16(UK_LCBR);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(UK_LCBR); break;
        case SINGLE_HOLD: unregister_code16(UK_RCBR); break;
        case DOUBLE_TAP: unregister_code16(UK_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LCBR); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LABK);
        tap_code16(UK_LABK);
        tap_code16(UK_LABK);
    }
    if(state->count > 3) {
        tap_code16(UK_LABK);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(UK_LABK); break;
        case SINGLE_HOLD: register_code16(UK_RABK); break;
        case DOUBLE_TAP: register_code16(KC_CIRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LABK); register_code16(UK_LABK);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(UK_LABK); break;
        case SINGLE_HOLD: unregister_code16(UK_RABK); break;
        case DOUBLE_TAP: unregister_code16(KC_CIRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LABK); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_EQL);
        tap_code16(UK_EQL);
        tap_code16(UK_EQL);
    }
    if(state->count > 3) {
        tap_code16(UK_EQL);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(UK_EQL); break;
        case SINGLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(UK_EQL); register_code16(UK_EQL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_EQL); register_code16(UK_EQL);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(UK_EQL); break;
        case SINGLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(UK_EQL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_EQL); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_LPRN);
        tap_code16(UK_LPRN);
        tap_code16(UK_LPRN);
    }
    if(state->count > 3) {
        tap_code16(UK_LPRN);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(UK_LPRN); break;
        case SINGLE_HOLD: register_code16(UK_RPRN); break;
        case DOUBLE_TAP: register_code16(UK_LPRN); register_code16(UK_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_LPRN); register_code16(UK_LPRN);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(UK_LPRN); break;
        case SINGLE_HOLD: unregister_code16(UK_RPRN); break;
        case DOUBLE_TAP: unregister_code16(UK_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_LPRN); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_QUES);
        tap_code16(UK_QUES);
        tap_code16(UK_QUES);
    }
    if(state->count > 3) {
        tap_code16(UK_QUES);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(UK_QUES); break;
        case SINGLE_HOLD: register_code16(UK_EXLM); break;
        case DOUBLE_TAP: register_code16(UK_QUES); register_code16(UK_QUES); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_QUES); register_code16(UK_QUES);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(UK_QUES); break;
        case SINGLE_HOLD: unregister_code16(UK_EXLM); break;
        case DOUBLE_TAP: unregister_code16(UK_QUES); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_QUES); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_COLN);
        tap_code16(UK_COLN);
        tap_code16(UK_COLN);
    }
    if(state->count > 3) {
        tap_code16(UK_COLN);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(UK_COLN); break;
        case SINGLE_HOLD: register_code16(UK_SCLN); break;
        case DOUBLE_TAP: register_code16(UK_COLN); register_code16(UK_COLN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_COLN); register_code16(UK_COLN);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(UK_COLN); break;
        case SINGLE_HOLD: unregister_code16(UK_SCLN); break;
        case DOUBLE_TAP: unregister_code16(UK_COLN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_COLN); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(UK_MINS);
        tap_code16(UK_MINS);
        tap_code16(UK_MINS);
    }
    if(state->count > 3) {
        tap_code16(UK_MINS);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(UK_MINS); break;
        case SINGLE_HOLD: register_code16(UK_UNDS); break;
        case DOUBLE_TAP: register_code16(UK_PLUS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(UK_MINS); register_code16(UK_MINS);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(UK_MINS); break;
        case SINGLE_HOLD: unregister_code16(UK_UNDS); break;
        case DOUBLE_TAP: unregister_code16(UK_PLUS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(UK_MINS); break;
    }
    dance_state[21].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
};
