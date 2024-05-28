/*
** EPITECH PROJECT, 2022
** my_radar
** File description:
** Initialisation des structures
*/

#include "my.h"

void init_window(GLOBAL_T *ALL)
{
    MODE.bitsPerPixel = 64;
    MODE.height = 1080;
    MODE.width = 1920;
    WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    VIEW = sfView_createFromRect((sfFloatRect){0.0f, 0.0f, 885.0f, 400.0f});
    ZOOM = 3;
}

void init_slime(GLOBAL_T *ALL)
{
    X = 140;
    Y = 512;
    VITESSE = 1;
    HAUT = "template/enemies/slime blue/slime_blue_idle_up.gif";
    BAS = "template/enemies/slime blue/slime_blue_idle_down.gif";;
    DROITE = "template/enemies/slime blue/slime_blue_idle_right.gif";
    GAUCHE = "template/enemies/slime blue/slime_blue_idle_left.gif";
    SLIME_TEXT = sfTexture_createFromFile(BAS, NULL);
    SLIME_SPRT = sfSprite_create();
    SLIME_SPAWN = (sfVector2f){Y, X};
    SLIME_SCALE = (sfVector2f){1.5, 1.5};
    sfSprite_setTexture(SLIME_SPRT, SLIME_TEXT, sfTrue);
    sfSprite_setPosition(SLIME_SPRT, SLIME_SPAWN);
    sfSprite_setScale(SLIME_SPRT, SLIME_SCALE);
}
