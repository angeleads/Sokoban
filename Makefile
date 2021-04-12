##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC	=	gcc
LD =	$(CC)

LIB_PATH	=	lib/
COUNT_PATH	=	src/count/
ERROR_PATH	=	src/error/
ERR_PF_PATH	=	$(ERROR_PATH)error_pointers/
GET_PATH	=	src/get/
INIT_PATH	=	src/init/
POPUP_PATH	=	src/popup/
SOKOBAN_PATH	=	src/sokoban/
PRINT_PATH	=	src/print/
MOVE_PATH	=	src/move/
MOVE_PT_PATH	=	src/move/move_pointers/
WIN_LOSE_PATH	=	src/win_or_lose/
TOOLS_PATH	=	src/tools/
TEST_PATH	=	src/test/

NAME	=	my_sokoban

SRC	=	$(TEST_PATH)main.c					\
		$(TEST_PATH)check_args.c			\
		$(ERROR_PATH)check_characters.c		\
		$(ERROR_PATH)check_x_and_o.c    	\
		$(ERROR_PATH)check_player.c			\
		$(ERROR_PATH)check_box.c			\
		$(ERROR_PATH)check_storage.c		\
		$(ERR_PF_PATH)set_error_pointers.c	\
		$(ERR_PF_PATH)check_all_error.c		\
		$(GET_PATH)get_size.c				\
		$(GET_PATH)find_char.c				\
		$(GET_PATH)get_coord.c				\
		$(GET_PATH)get_longstrlen.c			\
		$(MOVE_PATH)move_right.c			\
		$(MOVE_PATH)move_left.c				\
		$(MOVE_PATH)move_up.c				\
		$(MOVE_PATH)move_down.c				\
		$(MOVE_PT_PATH)set_rec_pointers.c	\
		$(MOVE_PT_PATH)set_move_pointers.c	\
		$(MOVE_PT_PATH)set_move.c			\
		$(SOKOBAN_PATH)sokoban.c			\
		$(SOKOBAN_PATH)game_loop.c			\
		$(COUNT_PATH)count_lines.c			\
		$(COUNT_PATH)count_col.c			\
		$(COUNT_PATH)count_boxs.c 			\
		$(COUNT_PATH)count_storage.c		\
		$(TOOLS_PATH)helpfile.c				\
		$(TOOLS_PATH)convert_map.c			\
		$(TOOLS_PATH)read_file.c			\
		$(TOOLS_PATH)print_map.c			\
		$(WIN_LOSE_PATH)check_win.c			\
		$(INIT_PATH)init_struct.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I include/
CFLAGS	+=	-pedantic
CFLAGS	+=	-W -Wall -Wextra
CFLAGS	+=	-Wno-long-long
CFLAGS	+=	-Werror
CFLAGS	+=	-g3

LDLIBS	+=	-L./lib/ -lmy

NCURS +=  -lm -lncurses

all:	$(NAME)

$(NAME):	make_lib $(OBJ)
	$(LD) $(OBJ) -o $(NAME) $(LDLIBS) $(NCURS)

make_lib:
	make -C $(LIB_PATH)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C $(LIB_PATH)

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIB_PATH)

re:	fclean all
	$(MAKE) re -C $(LIB_PATH)