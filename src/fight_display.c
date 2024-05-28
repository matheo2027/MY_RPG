/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** fight_display
*/

#include "my.h"

void display_red_attributs(GLOBAL_T *ALL)
{
    int number_degats = 1;
    char degats_txt[2];
    sprintf(degats_txt, "%d", number_degats);
    sfText_setString(PRINT_NB_RED_DEGATS, degats_txt);

    sfRenderWindow_drawText(FIGHT_WIN, PRINT_RED_DEGATS, NULL);
    sfRenderWindow_drawText(FIGHT_WIN, PRINT_NB_RED_DEGATS, NULL);

    int number_vie = ENNEMIE_LIFE;
    char vie_txt[2];
    sprintf(vie_txt, "%d", number_vie);
    sfText_setString(PRINT_NB_RED_VIE, vie_txt);

    sfRenderWindow_drawText(FIGHT_WIN, PRINT_RED_VIE, NULL);
    sfRenderWindow_drawText(FIGHT_WIN, PRINT_NB_RED_VIE, NULL);
}

void display_attributs(GLOBAL_T *ALL)
{
    int number_degats = HERO_DEGATS;
    char degats_txt[2];
    sprintf(degats_txt, "%d", number_degats);
    sfText_setString(PRINT_NB_DEGATS, degats_txt);

    sfRenderWindow_drawText(FIGHT_WIN, PRINT_DEGATS, NULL);
    sfRenderWindow_drawText(FIGHT_WIN, PRINT_NB_DEGATS, NULL);

    int number_vie = HERO_LIFE;
    char vie_txt[2];
    sprintf(vie_txt, "%d", number_vie);
    sfText_setString(PRINT_NB_VIE, vie_txt);

    sfRenderWindow_drawText(FIGHT_WIN, PRINT_VIE, NULL);
    sfRenderWindow_drawText(FIGHT_WIN, PRINT_NB_VIE, NULL);
    display_red_attributs(ALL);
}

void display_fight_sprite(GLOBAL_T *ALL)
{
    sfRenderWindow_drawSprite(FIGHT_WIN, BACK_FIGHT_SPRT, NULL);
    sfRenderWindow_drawSprite(FIGHT_WIN, HERO_SPRT, NULL);
    sfRenderWindow_drawSprite(FIGHT_WIN, ENNEMIE_SPRT, NULL);
    sfRenderWindow_drawRectangleShape(FIGHT_WIN, CAMEA_BUTTON, NULL);
    sfRenderWindow_drawRectangleShape(FIGHT_WIN, SWORD_BUTTON, NULL);
    display_attributs(ALL);
}

void display_end(GLOBAL_T *ALL)
{
    if (ENNEMIE_LIFE < 1) {
        LOSE_WIN =
        sfRenderWindow_create(LOSE_MODE, "LOSE", sfResize | sfClose, NULL);
        BACK_LOSE_TEXT = sfTexture_createFromFile("template/win.png", NULL);
        sfSprite_setTexture(BACK_LOSE_SPRT, BACK_LOSE_TEXT, sfTrue);
        display_lose_screen(ALL);
    }
    if (ENNEMIE_LIFE > 0) {
        LOSE_WIN =
        sfRenderWindow_create(LOSE_MODE, "Lose", sfResize | sfClose, NULL);
        display_lose_screen(ALL);
    }
}

void display_fight(GLOBAL_T *ALL)
{
    sfMusic_stop(MUSIC_PARTIE); sfMusic_play(MUSIC_FIGHT);
    FIGHT_WIN =
    sfRenderWindow_create(FIGHT_MODE, "Fight", sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(FIGHT_WIN) && HERO_LIFE > 0
    && ENNEMIE_LIFE > 0) {
        COIN = 0;
        MUSIC_ELAPSEDTIME_FIGHT = sfClock_getElapsedTime(MUSIC_CLOCK_FIGHT);
        sfRenderWindow_clear(FIGHT_WIN, sfBlack);
        display_fight_sprite(ALL);
        sfRenderWindow_display(FIGHT_WIN);
        cours_music_fight(ALL);
        timer();
        while (sfRenderWindow_pollEvent(FIGHT_WIN, &FIGHT_EVENT))
            action_fight(ALL);
    }
    if (COIN == -5)
        return;
    display_end(ALL);
}
