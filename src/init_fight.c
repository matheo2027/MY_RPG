/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** init_fight
*/

#include "my.h"

void init_ennemie(GLOBAL_T *ALL)
{
    ENNEMIE_LIFE = 5;
    ENNEMIE_X = 1300;
    char *template = "template/sword1.png";
    ENNEMIE_TEXT = sfTexture_createFromFile(template, NULL);
    ENNEMIE_SPRT = sfSprite_create();
    ENNEMIE_SPAWN = (sfVector2f){ENNEMIE_X, 536};
    ENNEMIE_SCALE = (sfVector2f){6, 6};
    sfSprite_setTexture(ENNEMIE_SPRT, ENNEMIE_TEXT, sfTrue);
    sfSprite_setPosition(ENNEMIE_SPRT, ENNEMIE_SPAWN);
    sfSprite_setScale(ENNEMIE_SPRT, ENNEMIE_SCALE);
}

void init_hero(GLOBAL_T *ALL)
{
    HERO_DEGATS = 1;
    HERO_LIFE = 1;
    HERO_X = 50;
    char *template = "template/starwars1.png";
    HERO_TEXT = sfTexture_createFromFile(template, NULL);
    HERO_SPRT = sfSprite_create();
    HERO_SPAWN = (sfVector2f){HERO_X, 500};
    HERO_SCALE = (sfVector2f){18, 18};
    sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
    sfSprite_setPosition(HERO_SPRT, HERO_SPAWN);
    sfSprite_setScale(HERO_SPRT, HERO_SCALE);
}

void init_fight_background(GLOBAL_T *ALL)
{
    char *template = "template/backfight.png";
    BACK_FIGHT_TEXT = sfTexture_createFromFile(template, NULL);
    BACK_FIGHT_SPRT = sfSprite_create();
    sfSprite_setTexture(BACK_FIGHT_SPRT, BACK_FIGHT_TEXT, sfTrue);
    BACK_FIGHT_SCALE = (sfVector2f){2.4, 2.35};
    sfSprite_setScale(BACK_FIGHT_SPRT, BACK_FIGHT_SCALE);
}

void init_window_cinematic(GLOBAL_T *ALL)
{
    CINEMATIC_MODE.bitsPerPixel = 64;
    CINEMATIC_MODE.height = 1080;
    CINEMATIC_MODE.width = 1920;
}

void init_window_fight(GLOBAL_T *ALL)
{
    FIGHT_MODE.bitsPerPixel = 64;
    FIGHT_MODE.height = 1080;
    FIGHT_MODE.width = 1920;
}
