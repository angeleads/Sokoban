/*
** EPITECH PROJECT, 2021
** my_arraylen.c
** File description:
** function to get the size of an array
*/

#include "lib.h"

int my_arraylen(char **array)
{
    int y = 0;

    while (array[y] != NULL)
        y++;
    return (y);
}