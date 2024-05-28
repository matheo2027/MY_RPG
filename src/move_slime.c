/*
** EPITECH PROJECT, 2023
** projet_rpg
** File description:
** move_slime
*/

#include "my.h"

void move_x(GLOBAL_T *ALL, sfColor color_moins_x, sfColor color_plus_x)
{
    switch (EVENT.key.code) {
    case sfKeyZ:
        SLIME_TEXT = sfTexture_createFromFile(HAUT, NULL);
        if (color_moins_x.r != 255 || color_moins_x.g != 174
        || color_moins_x.b != 201)
            X = X - VITESSE;
        break;
    case sfKeyS:
        SLIME_TEXT = sfTexture_createFromFile(BAS, NULL);
        if (color_plus_x.r != 255 || color_plus_x.g != 174
        || color_plus_x.b != 201)
            X = X + VITESSE;
        break;
    default:
        break;
    }
}

void move_y(GLOBAL_T *ALL, sfColor color_moins_y, sfColor color_plus_y)
{
    switch (EVENT.key.code) {
    case sfKeyQ:
        SLIME_TEXT = sfTexture_createFromFile(GAUCHE, NULL);
        if (color_moins_y.r != 255 || color_moins_y.g != 174
        || color_moins_y.b != 201)
            Y = Y - VITESSE;
        break;
    case sfKeyD:
        SLIME_TEXT = sfTexture_createFromFile(DROITE, NULL);
        if (color_plus_y.r != 255 || color_plus_y.g != 174
        || color_plus_y.b != 201)
            Y = Y + VITESSE;
        break;
    default:
        break;
    }
}

void move_slime_house(GLOBAL_T *ALL)
{
    sfImage* image =
    sfImage_createFromFile("template/interieur/housecollision.png");
    sfColor color_plus_x =
    sfImage_getPixel(image, (Y + 11 - 1100) * 2, (X + VITESSE + 22 - 200) * 2);
    sfColor color_moins_x =
    sfImage_getPixel(image, (Y + 11 - 1100) * 2, (X - VITESSE + 11 - 200) * 2);
    sfColor color_plus_y =
    sfImage_getPixel(image, (Y + 20 + VITESSE - 1100) * 2, (X + 11 - 200) * 2);
    sfColor color_moins_y =
    sfImage_getPixel(image, (Y + 1 - VITESSE - 1100) * 2, (X + 11 - 200) * 2);

    move_x(ALL, color_moins_x, color_plus_x);
    move_y(ALL, color_moins_y, color_plus_y);

    sfImage_destroy(image);
}

void move_slime_shop(GLOBAL_T *ALL)
{
    sfImage* image =
    sfImage_createFromFile("template/interieur/shopcollision.png");
    sfColor color_plus_x =
    sfImage_getPixel(image, (Y + 11 - 1500) * 2, (X + VITESSE + 22 - 150) * 2);
    sfColor color_moins_x =
    sfImage_getPixel(image, (Y + 11 - 1500) * 2, (X - VITESSE + 11 - 150) * 2);
    sfColor color_plus_y =
    sfImage_getPixel(image, (Y + 20 + VITESSE - 1500) * 2, (X + 11 - 150) * 2);
    sfColor color_moins_y =
    sfImage_getPixel(image, (Y + 1 - VITESSE - 1500) * 2, (X + 11 - 150) * 2);

    move_x(ALL, color_moins_x, color_plus_x);
    move_y(ALL, color_moins_y, color_plus_y);

    sfImage_destroy(image);
}

void move_slime(GLOBAL_T *ALL)
{
    if (Y < 1050) {
        sfImage* image = sfImage_createFromFile("template/collision.png");
        sfColor color_plus_x =
        sfImage_getPixel(image, Y + 11, X + VITESSE + 22);
        sfColor color_moins_x =
        sfImage_getPixel(image, Y + 11, X - VITESSE + 11);
        sfColor color_plus_y =
        sfImage_getPixel(image, Y + 20 + VITESSE, X + 11);
        sfColor color_moins_y =
        sfImage_getPixel(image, Y + 1 - VITESSE, X + 11);
        move_x(ALL, color_moins_x, color_plus_x);
        move_y(ALL, color_moins_y, color_plus_y);
        sfImage_destroy(image);
    }

    if (Y > 1050 && Y < 1450)
        move_slime_house(ALL);
    if (Y > 1450)
        move_slime_shop(ALL);
}
