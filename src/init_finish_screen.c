/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** finish_screen
*/

#include "my.h"

void init_back_win(GLOBAL_T *ALL)
{
    char *template = "template/win.png";
    BACK_WIN_TEXT = sfTexture_createFromFile(template, NULL);
    BACK_WIN_SPRT = sfSprite_create();
    sfSprite_setTexture(BACK_WIN_SPRT, BACK_WIN_TEXT, sfTrue);
    BACK_WIN_SCALE = (sfVector2f){7.5, 6};
    sfSprite_setScale(BACK_WIN_SPRT, BACK_WIN_SCALE);
}

void init_back_lose(GLOBAL_T *ALL)
{
    char *template = "template/lose.png";
    BACK_LOSE_TEXT = sfTexture_createFromFile(template, NULL);
    BACK_LOSE_SPRT = sfSprite_create();
    sfSprite_setTexture(BACK_LOSE_SPRT, BACK_LOSE_TEXT, sfTrue);
    BACK_LOSE_SCALE = (sfVector2f){7.5, 6};
    sfSprite_setScale(BACK_LOSE_SPRT, BACK_LOSE_SCALE);
}

void init_window_win(GLOBAL_T *ALL)
{
    WIN_MODE.bitsPerPixel = 64;
    WIN_MODE.height = 1080;
    WIN_MODE.width = 1920;
    WIN_WIN =
    sfRenderWindow_create(WIN_MODE, "Win", sfResize | sfClose, NULL);
}

void init_window_lose(GLOBAL_T *ALL)
{
    LOSE_MODE.bitsPerPixel = 64;
    LOSE_MODE.height = 1080;
    LOSE_MODE.width = 1920;
    LOSE_WIN =
    sfRenderWindow_create(LOSE_MODE, "Lose", sfResize | sfClose, NULL);
}
