/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** shop
*/

#include "my.h"

void action_shop(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {SHOP_EVENT.mouseButton.x, SHOP_EVENT.mouseButton.y};
    if (
    mousePosition.x >= EXIT_POSITION.x &&
    mousePosition.x <= EXIT_POSITION.x + EXIT_SIZE.x &&
    mousePosition.y >= EXIT_POSITION.y &&
    mousePosition.y <= EXIT_POSITION.y + EXIT_SIZE.y) {
        sfRenderWindow_close(SHOP_WIN);
        WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    }
    if (SHOP_EVENT.type == sfEvtClosed)
        sfRenderWindow_close(SHOP_WIN);
}
