/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** include file for structures
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct player_s {
    int x;
    int y;
} t_player;

typedef struct game_s {
    char *map_str;
    char **map_array;
    char **map_cpy;
    t_player player;
    int size;
} t_game;

typedef enum count_move {
    UP = 0,
    DOWN = 1,
    RIGHT = 2,
    LEFT = 3,
    MOVE_NULL,
} t_count_move;

typedef struct pointers_s {
    t_player(*move_func)(t_game *map);
    int key;
} t_pointers;

typedef enum count_err {
    BOXS = 0,
    CHAR = 1,
    PLAYERS = 2,
    STORAGES = 3,
    X_O = 4,
    ERR_NULL = 5,
} t_count_err;

typedef struct error_s {
    int(*error_func)(char *str);
    int output;
} t_error;

#endif /* !STRUCT_H_ */