/*
** EPITECH PROJECT, 2021
** count_col.c
** File description:
** function to count the nbr of columns
*/

#include "sokoban.h"

int count_lines(char *str)
{
    int x = 0;
    int count = 0;

    while (str[x] != '\0') {
        if (str[x] == '\n')
            count++;
        x++;
    }
    return (count);
}