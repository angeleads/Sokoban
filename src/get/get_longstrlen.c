/*
** EPITECH PROJECT, 2021
** get_longstrlen.c
** File description:
** function to get the length of the longest string
*/

#include "sokoban.h"

int get_longstrlen(char **map)
{
    int x = 0;
    int counter;
    int lines;

    while (map[counter] != NULL) {
        x = my_strlen(map[counter]);
        if (x > lines)
            lines = x;
        counter++;
    }
    return (counter);
}