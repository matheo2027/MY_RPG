/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** shop_button_etat
*/

#include "my.h"

void condition_yellow(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_YELLOW == 1 && COIN <= 0)
        return;
    if (ETAT_BUTTON_YELLOW == 1) {
        HERO_DEGATS = HERO_DEGATS + 1;
        HERO_LIFE = HERO_LIFE + 1;
        SHOP_COIN = SHOP_COIN - 1;
    }
    if (ETAT_BUTTON_YELLOW == 1)
        COIN = COIN - 1;
    if (ETAT_BUTTON_YELLOW < 3)
        ETAT_BUTTON_YELLOW = ETAT_BUTTON_YELLOW + 1;
    else {
        ETAT_BUTTON_BLUE = 3;
        ETAT_BUTTON_YELLOW = 2;
    }
}

void condition_rainbow(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_RAINBOW == 1 && COIN <= 1)
            return;
    if (ETAT_BUTTON_RAINBOW == 1) {
        HERO_DEGATS = HERO_DEGATS + 2;
        HERO_LIFE = HERO_LIFE + 2;
        SHOP_COIN = SHOP_COIN - 2;
    }
    if (ETAT_BUTTON_RAINBOW == 1)
        COIN = COIN - 2;
    if (ETAT_BUTTON_RAINBOW < 3)
        ETAT_BUTTON_RAINBOW = ETAT_BUTTON_RAINBOW + 1;
    else {
        ETAT_BUTTON_BLUE = 3;
        ETAT_BUTTON_RAINBOW = 2;
    }
}

void payer(GLOBAL_T *ALL)
{
    payer_blue(ALL);
    payer_black(ALL);
    payer_yellow(ALL);
    payer_rainbow(ALL);
}

void modif_etat_button(GLOBAL_T *ALL)
{
    modif_etat_button_blue(ALL);
    modif_etat_button_black(ALL);
    modif_etat_button_yellow(ALL);
    modif_etat_button_purple(ALL);
    modif_etat_button_rainbow(ALL);
}

void init_etat_button(GLOBAL_T *ALL)
{
    ETAT_BUTTON_BLUE = 3;
    ETAT_BUTTON_BLACK = 1;
    ETAT_BUTTON_YELLOW = 1;
    ETAT_BUTTON_PURPLE = 1;
    ETAT_BUTTON_RAINBOW = 1;
}
