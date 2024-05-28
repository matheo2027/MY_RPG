/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** coin
*/

#include "my.h"

void loot_coin(GLOBAL_T *ALL)
{
    if (X >= 300 - 30 && X <= 310 && Y >= 700 - 20 && Y <= 710)
        COINA = 1;
    if (X >= 300 - 30 && X <= 310 && Y >= 400 - 20 && Y <= 410)
        COINB = 1;
    if (X >= 180 - 30 && X <= 190 && Y >= 40 - 20 && Y <= 50)
        COINC = 1;
    if (X >= 320 - 30 && X <= 330 && Y >= 190 - 20 && Y <= 200)
        COIND = 1;
    if (X >= 180 - 30 && X <= 190 && Y >= 555 - 20 && Y <= 565)
        COINE = 1;
    COIN = COINA + COINB + COINC + COIND + COINE + SHOP_COIN;
}

void display_coin(GLOBAL_T *ALL)
{
    if (COINA == 0)
        sfRenderWindow_drawSprite(WIN, COINA_SPRT, NULL);
    if (COINB == 0)
        sfRenderWindow_drawSprite(WIN, COINB_SPRT, NULL);
    if (COINC == 0)
        sfRenderWindow_drawSprite(WIN, COINC_SPRT, NULL);
    if (COIND == 0)
        sfRenderWindow_drawSprite(WIN, COIND_SPRT, NULL);
    if (COINE == 0)
        sfRenderWindow_drawSprite(WIN, COINE_SPRT, NULL);
}

void do_init_coin(GLOBAL_T *ALL)
{
    COINC_SPRT = sfSprite_create();
    sfSprite_setTexture(COINC_SPRT, COIN_TEXT, sfTrue);
    COINC_SPAWN = (sfVector2f){40, 180};
    sfSprite_setPosition(COINC_SPRT, COINC_SPAWN);
    sfSprite_setScale(COINC_SPRT, COIN_SCALE);
    COINC = 0;
    COIND_SPRT = sfSprite_create();
    sfSprite_setTexture(COIND_SPRT, COIN_TEXT, sfTrue);
    COIND_SPAWN = (sfVector2f){190, 320};
    sfSprite_setPosition(COIND_SPRT, COIND_SPAWN);
    sfSprite_setScale(COIND_SPRT, COIN_SCALE);
    COIND = 0;
    COINE_SPRT = sfSprite_create();
    sfSprite_setTexture(COINE_SPRT, COIN_TEXT, sfTrue);
    COINE_SPAWN = (sfVector2f){555, 180};
    sfSprite_setPosition(COINE_SPRT, COINE_SPAWN);
    sfSprite_setScale(COINE_SPRT, COIN_SCALE);
    COINE = 0;
}

void init_coin(GLOBAL_T *ALL)
{
    SHOP_COIN = 0;
    COIN = 0;
    char *template = "template/coin.png";
    COIN_TEXT = sfTexture_createFromFile(template, NULL);
    COIN_SCALE = (sfVector2f){0.025, 0.025};
    COINA_SPRT = sfSprite_create();
    sfSprite_setTexture(COINA_SPRT, COIN_TEXT, sfTrue);
    COINA_SPAWN = (sfVector2f){700, 300};
    sfSprite_setPosition(COINA_SPRT, COINA_SPAWN);
    sfSprite_setScale(COINA_SPRT, COIN_SCALE);
    COINA = 0;
    COINB_SPRT = sfSprite_create();
    sfSprite_setTexture(COINB_SPRT, COIN_TEXT, sfTrue);
    COINB_SPAWN = (sfVector2f){400, 300};
    sfSprite_setPosition(COINB_SPRT, COINB_SPAWN);
    sfSprite_setScale(COINB_SPRT, COIN_SCALE);
    COINB = 0;
    do_init_coin(ALL);
}
