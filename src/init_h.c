/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-myrpg-mathieu.mayard
** File description:
** init_h
*/

#include "my.h"

void action_h(GLOBAL_T *ALL)
{
    sfVector2f mousePosition =
    {H_EVENT.mouseButton.x, H_EVENT.mouseButton.y};
    if (mousePosition.x >= H_BUTTON_POSITION.x &&
    mousePosition.x <= H_BUTTON_POSITION.x + H_BUTTON_SIZE.x &&
    mousePosition.y >= H_BUTTON_POSITION.y &&
    mousePosition.y <= H_BUTTON_POSITION.y + H_BUTTON_SIZE.y) {
        sfRenderWindow_close(H_WIN);
        WIN = sfRenderWindow_create(MODE, "My rpg", sfResize | sfClose, NULL);
    }
    if (H_EVENT.type == sfEvtClosed)
        sfRenderWindow_close(H_WIN);
}

void display_h(GLOBAL_T *ALL)
{
    sfRenderWindow_close(WIN);
    H_WIN = sfRenderWindow_create(H_MODE, "Help", sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(H_WIN)) {
        sfRenderWindow_clear(H_WIN, sfBlack);
        sfRenderWindow_drawSprite(H_WIN, BACK_H_SPRT, NULL);
        sfRenderWindow_drawRectangleShape(H_WIN, H_BUTTON_BUTTON, NULL);
        sfRenderWindow_display(H_WIN);
        while (sfRenderWindow_pollEvent(H_WIN, &H_EVENT)) {
            action_h(ALL);
        }
    }
    action_h(ALL);
}

void init_h_exit_button(GLOBAL_T *ALL)
{
    H_BUTTON_TEXT = sfTexture_createFromFile("template/exit.png", NULL);
    H_BUTTON_BUTTON = sfRectangleShape_create();
    sfVector2f position = {300.0f, 700.0f};
    sfVector2f size = {300.0f, 250.0f};
    H_BUTTON_POSITION = position;
    H_BUTTON_SIZE = size;
    sfRectangleShape_setPosition(H_BUTTON_BUTTON, H_BUTTON_POSITION);
    sfRectangleShape_setSize(H_BUTTON_BUTTON, H_BUTTON_SIZE);
    sfRectangleShape_setTexture(H_BUTTON_BUTTON, H_BUTTON_TEXT, sfTrue);
}

void init_h_background(GLOBAL_T *ALL)
{
    char *template = "template/base4fromage.png";
    BACK_H_TEXT = sfTexture_createFromFile(template, NULL);
    BACK_H_SPRT = sfSprite_create();
    sfSprite_setTexture(BACK_H_SPRT, BACK_H_TEXT, sfTrue);
    BACK_H_SCALE = (sfVector2f){3.63, 4.2};
    sfSprite_setScale(BACK_H_SPRT, BACK_H_SCALE);
}

void init_h(GLOBAL_T *ALL)
{
    H_MODE.bitsPerPixel = 64;
    H_MODE.height = 1080;
    H_MODE.width = 1920;
}
