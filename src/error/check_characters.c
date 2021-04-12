/*
** EPITECH PROJECT, 2021
** check_characters.c
** File description:
** function to check the right characters are used
*/

#include "sokoban.h"

int check_characters(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] != SPACE && str[x] != WALLS && str[x] != BOX
            && str[x] != STORAGE && str[x] != PLAYER && str[x] != END_LINE) {
                my_putstr_err(INVALID_CHARACTER);
                return (FAILURE);
        }
        x++;
    }
    return (SUCCESS);
}