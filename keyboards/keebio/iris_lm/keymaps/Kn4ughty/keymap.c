// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
     _QWERTY,
     _LOWER,
     _RAISE,
     _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,          KC_END,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, TL_LOWR, KC_SPC,                    KC_ENT,  TL_UPPR, KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  _______, KC_UP,   _______, QK_BOOT, _______,                            _______, KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DEL,  KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PLUS, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, KC_LCBR, KC_LPRN,          KC_RPRN, KC_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_MINS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_DEL,                    KC_DEL,  _______, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RM_TOGG, _______, KC_PGUP, _______, _______,  _______,                           _______, _______, KC_MPLY, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_HOME, KC_PGDN, KC_END,  _______, KC_UNDS,                            KC_EQL,  KC_MPRV, KC_VOLU, KC_MNXT, _______, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, KC_MINS, KC_LPRN,          _______, KC_PLUS, _______, KC_VOLD, _______, _______, KC_PSCR,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, MS_BTN3, _______, _______, _______,                            QK_BOOT, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RM_TOGG, _______, MS_UP,   _______, _______,  _______,                           _______, _______, MS_WHLU, _______, RM_NEXT, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, MS_LEFT, MS_DOWN, MS_RGHT, _______, _______,                            _______, MS_BTN1, MS_WHLD, MS_BTN2, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

typedef struct key_rgb {
    uint8_t index;
    uint8_t r;
    uint8_t g;
    uint8_t b;
} KeyRGB;

KeyRGB bytes_to_key(uint8_t bytes[4]) {
    struct key_rgb key = {
        bytes[0],
        bytes[1],
        bytes[2],
        bytes[3],
    };
    return key;
}

#include <math.h>
// #define SPLIT_TRANSACTION_RPC

// #include "quantum/split_common/transactions.h"
#include "transactions.h"
// void transaction_register_rpc(int8_t transaction_id, slave_callback_t callback);

#define COLS 16

// static uint8_t AMPS[COLS] = {0, 0, 0, 0, 0, 0};
static uint8_t AMPS[COLS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void raw_hid_receive(uint8_t *data, uint8_t length) {
    for (int i =0; i < COLS; i++) {
        uint8_t amp = data[i];
        AMPS[i] = amp;
    }
}

// #define USER_SYNC_A 1

void user_sync_amps_slave_handler(uint8_t in_buflen, const void *in_data, uint8_t out_buflen, void *out_data) {
    dprintf("Slave sync success");
    if (in_buflen == COLS) {
        memcpy(AMPS, in_data, COLS);
    }
}


void housekeeping_task_user(void) {
    if (is_keyboard_master()) {
        static uint32_t last_sync = 0;
        if (timer_elapsed32(last_sync)> 100) {
            if (transaction_rpc_send(USER_SYNC_A, COLS, &AMPS)) {
                last_sync = timer_read32();
                dprint("Slave sync worked!\n");
            } else {
                dprint("Slave sync failed!\n");
            }
        }
    }
}

void keyboard_post_init_user(void) {
    // debug_enable=true;
    // debug_matrix=true;

    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(0, 0, 0);
    transaction_register_rpc(USER_SYNC_A, user_sync_amps_slave_handler);
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    // LHS of keyboard
    for (int col=0; col < COLS/2; col++) {


        int amp = AMPS[col];

        int h_max = ceil( ((float)(amp)/255) *4 )-1;

        for (int row=h_max; row >= 0; row--) {

            uint8_t r = 255*(((float)(row+1) / 4));

            uint8_t b = amp*(((float)(row+1) / 4));

            int led_col = col;
            int led_row = row;

            uint8_t led_index = g_led_config.matrix_co[3-led_row][led_col];

            rgb_matrix_set_color(led_index, r, 0, b);
        }
    }

    // If the current collumn (y) is greater than 4, we are on second half
    // Then, we need to skip one row to go past thumb keys
    // Then, we need to take the extra collumns above the 3rd, and turn them into rows.
    // This is bc the halves are arranged one on top of another

    // RHS
    int offset = 3;
    for (int col=COLS/2 + offset; col < COLS+offset; col++) {

        int amp = AMPS[col-offset];

        int h_max = ceil( ((float)(amp)/255) *4 )-1;

        for (int row=h_max; row >= 0; row--) {

            uint8_t r = 255*(((float)(row+1) / 4));

            uint8_t b = amp*(((float)(row+1) / 4));

            int led_col = col - COLS / 2;
            int led_row = row + 5;

            uint8_t led_index = g_led_config.matrix_co[led_row][led_col];

            rgb_matrix_set_color(led_index, r, 0, b);
        }
    }

    uint8_t led_index = g_led_config.matrix_co[6][5];
    rgb_matrix_set_color(led_index, AMPS[10], 0, AMPS[10]);

    return false;
}
