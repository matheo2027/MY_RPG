/*
** EPITECH PROJECT, 2022
** Struct_h
** File description:
** My_radar
*/

#include "my.h"
#include <SFML/Audio.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct QUIT {
        sfRectangleShape* quit_button;
        sfVector2f quit_position;
        sfVector2f quit_size;
    } QUIT_T;

    typedef struct RESUME {
        sfRectangleShape* resume_button;
        sfVector2f resume_position;
        sfVector2f resume_size;
    } RESUME_T;

    typedef struct PARAMETERS {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
        sfView *view;
        float zoom;
    } PARAMETER_T;

    typedef struct MENU {
        sfTexture* menu_texture;
        sfSprite* menu_sprite;
        sfVector2f menu_spawn;
        sfVector2f menu_scale;
    } MENU_T;

    typedef struct WINDOW_MENU {
        sfVideoMode mode;
        sfRenderWindow *window;
        sfEvent event;
        sfView *view;
    } WINDOW_MENU_T;

    typedef struct BACK {
        sfTexture* back_texture;
        sfSprite* back_sprite;
        sfVector2f back_scale;
    } BACK_T;

    typedef struct BACK_MENU {
        sfTexture* back_menu_texture;
        sfSprite* back_menu_sprite;
        sfVector2f back_menu_scale;
    } BACK_MENU_T;

    typedef struct GRASS {
        sfTexture* grass_texture;
        sfSprite* grass_sprite;
        sfVector2f grass_scale;
    } GRASS_T;

    typedef struct SLIME {
        int x;
        int y;
        int vitesse;
        char *gauche;
        char *droite;
        char *haut;
        char *bas;
        sfTexture* slime_texture;
        sfSprite* slime_sprite;
        sfVector2f slime_spawn;
        sfVector2f slime_scale;
    } SLIME_T;

    typedef struct RED {
        int trajet;
        int x;
        int y;
        int vitesse;
        char *gauche;
        char *droite;
        char *haut;
        char *bas;
        sfTexture* red_texture;
        sfSprite* red_sprite;
        sfVector2f red_spawn;
        sfVector2f red_scale;
    } RED_T;

    typedef struct PERSPECTIVE {
        sfTexture* perspective_texture;
        sfSprite* perspective_sprite;
        sfVector2f perspective_scale;
    } PERSPECTIVE_T;

    typedef struct ECLABOUSSURE {
        sfTexture* eclaboussure_texture;
        sfSprite* eclaboussure_sprite;
        sfVector2f eclaboussure_scale;
    } ECLABOUSSURE_T;

    typedef struct ECLABOUSSURES {
        sfTexture* eclaboussures_texture;
        sfSprite* eclaboussures_sprite;
        sfVector2f eclaboussures_spawn;
        sfVector2f eclaboussures_scale;
    } ECLABOUSSURES_T;

    typedef struct MAISON {
        sfTexture* maison_texture;
        sfSprite* maison_sprite;
        sfVector2f maison_spawn;
        sfVector2f maison_scale;
    } MAISON_T;

    typedef struct SHOP {
        sfTexture* shop_texture;
        sfSprite* shop_sprite;
        sfVector2f shop_spawn;
        sfVector2f shop_scale;
    } SHOP_T;

    typedef struct COIN {
        int coin;
        int coinshop;
        sfTexture* coin_texture;
        sfVector2f coin_scale;
    } COIN_T;

    typedef struct COINA {
        int coina;
        sfSprite* coina_sprite;
        sfVector2f coina_spawn;
    } COINA_T;

    typedef struct COINB {
        int coinb;
        sfSprite* coinb_sprite;
        sfVector2f coinb_spawn;
    } COINB_T;

    typedef struct COINC {
        int coinc;
        sfSprite* coinc_sprite;
        sfVector2f coinc_spawn;
    } COINC_T;

    typedef struct COIND {
        int coind;
        sfSprite* coind_sprite;
        sfVector2f coind_spawn;
    } COIND_T;

    typedef struct COINE {
        int coine;
        sfSprite* coine_sprite;
        sfVector2f coine_spawn;
    } COINE_T;

    typedef struct BURN_TREE {
        sfTexture* burn_texture;
        sfSprite* burn_sprite;
        sfVector2f burn_spawn;
        sfIntRect burn_rect;
        int burn_timer;
    } BURN_TREE_T;

    typedef struct MUSIC {
        sfMusic *music_partie;
        sfMusic *music_porte;
        sfMusic *music_fight;
        sfTime musicDuration_fight;
        sfClock* clock_fight;
        sfTime elapsedTime_fight;
        int volume_partie;
        sfTime musicDuration_partie;
        sfClock* clock_partie;
        sfTime elapsedTime_partie;
    } MUSIC_T;

    typedef struct MARCHANT {
        sfTexture* marchand_texture;
        sfSprite* marchand_sprite;
        sfVector2f marchand_spawn;
        sfVector2f marchand_scale;
    } MARCHAND_T;

    typedef struct BUTTON_E {
        sfTexture* button_e_texture;
        sfVector2f button_e_scale;
    }BUTTON_E_T;

    typedef struct BUTTON_E_SHOP {
        sfSprite* button_e_shop_sprite;
        sfVector2f button_e_shop_spawn;
    } BUTTON_E_SHOP_T;

    typedef struct SHOP_WINDOW {
        sfVideoMode shop_mode;
        sfRenderWindow *shop_window;
        sfEvent shop_event;
    } SHOP_WINDOW_T;

    typedef struct SHOP_BACK {
        sfTexture* shop_back_texture;
        sfSprite* shop_back_sprite;
        sfVector2f shop_back_scale;
    } SHOP_BACK_T;

    typedef struct SHOP_SKIN {
        sfTexture* shop_skin_texture;
        sfSprite* shop_skin_sprite;
        sfVector2f shop_skin_spawn;
        sfVector2f shop_skin_scale;
    } SHOP_SKIN_T;

    typedef struct SHOP_BUTTON {
        sfTexture* shop_equiper_texture;
        sfTexture* shop_equipe_texture;
        sfTexture* shop_acheter_un_texture;
        sfTexture* shop_acheter_deux_texture;
        int blue;
        int black;
        int yellow;
        int purple;
        int rainbow;
    } SHOP_BUTTON_T;

    typedef struct BUTTON_BLUE {
        sfRectangleShape* blue_button;
        sfVector2f blue_button_position;
        sfVector2f blue_button_size;
    } BUTTON_BLUE_T;

    typedef struct BUTTON_BLACK {
        sfRectangleShape* black_button;
        sfVector2f black_button_position;
        sfVector2f black_button_size;
    } BUTTON_BLACK_T;

    typedef struct BUTTON_YELLOW {
        sfRectangleShape* yellow_button;
        sfVector2f yellow_button_position;
        sfVector2f yellow_button_size;
    } BUTTON_YELLOW_T;

    typedef struct BUTTON_PURPLE {
        sfRectangleShape* purple_button;
        sfVector2f purple_button_position;
        sfVector2f purple_button_size;
    } BUTTON_PURPLE_T;

    typedef struct BUTTON_RAINBOW {
        sfRectangleShape* rainbow_button;
        sfVector2f rainbow_button_position;
        sfVector2f rainbow_button_size;
    } BUTTON_RAINBOW_T;

    typedef struct BUTTON_EXIT {
        sfTexture* shop_exit_texture;
        sfRectangleShape* exit_button;
        sfVector2f exit_button_position;
        sfVector2f exit_button_size;
    } BUTTON_EXIT_T;

    typedef struct ECRIRE_PIECE {
        sfText* text;
        sfText* retext;
        sfFont* font;
    } ECRIRE_PIECE_T;

    typedef struct FIGHT_WINDOW {
        sfVideoMode fight_mode;
        sfRenderWindow *fight_window;
        sfEvent fight_event;
    } FIGHT_WINDOW_T;

    typedef struct BACK_FIGHT {
        sfTexture* back_fight_texture;
        sfSprite* back_fight_sprite;
        sfVector2f back_fight_scale;
    } BACK_FIGTH_T;

    typedef struct HERO {
        int coeur;
        int degats;
        int hero_x;
        sfTexture* hero_texture;
        sfSprite* hero_sprite;
        sfVector2f hero_spawn;
        sfVector2f hero_scale;
    } HERO_T;

    typedef struct ENNEMIE {
        int coeur;
        int ennemie_x;
        sfTexture* ennemie_texture;
        sfSprite* ennemie_sprite;
        sfVector2f ennemie_spawn;
        sfVector2f ennemie_scale;
    } ENNEMIE_T;

    typedef struct CAMEA_BUTTON {
        sfTexture* camea_button_texture;
        sfRectangleShape* camea_button;
        sfVector2f camea_button_position;
        sfVector2f camea_button_size;
    } CAMEA_BUTTON_T;

    typedef struct SWORD_BUTTON {
        sfTexture* sword_button_texture;
        sfRectangleShape* sword_button;
        sfVector2f sword_button_position;
        sfVector2f sword_button_size;
    } SWORD_BUTTON_T;

    typedef struct CINEMATIC_WINDOW {
        sfVideoMode cinematic_mode;
        sfRenderWindow *cinematic_window;
        sfEvent cinematic_event;
    } CINEMATIC_WINDOW_T;

    typedef struct ECRIRE_ATTRIBUTS {
        sfText* vie;
        sfText* nb_vie;
        sfText* attaque;
        sfText* nb_attaque;

        sfText* red_vie;
        sfText* red_nb_vie;
        sfText* red_attaque;
        sfText* red_nb_attaque;
    } ECRIRE_ATTRIBUTS_T;

    typedef struct WINDOW_WIN {
        sfVideoMode win_mode;
        sfRenderWindow *win_window;
        sfEvent win_event;
        sfView *win_view;
    } WINDOW_WIN_T;

    typedef struct WINDOW_LOSE {
        sfVideoMode lose_mode;
        sfRenderWindow *lose_window;
        sfEvent lose_event;
        sfView *lose_view;
    } WINDOW_LOSE_T;

    typedef struct BACK_WIN {
        sfTexture* back_win_texture;
        sfSprite* back_win_sprite;
        sfVector2f back_win_scale;
    } BACK_WIN_T;

    typedef struct BACK_LOSE {
        sfTexture* back_lose_texture;
        sfSprite* back_lose_sprite;
        sfVector2f back_lose_scale;
    } BACK_LOSE_T;

    typedef struct WINDOW_H {
        sfVideoMode h_mode;
        sfRenderWindow *h_window;
        sfEvent h_event;
        sfView *h_view;
    } WINDOW_H_T;

    typedef struct BACK_H {
        sfTexture* back_h_texture;
        sfSprite* back_h_sprite;
        sfVector2f back_h_scale;
    } BACK_H_T;

    typedef struct EXIT_H_BUTTON {
        sfTexture* button_texture;
        sfRectangleShape* button;
        sfVector2f button_position;
        sfVector2f button_size;
    } EXIT_H_BUTTON_T;

    typedef struct INVENTAIRE {
        sfTexture* inventaire_texture;
        sfSprite* inventaire_sprite;
        sfVector2f inventaire_spawn;
        sfVector2f inventaire_scale;
    } INVENTAIRE_T;

    typedef struct GLOBAL {
        MENU_T menu;
        WINDOW_MENU_T window_menu;
        PARAMETER_T setting;
        BACK_T background;
        SLIME_T passif;
        RED_T red;
        GRASS_T grass;
        PERSPECTIVE_T perspective;
        RESUME_T resume;
        QUIT_T quit;
        ECLABOUSSURE_T eclaboussure;
        ECLABOUSSURES_T eclaboussures;
        BACK_MENU_T back_menu;
        MAISON_T maison;
        SHOP_T shop;
        COIN_T coin;
        COINA_T coina;
        COINB_T coinb;
        COINC_T coinc;
        COIND_T coind;
        COINE_T coine;
        BURN_TREE_T burn_tree;
        MUSIC_T music;
        MARCHAND_T marchand;
        BUTTON_E_T button_e;
        BUTTON_E_SHOP_T button_e_shop;
        SHOP_WINDOW_T shop_window;
        SHOP_BACK_T shop_back;
        SHOP_SKIN_T shop_skin;
        SHOP_BUTTON_T shop_button;
        BUTTON_BLUE_T blue_button;
        BUTTON_BLACK_T black_button;
        BUTTON_YELLOW_T yellow_button;
        BUTTON_PURPLE_T purple_button;
        BUTTON_RAINBOW_T rainbow_button;
        BUTTON_EXIT_T exit_button;
        ECRIRE_PIECE_T ecrire_piece;
        FIGHT_WINDOW_T fight_window;
        BACK_FIGTH_T back_fight;
        HERO_T hero;
        ENNEMIE_T ennemie;
        CAMEA_BUTTON_T camea_button;
        SWORD_BUTTON_T sword_button;
        CINEMATIC_WINDOW_T cinematic_window;
        ECRIRE_ATTRIBUTS_T ecrire_attributs;
        WINDOW_LOSE_T window_lose;
        WINDOW_WIN_T window_win;
        BACK_WIN_T back_win;
        BACK_LOSE_T back_lose;
        WINDOW_H_T window_h;
        BACK_H_T back_h;
        EXIT_H_BUTTON_T exit_h_button;
        INVENTAIRE_T inventaire;
    } GLOBAL_T;

#endif
