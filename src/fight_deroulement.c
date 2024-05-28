/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** fight_deroulement
*/

#include "my.h"

void fight_timer(void)
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

void display_cinematic(GLOBAL_T *ALL, int y)
{
    HERO_X = HERO_X + 1;
    HERO_SPAWN = (sfVector2f){HERO_X, y};
    sfSprite_setPosition(HERO_SPRT, HERO_SPAWN);
    sfRenderWindow_clear(CINEMATIC_WIN, sfBlack);
    sfRenderWindow_drawSprite(CINEMATIC_WIN, BACK_FIGHT_SPRT, NULL);
    sfRenderWindow_drawSprite(CINEMATIC_WIN, ENNEMIE_SPRT, NULL);
    sfRenderWindow_drawSprite(CINEMATIC_WIN, HERO_SPRT, NULL);
    sfRenderWindow_display(CINEMATIC_WIN);
}

void finish_attack(GLOBAL_T *ALL, char *template)
{
    COIN = 2;
    fight_timer();
    HERO_X = 50;
    HERO_SPAWN = (sfVector2f){HERO_X, 500};
    sfSprite_setPosition(HERO_SPRT, HERO_SPAWN);
    template = "template/starwars1.png";
    HERO_TEXT = sfTexture_createFromFile(template, NULL);
    sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
    sfRenderWindow_drawSprite(FIGHT_WIN, HERO_SPRT, NULL);
    fight_timer();
    ENNEMIE_LIFE = ENNEMIE_LIFE - HERO_DEGATS;
    sfRenderWindow_close(CINEMATIC_WIN);
    CINEMATIC_WIN =
    sfRenderWindow_create(CINEMATIC_MODE, "Fight", sfResize | sfClose, NULL);
    red_attack(ALL);
}

void camea_attack(GLOBAL_T *ALL)
{
    char *template = NULL; int y = 590;
    while (HERO_X < 1100) {
        if (HERO_X == 60) {
            template = "template/camea2.png";
            HERO_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
        }
        if (HERO_X == 300) {
            template = "template/camea3.png";
            HERO_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
        }
        if (HERO_X == 700) {
            template = "template/camea4.png";
            HERO_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
        }
        display_cinematic(ALL, y);
    }
    finish_attack(ALL, template);
}

void sword_attack(GLOBAL_T *ALL)
{
    char *template = NULL; int y = 625;
    while (HERO_X < 1200) {
        if (HERO_X == 60) {
            template = "template/starwars2.png";
            HERO_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
        }
        if (HERO_X == 300) {
            template = "template/starwars3.png";
            HERO_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
        }
        if (HERO_X == 700) {
            template = "template/starwars4.png";
            HERO_TEXT = sfTexture_createFromFile(template, NULL);
            sfSprite_setTexture(HERO_SPRT, HERO_TEXT, sfTrue);
        }
        display_cinematic(ALL, y);
    }
    finish_attack(ALL, template);
}
