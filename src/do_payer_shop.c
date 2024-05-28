/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** do_payer_shop
*/

#include "my.h"

void do_payer_blue(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_BLUE == 3) {
        if (ETAT_BUTTON_BLACK == 3)
            ETAT_BUTTON_BLACK = 2;
        if (ETAT_BUTTON_YELLOW == 3)
            ETAT_BUTTON_YELLOW = 2;
        if (ETAT_BUTTON_PURPLE == 3)
            ETAT_BUTTON_PURPLE = 2;
        if (ETAT_BUTTON_RAINBOW == 3)
            ETAT_BUTTON_RAINBOW = 2;
    }
}

void do_payer_black(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_BLACK == 3) {
        if (ETAT_BUTTON_BLUE == 3)
            ETAT_BUTTON_BLUE = 2;
        if (ETAT_BUTTON_YELLOW == 3)
            ETAT_BUTTON_YELLOW = 2;
        if (ETAT_BUTTON_PURPLE == 3)
            ETAT_BUTTON_PURPLE = 2;
        if (ETAT_BUTTON_RAINBOW == 3)
            ETAT_BUTTON_RAINBOW = 2;
    }
}

void do_payer_yellow(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_YELLOW == 3) {
        if (ETAT_BUTTON_BLUE == 3)
            ETAT_BUTTON_BLUE = 2;
        if (ETAT_BUTTON_BLACK == 3)
            ETAT_BUTTON_BLACK = 2;
        if (ETAT_BUTTON_PURPLE == 3)
            ETAT_BUTTON_PURPLE = 2;
        if (ETAT_BUTTON_RAINBOW == 3)
            ETAT_BUTTON_RAINBOW = 2;
    }
}

void do_payer_rainbow(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_RAINBOW == 3) {
        if (ETAT_BUTTON_BLUE == 3)
            ETAT_BUTTON_BLUE = 2;
        if (ETAT_BUTTON_YELLOW == 3)
            ETAT_BUTTON_YELLOW = 2;
        if (ETAT_BUTTON_PURPLE == 3)
            ETAT_BUTTON_PURPLE = 2;
        if (ETAT_BUTTON_BLACK == 3)
            ETAT_BUTTON_BLACK = 2;
    }
}
