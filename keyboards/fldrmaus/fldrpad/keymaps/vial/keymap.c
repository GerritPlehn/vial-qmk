#include QMK_KEYBOARD_H

enum unicode_names {
    GRIN,
    SWEAT,
    JOY,
    SHRUG,
    THUMB,
    HEART,
    OK,
    SMILE
};

const uint32_t PROGMEM unicode_map[] = {
    [GRIN] = 0x1F604,  // 😄
    [SWEAT] = 0x1F605,  // 😅
    [JOY] = 0x1F602, // 😂
    [SHRUG] = 0x1F937, // 🤷‍♀️
    [THUMB] = 0x1F44D, // 👍
    [HEART] = 0x2764, // ❤
    [OK] = 0x1F44C, // 👌
    [SMILE] = 0x1F60A // 😊
};

void matrix_init_user(){
  set_unicode_input_mode(UC_LNX);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST,
        X(SHRUG), X(OK),  X(HEART),X(THUMB), 
        X(SMILE), X(GRIN),X(SWEAT),X(JOY)
    )
};

