/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** button_e
*/

#include "my.h"

void init_button_e_shop(GLOBAL_T *ALL)
{
    BUTTON_E_SHOP_SPRT = sfSprite_create();
    sfSprite_setTexture(BUTTON_E_SHOP_SPRT, BUTTON_E_TEXT, sfTrue);
    BUTTON_E_SHOP_SPAWN = (sfVector2f){1700, 260};
    sfSprite_setPosition(BUTTON_E_SHOP_SPRT, BUTTON_E_SHOP_SPAWN);
    sfSprite_setScale(BUTTON_E_SHOP_SPRT, BUTTON_E_SCALE);
}

void init_button_e(GLOBAL_T *ALL)
{
    char *template = "template/button_e.png";
    BUTTON_E_TEXT = sfTexture_createFromFile(template, NULL);
    BUTTON_E_SCALE = (sfVector2f){0.15f, 0.15f};
    init_button_e_shop(ALL);
}
