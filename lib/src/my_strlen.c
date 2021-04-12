/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** function to print length of a string
*/

#include "lib.h"

int my_strlen(char *str)
{
    int x = 0;

    while (str[x] != '\0')
        x++;
    return (x);
}