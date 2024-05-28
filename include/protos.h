/*
** EPITECH PROJECT, 2023
** projet_rpg
** File description:
** protos
*/

#ifndef PROTOS_H_
    #define PROTOS_H_

    int my_putchar(char c);
    int my_putstr(const char* str);
    void init_window(GLOBAL_T *ALL);
    void init_map(GLOBAL_T *ALL);
    void init_slime(GLOBAL_T *ALL);
    void timer(void);
    void analyse_events(GLOBAL_T *ALL);
    void display_window(GLOBAL_T *ALL);
    int display_menu(GLOBAL_T *ALL);
    void init_grass(GLOBAL_T *ALL);
    void init_perspective(GLOBAL_T *ALL);
    void init_red(GLOBAL_T *ALL);
    void move_red(GLOBAL_T *ALL);
    void move_slime(GLOBAL_T *ALL);
    int menu(void);
    int boucle_analyse_menu_events(GLOBAL_T *ALL);
    void init_resume_button(GLOBAL_T *ALL);
    void init_quit_button(GLOBAL_T *ALL);
    void init_back_menu(GLOBAL_T *ALL);
    void init_menu(GLOBAL_T *ALL);
    void init_window_menu(GLOBAL_T *ALL);
    void init_eclaboussure(GLOBAL_T *ALL);
    void init_eclaboussures(GLOBAL_T *ALL);
    void init_maison(GLOBAL_T *ALL);
    void move_house(GLOBAL_T *ALL);
    void init_shop(GLOBAL_T *ALL);
    void zoom_map(GLOBAL_T *ALL);
    void display_coin(GLOBAL_T *ALL);
    void init_coin(GLOBAL_T *ALL);
    void modif_burn_tree(GLOBAL_T *ALL);
    void init_burn_tree(GLOBAL_T *ALL);
    void init_music_partie(GLOBAL_T *ALL);
    void init_music_porte(GLOBAL_T *ALL);
    void cours_music_partie(GLOBAL_T *ALL);
    void init_marchand(GLOBAL_T *ALL);
    void init_button_e(GLOBAL_T *ALL);
    void talk_png(GLOBAL_T *ALL);
    void init_shop_window(GLOBAL_T *ALL);
    void display_shop(GLOBAL_T *ALL);
    void action_shop(GLOBAL_T *ALL);
    void init_back_shop(GLOBAL_T *ALL);
    void init_shop_sprite(GLOBAL_T *ALL);
    void init_shop_blue(GLOBAL_T *ALL);
    void init_shop_black(GLOBAL_T *ALL);
    void init_shop_yellow(GLOBAL_T *ALL);
    void init_shop_purple(GLOBAL_T *ALL);
    void init_shop_rainbow(GLOBAL_T *ALL);
    void init_etat_button(GLOBAL_T *ALL);
    void modif_etat_button(GLOBAL_T *ALL);
    void modif_etat_button_blue(GLOBAL_T *ALL);
    void modif_etat_button_black(GLOBAL_T *ALL);
    void modif_etat_button_yellow(GLOBAL_T *ALL);
    void modif_etat_button_purple(GLOBAL_T *ALL);
    void modif_etat_button_rainbow(GLOBAL_T *ALL);
    void payer_blue(GLOBAL_T *ALL);
    void payer_black(GLOBAL_T *ALL);
    void payer_yellow(GLOBAL_T *ALL);
    void payer_rainbow(GLOBAL_T *ALL);
    void payer(GLOBAL_T *ALL);
    void do_payer_blue(GLOBAL_T *ALL);
    void do_payer_black(GLOBAL_T *ALL);
    void do_payer_yellow(GLOBAL_T *ALL);
    void do_payer_rainbow(GLOBAL_T *ALL);
    void loot_coin(GLOBAL_T *ALL);
    void init_shop_ecriture(GLOBAL_T *ALL);
    void init_fight_background(GLOBAL_T *ALL);
    void init_window_fight(GLOBAL_T *ALL);
    void action_fight(GLOBAL_T *ALL);
    void display_fight(GLOBAL_T *ALL);
    void init_ennemie(GLOBAL_T *ALL);
    void init_hero(GLOBAL_T *ALL);
    void init_music_fight(GLOBAL_T *ALL);
    void init_camea_button(GLOBAL_T *ALL);
    void init_sword_button(GLOBAL_T *ALL);
    void sword_attack(GLOBAL_T *ALL);
    void init_window_cinematic(GLOBAL_T *ALL);
    void camea_attack(GLOBAL_T *ALL);
    void red_attack(GLOBAL_T *ALL);
    void condition_yellow(GLOBAL_T *ALL);
    void condition_rainbow(GLOBAL_T *ALL);
    void init_fight_ecriture(GLOBAL_T *ALL);
    void init_ennemie_fight_ecriture(GLOBAL_T *ALL);
    void init_back_win(GLOBAL_T *ALL);
    void init_back_lose(GLOBAL_T *ALL);
    void display_win_screen(GLOBAL_T *ALL);
    void display_lose_screen(GLOBAL_T *ALL);
    void cours_music_fight(GLOBAL_T *ALL);
    void init_h_background(GLOBAL_T *ALL);
    void init_h(GLOBAL_T *ALL);
    void display_h(GLOBAL_T *ALL);
    void init_h_exit_button(GLOBAL_T *ALL);
    void init_inventaire(GLOBAL_T *ALL);
    void display_do_sprite(GLOBAL_T *ALL);

#endif /* !PROTOS_H_ */
