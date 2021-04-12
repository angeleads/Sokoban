/*
** EPITECH PROJECT, 2021
** my_popup.c
** File description:
** function to display a string in the middle of a terminal
*/

#include "sokoban.h"

int game_loop(t_game *map)
{
    int key = 0;
    int col = 0;
    int line = 0;
    int x = 0;
    int win = 0;

    if (map->map_array == NULL)
        return (ERROR_OUTPUT);
    initscr();
    while (win != SUCCESS) {
        clear();
        print_game(map, line, col, x);
        refresh();
        key = getch();
        set_move(map, key);
        win = check_win(map->map_str, map->map_array, map->map_cpy);
    }
    endwin();
    return (SUCCESS);
}