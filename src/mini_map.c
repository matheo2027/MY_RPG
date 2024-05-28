/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** mini_map
*/

#include "my.h"

void zoom_map(GLOBAL_T *ALL)
{
    sfView_setSize(VIEW, (sfVector2f){100.0f, 50.0f});
    sfView_setCenter(VIEW, sfSprite_getPosition(SLIME_SPRT));
    sfView_zoom(VIEW, ZOOM);
    sfRenderWindow_setView(WIN, VIEW);
}
