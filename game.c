// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Oct 2019
// This program is the print smiley face program for the GameBoy

#include <stdio.h>
#include <gb/gb.h>
#include "./smiler.h"

void main() {
    set_sprite_data(0, 2, smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 87);
    SHOW_SPRITES;

    while (1) {
        switch (joypad()) {
            case J_LEFT:
            // scrool_sprite(sprite#, x, y)
                scroll_sprite(0, -5, 0);
                break;
            case J_RIGHT:
                scroll_sprite(0, 5, 0);
                break;
            case J_UP:
                scroll_sprite(0, 0, -5);
                break;
            case J_DOWN:
                scroll_sprite(0, 0, 5);
                break;
        }
        delay(100);
    }
}
