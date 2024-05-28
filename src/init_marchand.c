/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_marchand
*/

#include "my.h"

void init_shop_ecriture(GLOBAL_T *ALL)
{
    int number_coin = COIN;
    char coin_txt[2];
    sprintf(coin_txt, "%d", number_coin);
    POLICE = sfFont_createFromFile("template/arial.ttf");
    PRINT_PIECE = sfText_create();
    sfText_setString(PRINT_PIECE, "PIECE: ");
    sfText_setFont(PRINT_PIECE, POLICE);
    sfText_setCharacterSize(PRINT_PIECE, 50);
    sfText_setPosition(PRINT_PIECE, (sfVector2f){460.f, 250.f});

    PRINT_NB_PIECE = sfText_create();
    sfText_setString(PRINT_NB_PIECE, coin_txt);
    sfText_setFont(PRINT_NB_PIECE, POLICE);
    sfText_setCharacterSize(PRINT_NB_PIECE, 50);
    sfText_setPosition(PRINT_NB_PIECE, (sfVector2f){700.f, 250.f});
}

void init_shop_window(GLOBAL_T *ALL)
{
    SHOP_MODE.bitsPerPixel = 64;
    SHOP_MODE.height = 1080;
    SHOP_MODE.width = 1920;
}

void init_marchand(GLOBAL_T *ALL)
{
    MARCHAND_TEXT = sfTexture_createFromFile("template/merchant.png", NULL);
    MARCHAND_SPRT = sfSprite_create();
    MARCHAND_SPAWN = (sfVector2f){1720.0f, 240.0f};
    MARCHAND_SCALE = (sfVector2f){0.5, 0.5};
    sfSprite_setTexture(MARCHAND_SPRT, MARCHAND_TEXT, sfTrue);
    sfSprite_setPosition(MARCHAND_SPRT, MARCHAND_SPAWN);
    sfSprite_setScale(MARCHAND_SPRT, MARCHAND_SCALE);
}
