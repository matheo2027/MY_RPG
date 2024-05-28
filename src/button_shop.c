/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** button_shop
*/

#include "my.h"

void init_shop_blue(GLOBAL_T *ALL)
{
    BLUE_BUTTON = sfRectangleShape_create();
    sfVector2f position = {464.0f, 520.5f};
    sfVector2f size = {150.0f, 80.0f};

    BLUE_POSITION = position;
    BLUE_SIZE = size;
    sfRectangleShape_setPosition(BLUE_BUTTON, BLUE_POSITION);
    sfRectangleShape_setSize(BLUE_BUTTON, BLUE_SIZE);
}

void init_shop_black(GLOBAL_T *ALL)
{
    BLACK_BUTTON = sfRectangleShape_create();
    sfVector2f position = {650.0f, 520.0f};
    sfVector2f size = {150.0f, 80.0f};

    BLACK_POSITION = position;
    BLACK_SIZE = size;
    sfRectangleShape_setPosition(BLACK_BUTTON, BLACK_POSITION);
    sfRectangleShape_setSize(BLACK_BUTTON, BLACK_SIZE);
}

void init_shop_yellow(GLOBAL_T *ALL)
{
    YELLOW_BUTTON = sfRectangleShape_create();
    sfVector2f position = {833.0f, 520.0f};
    sfVector2f size = {150.0f, 80.0f};

    YELLOW_POSITION = position;
    YELLOW_SIZE = size;
    sfRectangleShape_setPosition(YELLOW_BUTTON, YELLOW_POSITION);
    sfRectangleShape_setSize(YELLOW_BUTTON, YELLOW_SIZE);
}

void init_shop_purple(GLOBAL_T *ALL)
{
    PURPLE_BUTTON = sfRectangleShape_create();
    sfVector2f position = {1015.0f, 520.0f};
    sfVector2f size = {150.0f, 80.0f};

    PURPLE_POSITION = position;
    PURPLE_SIZE = size;
    sfRectangleShape_setPosition(PURPLE_BUTTON, PURPLE_POSITION);
    sfRectangleShape_setSize(PURPLE_BUTTON, PURPLE_SIZE);
}

void init_shop_rainbow(GLOBAL_T *ALL)
{
    RAINBOW_BUTTON = sfRectangleShape_create();
    sfVector2f position = {1195.0f, 520.0f};
    sfVector2f size = {150.0f, 80.0f};

    RAINBOW_POSITION = position;
    RAINBOW_SIZE = size;
    sfRectangleShape_setPosition(RAINBOW_BUTTON, RAINBOW_POSITION);
    sfRectangleShape_setSize(RAINBOW_BUTTON, RAINBOW_SIZE);
}
