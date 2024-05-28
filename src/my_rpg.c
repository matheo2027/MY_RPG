/*
** EPITECH PROJECT, 2022
** my_radar
** File description:
** My_radar
*/

#include "my.h"

void set_fight(GLOBAL_T *ALL)
{
    init_window_fight(ALL);
    init_fight_background(ALL);
    init_hero(ALL);
    init_ennemie(ALL);
    init_camea_button(ALL);
    init_sword_button(ALL);
    init_window_cinematic(ALL);
    init_fight_ecriture(ALL);
    init_ennemie_fight_ecriture(ALL);
    init_back_win(ALL);
    init_back_lose(ALL);
}

void set_shop(GLOBAL_T *ALL)
{
    init_button_e(ALL);
    init_shop_window(ALL);
    init_shop_sprite(ALL);
    init_shop_ecriture(ALL);
    init_h(ALL);
    init_h_background(ALL);
    init_h_exit_button(ALL);
}

void set_game(void)
{
    GLOBAL_T ALL;
    init_window(&ALL);
    init_grass(&ALL);
    init_map(&ALL);
    init_red(&ALL);
    init_slime(&ALL);
    init_maison(&ALL);
    init_shop(&ALL);
    init_perspective(&ALL);
    init_coin(&ALL);
    init_burn_tree(&ALL);
    init_marchand(&ALL);
    init_music_partie(&ALL);
    init_music_porte(&ALL);
    init_music_fight(&ALL);
    set_shop(&ALL);
    set_fight(&ALL);
    init_inventaire(&ALL);
    display_window(&ALL);
}

void display_help(void)
{
    my_putstr("INPUT:\t./my_rpg\nDESCRIPTION:\n\t \n");
    my_putstr("KEYS:\n\tMove -> Use the W A S D keys to move your ");
    my_putstr("character\n\tZoom -> Use the arrow keys to zoom in ");
    my_putstr("or out\n\tSettings -> To access the settings menu, ");
    my_putstr("press the escape (esc) key\n\tMenu -> To return to ");
    my_putstr("the main menu, \n");
}

int main(int argc, char **argv)
{
    if (argc != 1 && argc != 2) {
        write(2, "Error: Incorrect input, try again with -h\n", 43);
        return 84;
    }
    if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == '\0') {
            display_help();
            return 0;
        } else {
            write(2, "Error: Incorrect input, try again with -h\n", 43);
            return 84;
        }
    }
    if (menu() == 10)
        return 0;
    set_game();
    return 0;
}
