/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** make_menu
*/

#include "my.h"

int analyse_menu_events(GLOBAL_T *ALL)
{
    if (MENU_EVENT.type == sfEvtClosed) {
        sfRenderWindow_close(MENU_WIN);
        return 10;
    }
    sfVector2f mousePosition =
    {MENU_EVENT.mouseButton.x, MENU_EVENT.mouseButton.y};
    if (mousePosition.x >= RESUME_POSITION.x &&
    mousePosition.x <= RESUME_POSITION.x + RESUME_SIZE.x &&
    mousePosition.y >= RESUME_POSITION.y &&
    mousePosition.y <= RESUME_POSITION.y + RESUME_SIZE.y) {
        sfRenderWindow_close(MENU_WIN);
    }
    if (mousePosition.x >= QUIT_POSITION.x &&
    mousePosition.x <= QUIT_POSITION.x + QUIT_SIZE.x &&
    mousePosition.y >= QUIT_POSITION.y &&
    mousePosition.y <= QUIT_POSITION.y + QUIT_SIZE.y) {
        sfRenderWindow_close(MENU_WIN);
        return 10;
    }
    return 0;
}

int boucle_analyse_menu_events(GLOBAL_T *ALL)
{
    while (sfRenderWindow_pollEvent(MENU_WIN, &MENU_EVENT)) {
        if (analyse_menu_events(ALL) == 10)
            return 10;
    }
    return 0;
}

int menu(void)
{
    GLOBAL_T ALL;
    init_window_menu(&ALL);
    init_menu(&ALL);
    init_resume_button(&ALL);
    init_quit_button(&ALL);
    init_eclaboussure(&ALL);
    init_eclaboussures(&ALL);
    init_back_menu(&ALL);
    if (display_menu(&ALL) == 10)
        return 10;
    return 0;
}
