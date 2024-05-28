/*
** EPITECH PROJECT, 2023
** projet_rpg
** File description:
** init_map
*/

#include "my.h"

void init_perspective(GLOBAL_T *ALL)
{
    char *map = "template/isomyrpgmap.png";
    PERSPECTIVE_TEXT = sfTexture_createFromFile(map, NULL);
    PERSPECTIVE_SPRT = sfSprite_create();
    sfSprite_setTexture(PERSPECTIVE_SPRT, PERSPECTIVE_TEXT, sfTrue);
    PERSPECTIVE_SCALE = (sfVector2f){1, 1};
    sfSprite_setScale(PERSPECTIVE_SPRT, PERSPECTIVE_SCALE);
}

void init_map(GLOBAL_T *ALL)
{
    BACK_TEXT = sfTexture_createFromFile("template/MyRPG map (1).png", NULL);
    BACK_SPRT = sfSprite_create();
    sfSprite_setTexture(BACK_SPRT, BACK_TEXT, sfTrue);
    BACK_SCALE = (sfVector2f){1, 1};
    sfSprite_setScale(BACK_SPRT, BACK_SCALE);
}

void init_grass(GLOBAL_T *ALL)
{
    GRASS_TEXT = sfTexture_createFromFile("template/grass.png", NULL);
    GRASS_SPRT = sfSprite_create();
    sfSprite_setTexture(GRASS_SPRT, GRASS_TEXT, sfTrue);
    GRASS_SCALE = (sfVector2f){0.6, 0.27};
    sfSprite_setScale(GRASS_SPRT, GRASS_SCALE);
}
