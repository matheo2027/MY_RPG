/*
** EPITECH PROJECT, 2023
** projet_rpg
** File description:
** entite_red
*/

#include "my.h"

void text_red(GLOBAL_T *ALL)
{
    switch (RED_TRAJET) {
    case 2:
        RED_TEXT = sfTexture_createFromFile(RED_HAUT, NULL);
        break;
    case 3:
        RED_TEXT = sfTexture_createFromFile(RED_GAUCHE, NULL);
        break;
    case 4:
        RED_TEXT = sfTexture_createFromFile(RED_BAS, NULL);
        break;
    default:
        RED_TEXT = sfTexture_createFromFile(RED_DROITE, NULL);
        break;
    }
    sfSprite_setTexture(RED_SPRT, RED_TEXT, sfTrue);
}

void move_red(GLOBAL_T *ALL)
{
    if (RED_X == 325 && RED_Y < 750) {
        RED_TRAJET = 1;
        RED_Y = RED_Y + 1;
    }
    if (RED_Y == 750 && RED_X > 150) {
        RED_TRAJET = 2;
        RED_X = RED_X - 1;
    }
    if (RED_X == 150 && RED_Y > 200) {
        RED_TRAJET = 3;
        RED_Y = RED_Y - 1;
    }
    if (RED_Y == 200 && RED_X < 325) {
        RED_TRAJET = 4;
        RED_X = RED_X + 1;
    }
    text_red(ALL);
    RED_SPAWN = (sfVector2f){RED_Y, RED_X};
    sfSprite_setPosition(RED_SPRT, RED_SPAWN);
}

void init_red(GLOBAL_T *ALL)
{
    RED_TRAJET = 1;
    RED_X = 325;
    RED_Y = 55;
    RED_VITESSE = 1;
    RED_HAUT = "template/enemies/slime red/slime_red_idle_up.gif";
    RED_BAS = "template/enemies/slime red/slime_red_idle_down.gif";
    RED_DROITE = "template/enemies/slime red/slime_red_idle_right.gif";
    RED_GAUCHE = "template/enemies/slime red/slime_red_idle_left.gif";
    RED_TEXT = sfTexture_createFromFile(RED_DROITE, NULL);
    RED_SPRT = sfSprite_create();
    RED_SPAWN = (sfVector2f){RED_Y, RED_X};
    RED_SCALE = (sfVector2f){1.5, 1.5};
    sfSprite_setTexture(RED_SPRT, RED_TEXT, sfTrue);
    sfSprite_setPosition(RED_SPRT, RED_SPAWN);
    sfSprite_setScale(RED_SPRT, RED_SCALE);
}
