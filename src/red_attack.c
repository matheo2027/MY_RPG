/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** red_attack
*/

#include "my.h"

void red_timer(void)
{
    sfClock* clock;
    sfTime time;
    float seconds;
    clock = sfClock_create();
    int a = 0;
    while (a < 1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > 1.00) {
            a = 1;
            sfClock_restart(clock);
        }
    }
}

void display_red_cinematic(GLOBAL_T *ALL, int y)
{
    ENNEMIE_X = ENNEMIE_X - 1;
    ENNEMIE_SPAWN = (sfVector2f){ENNEMIE_X, y};
    sfSprite_setPosition(ENNEMIE_SPRT, ENNEMIE_SPAWN);
    sfRenderWindow_clear(CINEMATIC_WIN, sfBlack);
    sfRenderWindow_drawSprite(CINEMATIC_WIN, BACK_FIGHT_SPRT, NULL);
    sfRenderWindow_drawSprite(CINEMATIC_WIN, HERO_SPRT, NULL);
    sfRenderWindow_drawSprite(CINEMATIC_WIN, ENNEMIE_SPRT, NULL);
    sfRenderWindow_display(CINEMATIC_WIN);
}

void finish_red_attack(GLOBAL_T *ALL, char *template)
{
    COIN = 2;
    red_timer();
    ENNEMIE_X = 1300;
    ENNEMIE_SPAWN = (sfVector2f){ENNEMIE_X, 536};
    sfSprite_setPosition(ENNEMIE_SPRT, ENNEMIE_SPAWN);
    template = "template/sword1.png";
    ENNEMIE_TEXT = sfTexture_createFromFile(template, NULL);
    sfSprite_setTexture(ENNEMIE_SPRT, ENNEMIE_TEXT, sfTrue);
    sfRenderWindow_drawSprite(FIGHT_WIN, ENNEMIE_SPRT, NULL);
    HERO_LIFE = HERO_LIFE - 1;
    sfRenderWindow_close(CINEMATIC_WIN);
    FIGHT_WIN =
    sfRenderWindow_create(FIGHT_MODE, "Fight", sfResize | sfClose, NULL);
}

void red_attack(GLOBAL_T *ALL)
{
    char *template = NULL; int y = 520;
    while (ENNEMIE_X > 200) {
        if (ENNEMIE_X == 1100) {
            template = "template/sword2.png";
            ENNEMIE_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(ENNEMIE_SPRT, ENNEMIE_TEXT, sfTrue);
        }
        if (ENNEMIE_X == 800) {
            template = "template/sword3.png";
            ENNEMIE_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(ENNEMIE_SPRT, ENNEMIE_TEXT, sfTrue);
        }
        if (ENNEMIE_X == 500) {
            template = "template/sword4.png";
            ENNEMIE_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(ENNEMIE_SPRT, ENNEMIE_TEXT, sfTrue);
        }
        display_red_cinematic(ALL, y);
    }
    finish_red_attack(ALL, template);
}
