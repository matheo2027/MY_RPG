/*
** EPITECH PROJECT, 2023
** projet_rpg
** File description:
** define
*/

#ifndef DEFINE_H_
    #define DEFINE_H_

    #define WIN ALL->setting.window
    #define MODE ALL->setting.mode
    #define EVENT ALL->setting.event
    #define VIEW ALL->setting.view
    #define ZOOM ALL->setting.zoom

    #define MENU_WIN ALL->window_menu.window
    #define MENU_MODE ALL->window_menu.mode
    #define MENU_EVENT ALL->window_menu.event
    #define MENU_VIEW ALL->window_menu.view

    #define MENU_TEXT ALL->menu.menu_texture
    #define MENU_SPRT ALL->menu.menu_sprite
    #define MENU_SPAWN ALL->menu.menu_spawn
    #define MENU_SCALE ALL->menu.menu_scale

    #define BACK_TEXT ALL->background.back_texture
    #define BACK_SPRT ALL->background.back_sprite
    #define BACK_SCALE ALL->background.back_scale

    #define RED_TEXT ALL->red.red_texture
    #define RED_SPRT ALL->red.red_sprite
    #define RED_SPAWN ALL->red.red_spawn
    #define RED_SCALE ALL->red.red_scale

    #define RED_X ALL->red.x
    #define RED_Y ALL->red.y
    #define RED_VITESSE ALL->red.vitesse
    #define RED_TRAJET ALL->red.trajet

    #define RED_GAUCHE ALL->red.gauche
    #define RED_DROITE ALL->red.droite
    #define RED_HAUT ALL->red.haut
    #define RED_BAS ALL->red.bas

    #define SLIME_TEXT ALL->passif.slime_texture
    #define SLIME_SPRT ALL->passif.slime_sprite
    #define SLIME_SPAWN ALL->passif.slime_spawn
    #define SLIME_SCALE ALL->passif.slime_scale

    #define GAUCHE ALL->passif.gauche
    #define DROITE ALL->passif.droite
    #define HAUT ALL->passif.haut
    #define BAS ALL->passif.bas

    #define X ALL->passif.x
    #define Y ALL->passif.y
    #define VITESSE ALL->passif.vitesse

    #define GRASS_TEXT ALL->grass.grass_texture
    #define GRASS_SPRT ALL->grass.grass_sprite
    #define GRASS_SCALE ALL->grass.grass_scale

    #define PERSPECTIVE_TEXT ALL->perspective.perspective_texture
    #define PERSPECTIVE_SPRT ALL->perspective.perspective_sprite
    #define PERSPECTIVE_SCALE ALL->perspective.perspective_scale

    #define RESUME_BUTTON ALL->resume.resume_button
    #define RESUME_POSITION ALL->resume.resume_position
    #define RESUME_SIZE ALL->resume.resume_size

    #define QUIT_BUTTON ALL->quit.quit_button
    #define QUIT_POSITION ALL->quit.quit_position
    #define QUIT_SIZE ALL->quit.quit_size

    #define ECLAB_TEXT ALL->eclaboussure.eclaboussure_texture
    #define ECLAB_SPRT ALL->eclaboussure.eclaboussure_sprite
    #define ECLAB_SCALE ALL->eclaboussure.eclaboussure_scale

    #define ECLABS_TEXT ALL->eclaboussures.eclaboussures_texture
    #define ECLABS_SPRT ALL->eclaboussures.eclaboussures_sprite
    #define ECLABS_SPAWN ALL->eclaboussures.eclaboussures_spawn
    #define ECLABS_SCALE ALL->eclaboussures.eclaboussures_scale

    #define BACK_MENU_TEXT ALL->back_menu.back_menu_texture
    #define BACK_MENU_SPRT ALL->back_menu.back_menu_sprite
    #define BACK_MENU_SCALE ALL->back_menu.back_menu_scale

    #define MAISON_TEXT ALL->maison.maison_texture
    #define MAISON_SPRT ALL->maison.maison_sprite
    #define MAISON_SPAWN ALL->maison.maison_spawn
    #define MAISON_SCALE ALL->maison.maison_scale

    #define SHOP_TEXT ALL->shop.shop_texture
    #define SHOP_SPRT ALL->shop.shop_sprite
    #define SHOP_SPAWN ALL->shop.shop_spawn
    #define SHOP_SCALE ALL->shop.shop_scale

    #define COIN_TEXT ALL->coin.coin_texture
    #define COIN_SCALE ALL->coin.coin_scale
    #define COIN ALL->coin.coin
    #define SHOP_COIN ALL->coin.coinshop

    #define COINA_SPRT ALL->coina.coina_sprite
    #define COINA_SPAWN ALL->coina.coina_spawn
    #define COINA ALL->coina.coina

    #define COINB_SPRT ALL->coinb.coinb_sprite
    #define COINB_SPAWN ALL->coinb.coinb_spawn
    #define COINB ALL->coinb.coinb

    #define COINC_SPRT ALL->coinc.coinc_sprite
    #define COINC_SPAWN ALL->coinc.coinc_spawn
    #define COINC ALL->coinc.coinc

    #define COIND_SPRT ALL->coind.coind_sprite
    #define COIND_SPAWN ALL->coind.coind_spawn
    #define COIND ALL->coind.coind

    #define COINE_SPRT ALL->coine.coine_sprite
    #define COINE_SPAWN ALL->coine.coine_spawn
    #define COINE ALL->coine.coine

    #define BURN_TEXT ALL->burn_tree.burn_texture
    #define BURN_SPRT ALL->burn_tree.burn_sprite
    #define BURN_SPAWN ALL->burn_tree.burn_spawn
    #define BURN_RECT ALL->burn_tree.burn_rect
    #define BURN_TIMER ALL->burn_tree.burn_timer

    #define MUSIC_PARTIE ALL->music.music_partie
    #define MUSIC_PORTE ALL->music.music_porte
    #define MUSIC_FIGHT ALL->music.music_fight
    #define VOLUME_PARTIE ALL->music.volume_partie

    #define MUSIC_DURATION_FIGHT ALL->music.musicDuration_fight
    #define MUSIC_CLOCK_FIGHT ALL->music.clock_fight
    #define MUSIC_ELAPSEDTIME_FIGHT ALL->music.elapsedTime_fight

    #define MUSIC_DURATION_PARTIE ALL->music.musicDuration_partie
    #define MUSIC_CLOCK_PARTIE ALL->music.clock_partie
    #define MUSIC_ELAPSEDTIME_PARTIE ALL->music.elapsedTime_partie

    #define MARCHAND_TEXT ALL->marchand.marchand_texture
    #define MARCHAND_SPRT ALL->marchand.marchand_sprite
    #define MARCHAND_SPAWN ALL->marchand.marchand_spawn
    #define MARCHAND_SCALE ALL->marchand.marchand_scale

    #define BUTTON_E_TEXT ALL->button_e.button_e_texture
    #define BUTTON_E_SCALE ALL->button_e.button_e_scale

    #define BUTTON_E_SHOP_SPRT ALL->button_e_shop.button_e_shop_sprite
    #define BUTTON_E_SHOP_SPAWN ALL->button_e_shop.button_e_shop_spawn

    #define SHOP_WIN ALL->shop_window.shop_window
    #define SHOP_MODE ALL->shop_window.shop_mode
    #define SHOP_EVENT ALL->shop_window.shop_event

    #define SHOP_BACK_TEXT ALL->shop_back.shop_back_texture
    #define SHOP_BACK_SPRT ALL->shop_back.shop_back_sprite
    #define SHOP_BACK_SCALE ALL->shop_back.shop_back_scale

    #define SHOP_SKIN_TEXT ALL->shop_skin.shop_skin_texture
    #define SHOP_SKIN_SPRT ALL->shop_skin.shop_skin_sprite
    #define SHOP_SKIN_SPAWN ALL->shop_skin.shop_skin_spawn
    #define SHOP_SKIN_SCALE ALL->shop_skin.shop_skin_scale

    #define SHOP_BUTTON_ACHETER_UN ALL->shop_button.shop_acheter_un_texture
    #define SHOP_BUTTON_ACHETER_DEUX ALL->shop_button.shop_acheter_deux_texture
    #define SHOP_BUTTON_EQUIPER ALL->shop_button.shop_equiper_texture
    #define SHOP_BUTTON_EQUIPE ALL->shop_button.shop_equipe_texture
    #define ETAT_BUTTON_BLUE ALL->shop_button.blue
    #define ETAT_BUTTON_BLACK ALL->shop_button.black
    #define ETAT_BUTTON_YELLOW ALL->shop_button.yellow
    #define ETAT_BUTTON_PURPLE ALL->shop_button.purple
    #define ETAT_BUTTON_RAINBOW ALL->shop_button.rainbow

    #define BLUE_BUTTON ALL->blue_button.blue_button
    #define BLUE_POSITION ALL->blue_button.blue_button_position
    #define BLUE_SIZE ALL->blue_button.blue_button_size

    #define BLACK_BUTTON ALL->black_button.black_button
    #define BLACK_POSITION ALL->black_button.black_button_position
    #define BLACK_SIZE ALL->black_button.black_button_size

    #define YELLOW_BUTTON ALL->yellow_button.yellow_button
    #define YELLOW_POSITION ALL->yellow_button.yellow_button_position
    #define YELLOW_SIZE ALL->yellow_button.yellow_button_size

    #define PURPLE_BUTTON ALL->purple_button.purple_button
    #define PURPLE_POSITION ALL->purple_button.purple_button_position
    #define PURPLE_SIZE ALL->purple_button.purple_button_size

    #define RAINBOW_BUTTON ALL->rainbow_button.rainbow_button
    #define RAINBOW_POSITION ALL->rainbow_button.rainbow_button_position
    #define RAINBOW_SIZE ALL->rainbow_button.rainbow_button_size

    #define EXIT_TEXT ALL->exit_button.shop_exit_texture
    #define EXIT_BUTTON ALL->exit_button.exit_button
    #define EXIT_POSITION ALL->exit_button.exit_button_position
    #define EXIT_SIZE ALL->exit_button.exit_button_size

    #define PRINT_PIECE ALL->ecrire_piece.text
    #define PRINT_NB_PIECE ALL->ecrire_piece.retext
    #define POLICE ALL->ecrire_piece.font

    #define FIGHT_WIN ALL->fight_window.fight_window
    #define FIGHT_MODE ALL->fight_window.fight_mode
    #define FIGHT_EVENT ALL->fight_window.fight_event

    #define BACK_FIGHT_TEXT ALL->back_fight.back_fight_texture
    #define BACK_FIGHT_SPRT ALL->back_fight.back_fight_sprite
    #define BACK_FIGHT_SCALE ALL->back_fight.back_fight_scale

    #define HERO_TEXT ALL->hero.hero_texture
    #define HERO_SPRT ALL->hero.hero_sprite
    #define HERO_SPAWN ALL->hero.hero_spawn
    #define HERO_SCALE ALL->hero.hero_scale
    #define HERO_X ALL->hero.hero_x
    #define HERO_LIFE ALL->hero.coeur
    #define HERO_DEGATS ALL->hero.degats

    #define ENNEMIE_TEXT ALL->ennemie.ennemie_texture
    #define ENNEMIE_SPRT ALL->ennemie.ennemie_sprite
    #define ENNEMIE_SPAWN ALL->ennemie.ennemie_spawn
    #define ENNEMIE_SCALE ALL->ennemie.ennemie_scale
    #define ENNEMIE_X ALL->ennemie.ennemie_x
    #define ENNEMIE_LIFE ALL->ennemie.coeur

    #define CAMEA_TEXT ALL->camea_button.camea_button_texture
    #define CAMEA_BUTTON ALL->camea_button.camea_button
    #define CAMEA_POSITION ALL->camea_button.camea_button_position
    #define CAMEA_SIZE ALL->camea_button.camea_button_size

    #define SWORD_TEXT ALL->sword_button.sword_button_texture
    #define SWORD_BUTTON ALL->sword_button.sword_button
    #define SWORD_POSITION ALL->sword_button.sword_button_position
    #define SWORD_SIZE ALL->sword_button.sword_button_size

    #define CINEMATIC_WIN ALL->cinematic_window.cinematic_window
    #define CINEMATIC_MODE ALL->cinematic_window.cinematic_mode
    #define CINEMATIC_EVENT ALL->cinematic_window.cinematic_event

    #define PRINT_VIE ALL->ecrire_attributs.vie
    #define PRINT_NB_VIE ALL->ecrire_attributs.nb_vie

    #define PRINT_DEGATS ALL->ecrire_attributs.attaque
    #define PRINT_NB_DEGATS ALL->ecrire_attributs.nb_attaque

    #define PRINT_RED_VIE ALL->ecrire_attributs.red_vie
    #define PRINT_NB_RED_VIE ALL->ecrire_attributs.red_nb_vie

    #define PRINT_RED_DEGATS ALL->ecrire_attributs.red_attaque
    #define PRINT_NB_RED_DEGATS ALL->ecrire_attributs.red_nb_attaque

    #define WIN_WIN ALL->window_win.win_window
    #define WIN_MODE ALL->window_win.win_mode
    #define WIN_EVENT ALL->window_win.win_event
    #define WIN_VIEW ALL->window_win.win_view

    #define LOSE_WIN ALL->window_lose.lose_window
    #define LOSE_MODE ALL->window_lose.lose_mode
    #define LOSE_EVENT ALL->window_lose.lose_event
    #define LOSE_VIEW ALL->window_lose.lose_view

    #define BACK_WIN_TEXT ALL->back_win.back_win_texture
    #define BACK_WIN_SPRT ALL->back_win.back_win_sprite
    #define BACK_WIN_SCALE ALL->back_win.back_win_scale

    #define BACK_LOSE_TEXT ALL->back_lose.back_lose_texture
    #define BACK_LOSE_SPRT ALL->back_lose.back_lose_sprite
    #define BACK_LOSE_SCALE ALL->back_lose.back_lose_scale

    #define H_WIN ALL->window_h.h_window
    #define H_MODE ALL->window_h.h_mode
    #define H_EVENT ALL->window_h.h_event
    #define H_VIEW ALL->window_h.h_view

    #define BACK_H_TEXT ALL->back_h.back_h_texture
    #define BACK_H_SPRT ALL->back_h.back_h_sprite
    #define BACK_H_SCALE ALL->back_h.back_h_scale

    #define H_BUTTON_TEXT ALL->exit_h_button.button_texture
    #define H_BUTTON_BUTTON ALL->exit_h_button.button
    #define H_BUTTON_POSITION ALL->exit_h_button.button_position
    #define H_BUTTON_SIZE ALL->exit_h_button.button_size

    #define INVENTAIRE_TEXT ALL->inventaire.inventaire_texture
    #define INVENTAIRE_SPRT ALL->inventaire.inventaire_sprite
    #define INVENTAIRE_SPAWN ALL->inventaire.inventaire_spawn
    #define INVENTAIRE_SCALE ALL->inventaire.inventaire_scale

    #define N CINEMATIC_MODE

#endif /* !DEFINE_H_ */
