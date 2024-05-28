/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** fight_action
*/

#include "my.h"

void do_init_ennemie_fight_ecriture(GLOBAL_T *ALL)
{
    int nb_vie = ENNEMIE_LIFE;
    char nb_vie_txt[2];
    sprintf(nb_vie_txt, "%d", nb_vie);
    PRINT_RED_VIE = sfText_create();
    sfText_setString(PRINT_RED_VIE, "Vie: ");
    sfText_setFont(PRINT_RED_VIE, POLICE);
    sfText_setCharacterSize(PRINT_RED_VIE, 50);
    sfText_setPosition(PRINT_RED_VIE, (sfVector2f){1420.f, 200.f});

    PRINT_NB_RED_VIE = sfText_create();
    sfText_setString(PRINT_NB_RED_VIE, nb_vie_txt);
    sfText_setFont(PRINT_NB_RED_VIE, POLICE);
    sfText_setCharacterSize(PRINT_NB_RED_VIE, 50);
    sfText_setPosition(PRINT_NB_RED_VIE, (sfVector2f){1660.f, 200.f});
}

void init_ennemie_fight_ecriture(GLOBAL_T *ALL)
{
    int nb_attaque = 1;
    char nb_attaque_txt[2];
    sprintf(nb_attaque_txt, "%d", nb_attaque);
    PRINT_RED_DEGATS = sfText_create();
    sfText_setString(PRINT_RED_DEGATS, "Degat: ");
    sfText_setFont(PRINT_RED_DEGATS, POLICE);
    sfText_setCharacterSize(PRINT_RED_DEGATS, 50);
    sfText_setPosition(PRINT_RED_DEGATS, (sfVector2f){1420.f, 250.f});

    PRINT_NB_RED_DEGATS = sfText_create();
    sfText_setString(PRINT_NB_RED_DEGATS, nb_attaque_txt);
    sfText_setFont(PRINT_NB_RED_DEGATS, POLICE);
    sfText_setCharacterSize(PRINT_NB_RED_DEGATS, 50);
    sfText_setPosition(PRINT_NB_RED_DEGATS, (sfVector2f){1660.f, 250.f});
    do_init_ennemie_fight_ecriture(ALL);
}

void do_action_fight(GLOBAL_T *ALL, sfVector2f mousePosition)
{
    if ((mousePosition.x >= SWORD_POSITION.x &&
    mousePosition.x <= SWORD_POSITION.x + SWORD_SIZE.x &&
    mousePosition.y >= SWORD_POSITION.y &&
    mousePosition.y <= SWORD_POSITION.y + SWORD_SIZE.y) && COIN == 0) {
        sfRenderWindow_close(FIGHT_WIN);
        CINEMATIC_WIN =
        sfRenderWindow_create(N, "Fight", sfResize | sfClose, NULL);
        sword_attack(ALL);
    }
    if ((mousePosition.x >= CAMEA_POSITION.x &&
    mousePosition.x <= CAMEA_POSITION.x + CAMEA_SIZE.x &&
    mousePosition.y >= CAMEA_POSITION.y &&
    mousePosition.y <= CAMEA_POSITION.y + CAMEA_SIZE.y) && COIN == 0) {
        sfRenderWindow_close(FIGHT_WIN);
        CINEMATIC_WIN =
        sfRenderWindow_create(N, "Fight", sfResize | sfClose, NULL);
        camea_attack(ALL);
    }
}

void action_fight(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {FIGHT_EVENT.mouseButton.x, FIGHT_EVENT.mouseButton.y};
    if (FIGHT_EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(FIGHT_WIN);
        COIN = -5;
    }
    do_action_fight(ALL, mousePosition);
}
