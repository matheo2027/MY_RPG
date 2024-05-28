/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** burn_tree
*/

#include "my.h"

void timer_handling(GLOBAL_T *ALL)
{
    if (BURN_TIMER > 5)
        BURN_TIMER = 0;
    else {
        BURN_TIMER = BURN_TIMER + 1;
    }
    sfSprite_setTextureRect(BURN_SPRT, BURN_RECT);
}

void do_modif_burn_tree(GLOBAL_T *ALL)
{
    if (BURN_TIMER == 4) {
        BURN_RECT.left = 0;
        BURN_RECT.top = 64;
        BURN_RECT.width = 32;
        BURN_RECT.height = 32;
    }
    if (BURN_TIMER == 5) {
        BURN_RECT.left = 32;
        BURN_RECT.top = 64;
        BURN_RECT.width = 64;
        BURN_RECT.height = 32;
    }
    if (BURN_TIMER == 0) {
        BURN_RECT.left = 0;
        BURN_RECT.top = 0;
        BURN_RECT.width = 32;
        BURN_RECT.height = 32;
    }
}

void modif_burn_tree(GLOBAL_T *ALL)
{
    if (BURN_TIMER == 1) {
        BURN_RECT.left = 32;
        BURN_RECT.top = 0;
        BURN_RECT.width = 64;
        BURN_RECT.height = 32;
    }
    if (BURN_TIMER == 2) {
        BURN_RECT.left = 0;
        BURN_RECT.top = 32;
        BURN_RECT.width = 32;
        BURN_RECT.height = 32;
    }
    if (BURN_TIMER == 3) {
        BURN_RECT.left = 32;
        BURN_RECT.top = 32;
        BURN_RECT.width = 32;
        BURN_RECT.height = 32;
    }
    do_modif_burn_tree;
    timer_handling(ALL);
}

void init_burn_tree(GLOBAL_T *ALL)
{
    BURN_TIMER = 0;
    BURN_TEXT = sfTexture_createFromFile("template/burntree.png", NULL);
    BURN_SPRT = sfSprite_create();
    BURN_SPAWN = (sfVector2f){662, 52};
    BURN_RECT.top = 0;
    BURN_RECT.left = 0;
    BURN_RECT.width = 32;
    BURN_RECT.height = 32;
    sfSprite_setTexture(BURN_SPRT, BURN_TEXT, sfTrue);
    sfSprite_setTextureRect(BURN_SPRT, BURN_RECT);
    sfSprite_setPosition(BURN_SPRT, BURN_SPAWN);
}
