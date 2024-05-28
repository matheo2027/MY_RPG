/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_menu
*/

#include "my.h"

void init_back_menu(GLOBAL_T *ALL)
{
    char *template = "template/menu/fond_menu.png";
    BACK_MENU_TEXT = sfTexture_createFromFile(template, NULL);
    BACK_MENU_SPRT = sfSprite_create();
    sfSprite_setTexture(BACK_MENU_SPRT, BACK_MENU_TEXT, sfTrue);
    BACK_MENU_SCALE = (sfVector2f){4, 4};
    sfSprite_setScale(BACK_MENU_SPRT, BACK_MENU_SCALE);
}

void init_eclaboussures(GLOBAL_T *ALL)
{
    char *template = "template/menu/effet.png";
    ECLABS_TEXT = sfTexture_createFromFile(template, NULL);
    ECLABS_SPRT = sfSprite_create();
    sfSprite_setTexture(ECLABS_SPRT, ECLABS_TEXT, sfTrue);
    ECLABS_SPAWN = (sfVector2f){1050, 400};
    ECLABS_SCALE = (sfVector2f){1, 1};
    sfSprite_setPosition(ECLABS_SPRT, ECLABS_SPAWN);
    sfSprite_setScale(ECLABS_SPRT, ECLABS_SCALE);
}

void init_eclaboussure(GLOBAL_T *ALL)
{
    ECLAB_TEXT = sfTexture_createFromFile("template/menu/effet.png", NULL);
    ECLAB_SPRT = sfSprite_create();
    sfSprite_setTexture(ECLAB_SPRT, ECLAB_TEXT, sfTrue);
    ECLAB_SCALE = (sfVector2f){1, 1};
    sfSprite_setScale(ECLAB_SPRT, ECLAB_SCALE);
}

void init_menu(GLOBAL_T *ALL)
{
    MENU_TEXT = sfTexture_createFromFile("template/menu/menu.png", NULL);
    MENU_SPRT = sfSprite_create();
    MENU_SPAWN = (sfVector2f){685, 180};
    MENU_SCALE = (sfVector2f){1, 1};
    sfSprite_setTexture(MENU_SPRT, MENU_TEXT, sfTrue);
    sfSprite_setPosition(MENU_SPRT, MENU_SPAWN);
    sfSprite_setScale(MENU_SPRT, MENU_SCALE);
}

void init_window_menu(GLOBAL_T *ALL)
{
    MENU_MODE.bitsPerPixel = 64;
    MENU_MODE.height = 1080;
    MENU_MODE.width = 1920;
    MENU_WIN =
    sfRenderWindow_create(MENU_MODE, "Menu", sfResize | sfClose, NULL);
}
