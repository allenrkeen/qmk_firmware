#include "kb.h"

enum custom_keycodes
{
SAS = SAFE_RANGE,
DW
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case SAS:
			if (record->event.pressed) {
				SEND_STRING("SringTest1");
			}
			break;
		case DW:
			if (record->event.pressed) {
				SEND_STRING("String_Test#2");
			}
			break;
	}
	return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		LCTL(KC_F1), LCTL(KC_F2), LCTL(KC_F3), SAS, LCTL(KC_F5), LCTL(KC_F6), LCTL(KC_F7), DW, LCTL(KC_F9), LCTL(KC_F10), KC_CALC, LCTL(LSFT(KC_M)))
};
