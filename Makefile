##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Task01
##

SOURCE_DIR = src/

SRC	=	my_rpg.c		\
		init_struct.c 		\
		entite_red.c 	\
		my_fonction.c 	\
		init_map.c 	\
		move_slime.c 	\
		make_menu.c 	\
		init_button.c 	\
		init_menu.c 	\
		init_interieur.c 	\
		move_house.c 	\
		mini_map.c 	\
		coin.c 	\
		burn_tree.c 	\
		init_music.c 	\
		init_marchand.c 	\
		button_e.c 	\
		shop.c 	\
		init_shop.c 	\
		button_shop.c 	\
		shop_button_etat.c 	\
		modif_etat_button.c 	\
		payer_shop.c 	\
		do_payer_shop.c 	\
		display.c	\
		my_putchar.c	\
		my_putstr.c 	\
		init_fight.c 	\
		fight_display.c 	\
		fight_action.c 	\
		init_fight_button.c 	\
		fight_deroulement.c 	\
		red_attack.c 	\
		init_finish_screen.c 	\
		finish_screen.c 	\
		init_h.c	\
		init_inventaire.c

OBJ	=	$(addprefix $(SOURCE_DIR), $(SRC:.c=.o))

NAME	=	my_rpg

CPPFLAGS = -I ./include

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CPPFLAGS) $(CSFML)

clean:
	find -name "#*#" -delete -o -name "*~" -delete
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
