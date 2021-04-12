/*
** EPITECH PROJECT, 2021
** sokoban.h
** File description:
** sokoban include file
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

#include "../lib/include/lib.h"
#include "macros.h"
#include "struct.h"
#include <curses.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*************TEST*************/
int check_args(int argc, char **argv);

/*************HELPFILE*************/
void helpfile(void);

/*************READ*************/
char *read_file(char *file, int size);

/*************CONVERT*************/
char **convert_game(char *str);

/*************COUNT*************/
int count_lines(char *str);
int count_col(char *str);
int count_boxes(char *str);
int count_storage(char *str);

/*************ERROR*************/
int check_characters(char *str);
int check_x_and_o(char *str);
int check_player(char *str);
int check_box(char *str);
int check_storage(char *str);
int error_handling(char *str);

t_error *set_error_pointers(void);
t_error *set_rec_error(void);
int check_all_error(char *);

/*************GET*************/
int get_size(char *file);
int my_char_is_in_str(char *str, char c);
int my_find_char(char *str, char c);
char **get_array(char *str);
t_player get_coord(t_game *map, char);
int get_longstrlen(char **map);

void put_storage(t_game *map);

/*************SOKOBAN*************/
int sokoban(char *file);

/*************INIT*************/
t_game *init_struct(char *str);

/*************POPUP*************/
int game_loop(t_game *map);

/*************PRINT*************/
void print_game(t_game *map, int line, int col, int x);
void print_win(char *str);

/*************MOVE*************/
t_player move_right(t_game *map);
t_player move_left(t_game *map);
t_player move_up(t_game *map);
t_player move_down(t_game *map);

t_pointers *set_move_pointers(void);
t_pointers *set_rec_pointer(void);
void set_move(t_game *map, int key);

/*************WIN OR LOSE*************/
int check_win(char *str, char **map, char **map_cpy);

#endif /* !SOKOBAN_H_ */
