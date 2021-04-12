/*
** EPITECH PROJECT, 2021
** print_game.c
** File description:
** function to print map
*/

#include "sokoban.h"

void replace_storage(t_game *map, int x, int y)
{
    if (map->map_cpy[y][x] == STORAGE && map->map_array[y][x] == SPACE)
            map->map_array[y][x] = STORAGE;
}

void put_storage(t_game *map)
{
    int x = 0;
    int y = 0;

    while (map->map_cpy[y] != NULL) {
        x = 0;
        while (map->map_array[y][x] != '\0') {
            replace_storage(map, x, y);
            x++;
        }
        y++;
    }
}

void print_game(t_game *map, int line, int col, int x)
{
    getmaxyx(stdscr, line, col);
    put_storage(map);
    while (map->map_array[x] != NULL) {
        mvprintw((line - my_arraylen(map->map_array)) / HALF + x,
        ((col - my_strlen(map->map_array[x])) / HALF), map->map_array[x]);
        x++;
    }
}

void print_win(char *str)
{
    int size = my_strlen(str);
    int line = 0;
    int col = 0;

    getmaxyx(stdscr, line, col);
    mvprintw(line / HALF, (col - size) / HALF, str);
}