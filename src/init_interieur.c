/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_interieur
*/

#include "my.h"

void init_shop(GLOBAL_T *ALL)
{
    char *template = "template/interieur/shop.png";
    SHOP_TEXT = sfTexture_createFromFile(template, NULL);
    SHOP_SPRT = sfSprite_create();
    sfSprite_setTexture(SHOP_SPRT, SHOP_TEXT, sfTrue);
    SHOP_SPAWN = (sfVector2f){1500, 150};
    SHOP_SCALE = (sfVector2f){0.5, 0.5};
    sfSprite_setPosition(SHOP_SPRT, SHOP_SPAWN);
    sfSprite_setScale(SHOP_SPRT, SHOP_SCALE);
}

void init_maison(GLOBAL_T *ALL)
{
    char *template = "template/interieur/house.png";
    MAISON_TEXT = sfTexture_createFromFile(template, NULL);
    MAISON_SPRT = sfSprite_create();
    sfSprite_setTexture(MAISON_SPRT, MAISON_TEXT, sfTrue);
    MAISON_SPAWN = (sfVector2f){1100, 200};
    MAISON_SCALE = (sfVector2f){0.5, 0.5};
    sfSprite_setPosition(MAISON_SPRT, MAISON_SPAWN);
    sfSprite_setScale(MAISON_SPRT, MAISON_SCALE);
}
