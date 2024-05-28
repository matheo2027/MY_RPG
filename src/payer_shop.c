/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** payer_shop
*/

#include "my.h"

void payer_blue(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {SHOP_EVENT.mouseButton.x, SHOP_EVENT.mouseButton.y};
    if ((mousePosition.x >= BLUE_POSITION.x && mousePosition.x <=
    BLUE_POSITION.x + BLUE_SIZE.x && mousePosition.y >= BLUE_POSITION.y &&
    mousePosition.y <= BLUE_POSITION.y + BLUE_SIZE.y)) {
        if (ETAT_BUTTON_BLUE < 3)
            ETAT_BUTTON_BLUE = ETAT_BUTTON_BLUE + 1;
        else
            ETAT_BUTTON_BLUE = 2;
        sfRenderWindow_close(SHOP_WIN);
        WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    }
    do_payer_blue(ALL);
}

void condition_black(GLOBAL_T *ALL)
{
    if (ETAT_BUTTON_BLACK == 1 && COIN <= 0)
        return;
    if (ETAT_BUTTON_BLACK == 1) {
        HERO_DEGATS = HERO_DEGATS + 1;
        HERO_LIFE = HERO_LIFE + 1;
        SHOP_COIN = SHOP_COIN - 1;
    }
    if (ETAT_BUTTON_BLACK < 3)
        ETAT_BUTTON_BLACK = ETAT_BUTTON_BLACK + 1;
    else {
        ETAT_BUTTON_BLUE = 3;
        ETAT_BUTTON_BLACK = 2;
    }
}

void payer_black(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {SHOP_EVENT.mouseButton.x, SHOP_EVENT.mouseButton.y};
    if ((mousePosition.x >= BLACK_POSITION.x && mousePosition.x <=
    BLACK_POSITION.x + BLACK_SIZE.x && mousePosition.y >= BLACK_POSITION.y &&
    mousePosition.y <= BLACK_POSITION.y + BLACK_SIZE.y)) {
        condition_black(ALL);
        sfRenderWindow_close(SHOP_WIN);
        WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    }
    do_payer_black(ALL);
}

void payer_yellow(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {SHOP_EVENT.mouseButton.x, SHOP_EVENT.mouseButton.y};
    if ((mousePosition.x >= YELLOW_POSITION.x && mousePosition.x <=
    YELLOW_POSITION.x + YELLOW_SIZE.x && mousePosition.y >= YELLOW_POSITION.y
    && mousePosition.y <= YELLOW_POSITION.y + YELLOW_SIZE.y)) {
        condition_yellow(ALL);
        sfRenderWindow_close(SHOP_WIN);
        WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    }
    do_payer_yellow(ALL);
}

void payer_rainbow(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {SHOP_EVENT.mouseButton.x, SHOP_EVENT.mouseButton.y};
    if (mousePosition.x >= RAINBOW_POSITION.x && mousePosition.x <=
    RAINBOW_POSITION.x + RAINBOW_SIZE.x && mousePosition.y >= RAINBOW_POSITION.y
    && mousePosition.y <= RAINBOW_POSITION.y + RAINBOW_SIZE.y) {
        condition_rainbow(ALL);
        sfRenderWindow_close(SHOP_WIN);
        WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    }
    do_payer_rainbow(ALL);
}
