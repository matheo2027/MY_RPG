/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** init_music
*/

#include "my.h"

void cours_music_fight(GLOBAL_T *ALL)
{
    if (sfTime_asSeconds(MUSIC_ELAPSEDTIME_FIGHT)
    > sfTime_asSeconds(MUSIC_DURATION_FIGHT)) {
        sfMusic_stop(MUSIC_FIGHT);
        sfMusic_play(MUSIC_FIGHT);
        sfClock_restart(MUSIC_CLOCK_FIGHT);
    }
}

void cours_music_partie(GLOBAL_T *ALL)
{
    if (sfTime_asSeconds(MUSIC_ELAPSEDTIME_PARTIE)
    > sfTime_asSeconds(MUSIC_DURATION_PARTIE)) {
        sfMusic_stop(MUSIC_PARTIE);
        sfMusic_play(MUSIC_PARTIE);
        sfClock_restart(MUSIC_CLOCK_PARTIE);
    }
}

void init_music_fight(GLOBAL_T *ALL)
{
    VOLUME_PARTIE = 50;
    MUSIC_FIGHT = sfMusic_createFromFile("template/music/fight.ogg");
    sfMusic_setVolume(MUSIC_FIGHT, VOLUME_PARTIE);
    MUSIC_DURATION_FIGHT = sfMusic_getDuration(MUSIC_FIGHT);
    MUSIC_CLOCK_FIGHT = sfClock_create();
}

void init_music_partie(GLOBAL_T *ALL)
{
    VOLUME_PARTIE = 50;
    MUSIC_PARTIE = sfMusic_createFromFile("template/music/partie.ogg");
    sfMusic_setVolume(MUSIC_PARTIE, VOLUME_PARTIE);
    MUSIC_DURATION_PARTIE = sfMusic_getDuration(MUSIC_PARTIE);
    MUSIC_CLOCK_PARTIE = sfClock_create();
    sfMusic_play(MUSIC_PARTIE);
}

void init_music_porte(GLOBAL_T *ALL)
{
    MUSIC_PORTE = sfMusic_createFromFile("template/music/porte.ogg");
}
