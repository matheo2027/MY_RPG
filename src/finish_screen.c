/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** finish_screen
*/

#include "my.h"

void close_win_screen(GLOBAL_T *ALL)
{
    if (WIN_EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(WIN_WIN);
    }
}

void display_win_screen(GLOBAL_T *ALL)
{
    while (sfRenderWindow_isOpen(WIN_WIN)) {
        sfRenderWindow_clear(WIN_WIN, sfBlack);
        sfRenderWindow_drawSprite(WIN_WIN, BACK_WIN_SPRT, NULL);
        sfRenderWindow_display(WIN_WIN);
        while (sfRenderWindow_pollEvent(WIN_WIN, &WIN_EVENT)) {
            close_win_screen(ALL);
        }
    }
    sfRenderWindow_destroy(WIN_WIN);
}

void close_lose_screen(GLOBAL_T *ALL)
{
    if (LOSE_EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(LOSE_WIN);
    }
}

void display_lose_screen(GLOBAL_T *ALL)
{
    while (sfRenderWindow_isOpen(LOSE_WIN)) {
        sfRenderWindow_clear(LOSE_WIN, sfBlack);
        sfRenderWindow_drawSprite(LOSE_WIN, BACK_LOSE_SPRT, NULL);
        sfRenderWindow_display(LOSE_WIN);
        while (sfRenderWindow_pollEvent(LOSE_WIN, &LOSE_EVENT)) {
            close_lose_screen(ALL);
        }
    }
    sfRenderWindow_destroy(LOSE_WIN);
}
