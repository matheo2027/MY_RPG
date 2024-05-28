/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** modif_etat_button
*/

#include "my.h"

void modif_etat_button_blue(GLOBAL_T *ALL)
{
    switch (ETAT_BUTTON_BLUE) {
    case 3:
        sfRectangleShape_setTexture(BLUE_BUTTON, SHOP_BUTTON_EQUIPE, sfTrue);
        HAUT = "template/enemies/slime blue/slime_blue_idle_up.gif";
        BAS = "template/enemies/slime blue/slime_blue_idle_down.gif";;
        DROITE = "template/enemies/slime blue/slime_blue_idle_right.gif";
        GAUCHE = "template/enemies/slime blue/slime_blue_idle_left.gif";
        break;
    default:
        sfRectangleShape_setTexture(BLUE_BUTTON, SHOP_BUTTON_EQUIPER,sfTrue);
        break;
    }
}

void modif_etat_button_black(GLOBAL_T *ALL)
{
    switch (ETAT_BUTTON_BLACK) {
    case 3:
        sfRectangleShape_setTexture(BLACK_BUTTON, SHOP_BUTTON_EQUIPE, sfTrue);
        HAUT = "template/enemies/slime black/slime_black_idle_up.gif";
        BAS = "template/enemies/slime black/slime_black_idle_down.gif";;
        DROITE = "template/enemies/slime black/slime_black_idle_right.gif";
        GAUCHE = "template/enemies/slime black/slime_black_idle_left.gif";
        break;
    case 2:
        sfRectangleShape_setTexture(BLACK_BUTTON, SHOP_BUTTON_EQUIPER, sfTrue);
        break;
    default:
        sfRectangleShape_setTexture(BLACK_BUTTON,
        SHOP_BUTTON_ACHETER_UN, sfTrue);
        break;
    }
}

void modif_etat_button_yellow(GLOBAL_T *ALL)
{
    switch (ETAT_BUTTON_YELLOW) {
    case 3:
        sfRectangleShape_setTexture(YELLOW_BUTTON, SHOP_BUTTON_EQUIPE, sfTrue);
        HAUT = "template/enemies/slime yellow/slime_yellow_idle_up.gif";
        BAS = "template/enemies/slime yellow/slime_yellow_idle_down.gif";;
        DROITE = "template/enemies/slime yellow/slime_yellow_idle_right.gif";
        GAUCHE = "template/enemies/slime yellow/slime_yellow_idle_left.gif";
        break;
    case 2:
        sfRectangleShape_setTexture(YELLOW_BUTTON, SHOP_BUTTON_EQUIPER, sfTrue);
        break;
    default:
        sfRectangleShape_setTexture(YELLOW_BUTTON,
        SHOP_BUTTON_ACHETER_UN, sfTrue);
        break;
    }
}

void modif_etat_button_purple(GLOBAL_T *ALL)
{
    switch (ETAT_BUTTON_PURPLE) {
    case 3:
        sfRectangleShape_setTexture(PURPLE_BUTTON, SHOP_BUTTON_EQUIPE, sfTrue);
        HAUT = "template/enemies/slime purple/slime_purple_idle_up.gif";
        BAS = "template/enemies/slime purple/slime_purple_idle_down.gif";;
        DROITE = "template/enemies/slime purple/slime_purple_idle_right.gif";
        GAUCHE = "template/enemies/slime purple/slime_purple_idle_left.gif";
        break;
    case 2:
        sfRectangleShape_setTexture(PURPLE_BUTTON, SHOP_BUTTON_EQUIPER, sfTrue);
        break;
    default:
        sfRectangleShape_setTexture(PURPLE_BUTTON,
        SHOP_BUTTON_ACHETER_UN, sfTrue);
        break;
    }
}

void modif_etat_button_rainbow(GLOBAL_T *ALL)
{
    switch (ETAT_BUTTON_RAINBOW) {
    case 3:
        sfRectangleShape_setTexture(RAINBOW_BUTTON, SHOP_BUTTON_EQUIPE, sfTrue);
        HAUT = "template/enemies/slime rainbow/slime_rainbow_idle_up.gif";
        BAS = "template/enemies/slime rainbow/slime_rainbow_idle_down.gif";;
        DROITE = "template/enemies/slime rainbow/slime_rainbow_idle_right.gif";
        GAUCHE = "template/enemies/slime rainbow/slime_rainbow_idle_left.gif";
        break;
    case 2:
        sfRectangleShape_setTexture(RAINBOW_BUTTON,
        SHOP_BUTTON_EQUIPER, sfTrue);
        break;
    default:
        sfRectangleShape_setTexture(RAINBOW_BUTTON,
        SHOP_BUTTON_ACHETER_DEUX, sfTrue);
        break;
    }
}
