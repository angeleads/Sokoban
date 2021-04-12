/*
** EPITECH PROJECT, 2021
** my_putstr_err.c
** File description:
** function to print a string in error output
*/

#include "lib.h"

void my_putstr_err(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar_err(str[x]);
        x++;
    }
}