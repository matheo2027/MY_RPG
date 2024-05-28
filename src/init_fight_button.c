/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** init_fight_button
*/

#include "my.h"

void do_init_fight_ecriture(GLOBAL_T *ALL)
{
    int nb_vie = HERO_LIFE;
    char nb_vie_txt[2];
    sprintf(nb_vie_txt, "%d", nb_vie);
    PRINT_VIE = sfText_create();
    sfText_setString(PRINT_VIE, "Vie: ");
    sfText_setFont(PRINT_VIE, POLICE);
    sfText_setCharacterSize(PRINT_VIE, 50);
    sfText_setPosition(PRINT_VIE, (sfVector2f){220.f, 200.f});

    PRINT_NB_VIE = sfText_create();
    sfText_setString(PRINT_NB_VIE, nb_vie_txt);
    sfText_setFont(PRINT_NB_VIE, POLICE);
    sfText_setCharacterSize(PRINT_NB_VIE, 50);
    sfText_setPosition(PRINT_NB_VIE, (sfVector2f){460.f, 200.f});
}

void init_fight_ecriture(GLOBAL_T *ALL)
{
    int nb_attaque = HERO_DEGATS;
    char nb_attaque_txt[2];
    sprintf(nb_attaque_txt, "%d", nb_attaque);
    PRINT_DEGATS = sfText_create();
    sfText_setString(PRINT_DEGATS, "Degat: ");
    sfText_setFont(PRINT_DEGATS, POLICE);
    sfText_setCharacterSize(PRINT_DEGATS, 50);
    sfText_setPosition(PRINT_DEGATS, (sfVector2f){220.f, 250.f});

    PRINT_NB_DEGATS = sfText_create();
    sfText_setString(PRINT_NB_DEGATS, nb_attaque_txt);
    sfText_setFont(PRINT_NB_DEGATS, POLICE);
    sfText_setCharacterSize(PRINT_NB_DEGATS, 50);
    sfText_setPosition(PRINT_NB_DEGATS, (sfVector2f){460.f, 250.f});
    do_init_fight_ecriture(ALL);
}

void init_camea_button(GLOBAL_T *ALL)
{
    CAMEA_TEXT = sfTexture_createFromFile("template/cameamea.png", NULL);
    CAMEA_BUTTON = sfRectangleShape_create();
    sfVector2f position = {700.0f, 300.0f};
    sfVector2f size = {200.0f, 100.0f};

    CAMEA_POSITION = position;
    CAMEA_SIZE = size;
    sfRectangleShape_setPosition(CAMEA_BUTTON, CAMEA_POSITION);
    sfRectangleShape_setSize(CAMEA_BUTTON, CAMEA_SIZE);
    sfRectangleShape_setTexture(CAMEA_BUTTON, CAMEA_TEXT, sfTrue);
}

void init_sword_button(GLOBAL_T *ALL)
{
    SWORD_TEXT = sfTexture_createFromFile("template/lasersword.png", NULL);
    SWORD_BUTTON = sfRectangleShape_create();
    sfVector2f position = {1000.0f, 300.0f};
    sfVector2f size = {200.0f, 100.0f};

    SWORD_POSITION = position;
    SWORD_SIZE = size;
    sfRectangleShape_setPosition(SWORD_BUTTON, SWORD_POSITION);
    sfRectangleShape_setSize(SWORD_BUTTON, SWORD_SIZE);
    sfRectangleShape_setTexture(SWORD_BUTTON, SWORD_TEXT, sfTrue);
}
