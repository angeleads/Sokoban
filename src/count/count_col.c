/*
** EPITECH PROJECT, 2021
** count_col.c
** File description:
** function to count nbr of columns
*/

#include "sokoban.h"

int count_col(char *str)
{
    int x = 0;

    while (str[x] != '\n')
        x++;
    return (x);
}