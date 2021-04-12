/*
** EPITECH PROJECT, 2021
** check_win.c
** File description:
** function to check if the player won
*/

#include "sokoban.h"
#include <stdio.h>

int check_win(char *str, char **map, char **map_cpy)
{
    int x = 0;
    int y = 0;
    int nb_boxs = count_boxes(str);
    int boxe = 0;

    while (map[y] != NULL) {
        x = 0;
        while (map[y][x] != '\0') {
            if (map[y][x] == BOX && map_cpy[y][x] == STORAGE)
                boxe++;
            x++;
        }
        y++;
    }
    if (boxe == nb_boxs)
        return (SUCCESS);
    return (FAILURE);
}