/*
** EPITECH PROJECT, 2021
** print_array.c
** File description:
** function to print an array
*/

#include "lib.h"

void print_array(char **array)
{
    int y = 0;

    while (array[y] != NULL) {
        my_putstr(array[y]);
        y++;
    }
}