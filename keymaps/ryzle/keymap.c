#include QMK_KEYBOARD_H

// Left-hand home row mods
#define HOME_R LGUI_T(KC_R)
#define HOME_S LALT_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_H LCTL_T(KC_H)


// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_A RALT_T(KC_A)
#define HOME_I RGUI_T(KC_I)

// Shortened versions
#define FUNC_ESC LT(_FUNC, KC_ESC)

enum layers {
	_APT = 0,
	_NUM,
	_SYM,
	_NAV,
	_FUNC	
};

enum combos {
  SID_STUDENT_ID,
  EMA_EMAIL,
  MUH_NAME,
  LUOY_DELETE_LINE,
  SWPY_COMPILE,
  RYZ_EMA,
  CDQ_ENT,
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM sid_combo[]  = {HOME_S, HOME_I, KC_D, COMBO_END};
const uint16_t PROGMEM ema_combo[]  = {HOME_E, KC_M, HOME_A, COMBO_END};
const uint16_t PROGMEM muh_combo[]  = {KC_M, KC_U, HOME_H, COMBO_END};
const uint16_t PROGMEM luoy_combo[]   = {KC_L, KC_O, KC_U, KC_Y, COMBO_END};
const uint16_t PROGMEM swpy_combo[]  = {HOME_S, KC_W, KC_P, KC_Y, COMBO_END};
const uint16_t PROGMEM ryz_combo[] = {HOME_R, KC_Y, KC_Z, COMBO_END};
const uint16_t PROGMEM cdq_combo[] = {KC_COMM, KC_DOT, KC_QUOT, COMBO_END};

combo_t key_combos[] = {
  [SID_STUDENT_ID] = COMBO_ACTION(sid_combo),
  [EMA_EMAIL] = COMBO_ACTION(ema_combo),
  [MUH_NAME] = COMBO_ACTION(muh_combo),
  [LUOY_DELETE_LINE] = COMBO_ACTION(luoy_combo),
  [SWPY_COMPILE] = COMBO_ACTION(swpy_combo),
  [RYZ_EMA] = COMBO_ACTION(ryz_combo),
  [CDQ_ENT] = COMBO_ACTION(cdq_combo)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_APT] = LAYOUT_split_3x5_3(     
		KC_W,		KC_G,    	KC_D,    	KC_F,    	KC_B,        	KC_Q, 	  	KC_L,    	KC_U,    	KC_O,    	KC_Y, 
		HOME_R,    	HOME_S,    	HOME_T,    	HOME_H,    	KC_K,        	KC_J,    	HOME_N,    	HOME_E,  	HOME_A,    	HOME_I,
		KC_X,    	KC_C,    	KC_M,    	KC_P,    	KC_V,        	KC_Z,    	KC_COMM, 	KC_DOT,  	KC_QUOT,  	KC_SLSH,
		            			MO(_NAV),  KC_SPC,  	MO(_NUM),   	FUNC_ESC,  	KC_BSPC, 	MO(_SYM)),
	[_NUM] = LAYOUT_split_3x5_3(
		XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX,     	XXXXXXX, 	KC_1,    	KC_2,    	KC_3,   	XXXXXXX, 
		KC_LGUI,  	KC_LALT,  	KC_LSFT,  	KC_LCTL,  	XXXXXXX, 		KC_BSPC, 	KC_4,    	KC_5,    	KC_6,   	KC_0,
		XXXXXXX, 	XXXXXXX,	XXXXXXX,	XXXXXXX,	XXXXXXX,  		KC_TAB, 	KC_7,    	KC_8,    	KC_9,   	XXXXXXX,
		            			XXXXXXX,	KC_SPC,  	XXXXXXX,   		KC_ESC,  	KC_BSPC,    XXXXXXX),
	[_SYM] = LAYOUT_split_3x5_3(
		XXXXXXX, 	KC_AT, 		KC_DLR, 	KC_UNDS, 	XXXXXXX,     	XXXXXXX,  	KC_MINS, 	KC_EXLM, 	KC_COLN,   	XXXXXXX, 
		KC_ASTR,    KC_LCBR,   	KC_LPRN,   	KC_LBRC,    KC_AMPR,        KC_TILD,    KC_SCLN,    KC_BSLS,    KC_DLR,   	KC_CIRC,
		XXXXXXX, 	KC_RCBR, 	KC_RPRN, 	KC_RBRC, 	XXXXXXX,     	XXXXXXX,   	KC_PLUS,  	KC_AMPR, 	KC_HASH, 	XXXXXXX,
		            			XXXXXXX,	KC_SPC,  	XXXXXXX,   		KC_ESC,		KC_BSPC,	XXXXXXX),
	[_NAV] = LAYOUT_split_3x5_3(
		XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX,     	XXXXXXX, 	KC_HOME,   	KC_UP,   	KC_END,   	XXXXXXX,
		KC_LGUI, 	KC_LALT, 	KC_LSFT, 	KC_LCTL, 	XXXXXXX,     	XXXXXXX, 	KC_LEFT,   	KC_DOWN,   	KC_RIGHT,   XXXXXXX,
		XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX, 	XXXXXXX,     	XXXXXXX, 	KC_PGUP,   	XXXXXXX,  	KC_PGDN,  	XXXXXXX,
		            			XXXXXXX,	KC_SPC,  	XXXXXXX,   		KC_ESC, 	KC_BSPC, 	XXXXXXX),
	[_FUNC]= LAYOUT_split_3x5_3(
		RESET, 		KC_BTN2, 	KC_MS_U, 	KC_BTN1, 	XXXXXXX,     	XXXXXXX, 	KC_F1,   	KC_F2,   	KC_F3,   	KC_F4,
		XXXXXXX, 	KC_MS_L, 	KC_MS_D, 	KC_MS_R,    XXXXXXX, 		XXXXXXX, 	KC_F5,   	KC_F6,   	KC_F7,   	KC_F8,
		MOD_LGUI, 	MOD_LALT, 	MOD_LSFT, 	MOD_LCTL, 	XXXXXXX,     	XXXXXXX, 	KC_F9,   	KC_F10,  	KC_F11,  	KC_F12,
		            			XXXXXXX,	KC_SPC,  	XXXXXXX,   		KC_ESC,		KC_BSPC, 	XXXXXXX),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case SID_STUDENT_ID:
      if (pressed) {
        SEND_STRING("");
      }
      break;
    case EMA_EMAIL:
      if (pressed) {
        SEND_STRING("amrrzk02@gmail.com");
      }
      break;
    case MUH_NAME:
      if (pressed) {
        SEND_STRING("Muhammad Amir bin Abdul Razak");
      }
      break;
    case RYZ_EMA:
      if (pressed) {
        SEND_STRING("ryzlegg@gmail.com");
      }
      break;
    case LUOY_DELETE_LINE:
      if (pressed) {
        tap_code16(KC_END);
        tap_code16(S(KC_HOME));
        tap_code16(KC_BSPC);
      }
      break;
    case SWPY_COMPILE:
        if (pressed) {
        SEND_STRING("qmk compile -kb sweepykb/sweepy -km ryzle");
      }
      break;
	case CDQ_ENT:
		if(pressed) {
			tap_code16(KC_ENT);
		}
  }
}