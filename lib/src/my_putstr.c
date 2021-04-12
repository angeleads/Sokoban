/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** print a string
*/

#include "lib.h"

void my_putstr(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x++;
    }
}