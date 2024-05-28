/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_shop
*/

#include "my.h"

void init_exit_button(GLOBAL_T *ALL)
{
    EXIT_TEXT = sfTexture_createFromFile("template/exit.png", NULL);
    EXIT_BUTTON = sfRectangleShape_create();
    sfVector2f position = {803.0f, 800.0f};
    sfVector2f size = {200.0f, 100.0f};

    EXIT_POSITION = position;
    EXIT_SIZE = size;
    sfRectangleShape_setPosition(EXIT_BUTTON, EXIT_POSITION);
    sfRectangleShape_setSize(EXIT_BUTTON, EXIT_SIZE);
    sfRectangleShape_setTexture(EXIT_BUTTON, EXIT_TEXT, sfTrue);
}

void init_shop_button_texture(GLOBAL_T *ALL)
{
    SHOP_BUTTON_ACHETER_UN =
    sfTexture_createFromFile("template/cost1.png", NULL);
    SHOP_BUTTON_ACHETER_DEUX =
    sfTexture_createFromFile("template/cost2.png", NULL);
    SHOP_BUTTON_EQUIPER = sfTexture_createFromFile("template/equip.png", NULL);
    SHOP_BUTTON_EQUIPE =
    sfTexture_createFromFile("template/equipped.png", NULL);
}

void init_skin_shop(GLOBAL_T *ALL)
{
    SHOP_SKIN_TEXT = sfTexture_createFromFile("template/shopslime.png", NULL);
    SHOP_SKIN_SPRT = sfSprite_create();
    sfSprite_setTexture(SHOP_SKIN_SPRT, SHOP_SKIN_TEXT, sfTrue);
    SHOP_SKIN_SPAWN = (sfVector2f){450, 140};
    SHOP_SKIN_SCALE = (sfVector2f){4, 4};
    sfSprite_setPosition(SHOP_SKIN_SPRT, SHOP_SKIN_SPAWN);
    sfSprite_setScale(SHOP_SKIN_SPRT, SHOP_SKIN_SCALE);
}

void init_back_shop(GLOBAL_T *ALL)
{
    SHOP_BACK_TEXT = sfTexture_createFromFile("template/fond_shop.jpg", NULL);
    SHOP_BACK_SPRT = sfSprite_create();
    sfSprite_setTexture(SHOP_BACK_SPRT, SHOP_BACK_TEXT, sfTrue);
    SHOP_BACK_SCALE = (sfVector2f){2, 2};
    sfSprite_setScale(SHOP_BACK_SPRT, SHOP_BACK_SCALE);
}

void init_shop_sprite(GLOBAL_T *ALL)
{
    init_back_shop(ALL);
    init_skin_shop(ALL);
    init_shop_button_texture(ALL);
    init_shop_blue(ALL);
    init_shop_black(ALL);
    init_shop_yellow(ALL);
    init_shop_purple(ALL);
    init_shop_rainbow(ALL);
    init_exit_button(ALL);
    init_etat_button(ALL);
}
