/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_button
*/

#include "my.h"

void init_quit_button(GLOBAL_T *ALL)
{
    QUIT_BUTTON = sfRectangleShape_create();
    sfVector2f position = {833.0f, 626.5f};
    sfVector2f size = {277.0f, 69.1f};

    QUIT_POSITION = position;
    QUIT_SIZE = size;
    sfRectangleShape_setPosition(QUIT_BUTTON, QUIT_POSITION);
    sfRectangleShape_setSize(QUIT_BUTTON, QUIT_SIZE);
}

void init_resume_button(GLOBAL_T *ALL)
{
    RESUME_BUTTON = sfRectangleShape_create();
    sfVector2f position = {830.0f, 436.5f};
    sfVector2f size = {277.0f, 70.0f};

    RESUME_POSITION = position;
    RESUME_SIZE = size;
    sfRectangleShape_setPosition(RESUME_BUTTON, RESUME_POSITION);
    sfRectangleShape_setSize(RESUME_BUTTON, RESUME_SIZE);
}
