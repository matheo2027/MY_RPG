/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** init_inventaire
*/

#include "my.h"

void display_do_sprite(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(WIN, GRASS_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, BACK_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, RED_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, MAISON_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, SHOP_SPRT, NULL);
}

void init_inventaire(GLOBAL_T *ALL)
{
    char *template = "template/coininventory.png";
    INVENTAIRE_TEXT = sfTexture_createFromFile(template, NULL);
    INVENTAIRE_SPRT = sfSprite_create();
    INVENTAIRE_SPAWN = (sfVector2f){Y, X};
    INVENTAIRE_SCALE = (sfVector2f){0.3, 0.3};
    sfSprite_setTexture(INVENTAIRE_SPRT, INVENTAIRE_TEXT, sfTrue);
    sfSprite_setPosition(INVENTAIRE_SPRT, INVENTAIRE_SPAWN);
    sfSprite_setScale(INVENTAIRE_SPRT, INVENTAIRE_SCALE);
}
