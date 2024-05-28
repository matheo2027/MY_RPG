/*
** EPITECH PROJECT, 2022
** my_radar
** File description:
** My_radar
*/

#include "my.h"

void detect_red(GLOBAL_T *ALL)
{
    if (X >= RED_X - 15 && X <= RED_X + 10 &&
    Y >= RED_Y - 40 && Y <= RED_Y + 40) {
        sfRenderWindow_close(WIN);
        display_fight(ALL);
    }
}

void talk_png(GLOBAL_T *ALL)
{
    if (X > 250 && X < 280 && Y > 1650 && Y < 1750) {
        sfRenderWindow_drawSprite(WIN, BUTTON_E_SHOP_SPRT, NULL);
        if (EVENT.key.code == sfKeyE) {
            sfRenderWindow_close(WIN);
            display_shop(ALL);
        }
    }
}

void timer(void)
{
    sfClock* clock;
    sfTime time;
    float seconds;
    clock = sfClock_create();
    int a = 0;
    while (a < 1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 0.05) {
            a = 1;
            sfClock_restart(clock);
        }
    }
}

void analyse_events(GLOBAL_T *ALL)
{
    if (EVENT.type == sfEvtClosed)
        sfRenderWindow_close(WIN);
    if (EVENT.key.code == sfKeyLeft)
        sfView_rotate(VIEW, 1.0f);
    if (EVENT.key.code == sfKeyRight)
        sfView_rotate(VIEW, -1.0f);
    if (EVENT.key.code == sfKeyUp && ZOOM > 2)
        ZOOM = ZOOM - 0.5;
    if (EVENT.key.code == sfKeyDown && ZOOM < 5)
        ZOOM = ZOOM + 0.5;
    if (EVENT.key.code == sfKeyH)
        display_h(ALL);
    detect_red(ALL);
    move_slime(ALL);
    SLIME_SPAWN = (sfVector2f){Y, X};
    sfSprite_setPosition(SLIME_SPRT, SLIME_SPAWN);
    sfSprite_setTexture(SLIME_SPRT, SLIME_TEXT, sfTrue);
}
