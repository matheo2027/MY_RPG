/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** move_house
*/

#include "my.h"

void do_move_house(GLOBAL_T *ALL)
{
    if (X < 313 && X > 280 && Y > 550 && Y < 573) {
        sfMusic_setPlayingOffset(MUSIC_PORTE, sfSeconds(0));
        sfMusic_play(MUSIC_PORTE);
        X = 360;
        Y = 1677;
    }

    if (X > 365 && X < 400 && Y > 1660 && Y < 1690) {
        sfMusic_setPlayingOffset(MUSIC_PORTE, sfSeconds(0));
        sfMusic_play(MUSIC_PORTE);
        X = 325;
        Y = 560;
    }
}

void move_house(GLOBAL_T *ALL)
{
    if (X < 123 && Y > 610 && Y < 630) {
        sfMusic_setPlayingOffset(MUSIC_PORTE, sfSeconds(0));
        sfMusic_play(MUSIC_PORTE);
        X = 330;
        Y = 1177;
    }
    if (X > 340 && X < 350 && Y > 1160 && Y < 1190) {
        sfMusic_setPlayingOffset(MUSIC_PORTE, sfSeconds(0));
        sfMusic_play(MUSIC_PORTE);
        X = 125;
        Y = 620;
    }
    do_move_house(ALL);
}
