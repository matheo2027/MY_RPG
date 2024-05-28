/*
** EPITECH PROJECT, 2022
** my_radar
** File description:
** My_radar
*/

#include "my.h"

void display_shop_sprite(GLOBAL_T *ALL)
{
    sfText_setCharacterSize(PRINT_NB_PIECE, 50);
    int number_coin = COIN;
    char coin_txt[2];
    sprintf(coin_txt, "%d", number_coin);
    sfText_setString(PRINT_NB_PIECE, coin_txt);
    sfText_setPosition(PRINT_NB_PIECE, (sfVector2f){700.f, 250.f});
    sfRenderWindow_drawSprite(SHOP_WIN, SHOP_BACK_SPRT, NULL);
    sfRenderWindow_drawSprite(SHOP_WIN, SHOP_SKIN_SPRT, NULL);
    sfRenderWindow_drawRectangleShape(SHOP_WIN, BLUE_BUTTON, NULL);
    sfRenderWindow_drawRectangleShape(SHOP_WIN, BLACK_BUTTON, NULL);
    sfRenderWindow_drawRectangleShape(SHOP_WIN, YELLOW_BUTTON, NULL);
    sfRenderWindow_drawRectangleShape(SHOP_WIN, PURPLE_BUTTON, NULL);
    sfRenderWindow_drawRectangleShape(SHOP_WIN, RAINBOW_BUTTON, NULL);
    sfRenderWindow_drawRectangleShape(SHOP_WIN, EXIT_BUTTON, NULL);
    sfRenderWindow_drawText(SHOP_WIN, PRINT_PIECE, NULL);
    sfRenderWindow_drawText(SHOP_WIN, PRINT_NB_PIECE, NULL);
}

void display_shop(GLOBAL_T *ALL)
{
    SHOP_WIN =
    sfRenderWindow_create(SHOP_MODE, "My shop", sfResize | sfClose, NULL);
    while (sfRenderWindow_isOpen(SHOP_WIN)) {
        sfRenderWindow_clear(SHOP_WIN, sfBlack);
        display_shop_sprite(ALL);
        sfRenderWindow_display(SHOP_WIN);
        modif_etat_button(ALL);
        timer();
        while (sfRenderWindow_pollEvent(SHOP_WIN, &SHOP_EVENT)) {
            action_shop(ALL);
            payer(ALL);
        }
    }
}

void display_sprite(GLOBAL_T *ALL)
{
    sfText_setCharacterSize(PRINT_NB_PIECE, 10);
    int number_coin = COIN;
    char coin_txt[2];
    sprintf(coin_txt, "%d", number_coin);
    sfText_setString(PRINT_NB_PIECE, coin_txt);
    sfText_setPosition(PRINT_NB_PIECE, (sfVector2f){Y, X - 10});
    display_do_sprite(ALL);
    display_coin(ALL);
    sfRenderWindow_drawSprite(WIN, SLIME_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, PERSPECTIVE_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, BURN_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, MARCHAND_SPRT, NULL);
    sfRenderWindow_drawSprite(WIN, INVENTAIRE_SPRT, NULL);
    sfRenderWindow_drawText(WIN, PRINT_NB_PIECE, NULL);
    modif_etat_button(ALL);
    loot_coin(ALL);
    talk_png(ALL);
    INVENTAIRE_SPAWN = (sfVector2f){Y, X};
    INVENTAIRE_SCALE = (sfVector2f){1.5, 1.5};
    sfSprite_setPosition(INVENTAIRE_SPRT, INVENTAIRE_SPAWN);
}

void display_window(GLOBAL_T *ALL)
{
    while (sfRenderWindow_isOpen(WIN)) {
        MUSIC_ELAPSEDTIME_PARTIE = sfClock_getElapsedTime(MUSIC_CLOCK_PARTIE);
        zoom_map(ALL);
        sfRenderWindow_clear(WIN, sfBlack);
        display_sprite(ALL);
        sfRenderWindow_display(WIN);
        move_red(ALL);
        move_house(ALL);
        modif_burn_tree(ALL);
        timer();
        while (sfRenderWindow_pollEvent(WIN, &EVENT)) {
            analyse_events(ALL);
            cours_music_partie(ALL);
        }
    }
    sfRenderWindow_destroy(WIN);
}

int display_menu(GLOBAL_T *ALL)
{
    while (sfRenderWindow_isOpen(MENU_WIN)) {
        sfRenderWindow_clear(MENU_WIN, sfBlack);
        sfRenderWindow_drawSprite(MENU_WIN, BACK_MENU_SPRT, NULL);
        sfRenderWindow_drawSprite(MENU_WIN, MENU_SPRT, NULL);
        sfRenderWindow_drawSprite(MENU_WIN, ECLAB_SPRT, NULL);
        sfRenderWindow_drawSprite(MENU_WIN, ECLABS_SPRT, NULL);
        sfRenderWindow_display(MENU_WIN);
        if (boucle_analyse_menu_events(ALL) == 10)
            return 10;
    }
    sfRenderWindow_destroy(MENU_WIN);
    return 0;
}
