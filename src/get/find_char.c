/*
** EPITECH PROJECT, 2021
** find_char.c
** File description:
** function to find a character
*/

#include "sokoban.h"

int my_char_is_in_str(char *str, char c)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] == c)
            return (SUCCESS);
        x++;
    }
    return (FAILURE);
}

int my_find_char(char *str, char c)
{
    return (my_char_is_in_str(str, c));
}