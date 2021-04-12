/*
** EPITECH PROJECT, 2021
** check_player.c
** File description:
** function to check if there's a player
*/

#include "sokoban.h"

int check_player(char *str)
{
    if (my_find_char(str, PLAYER) == FAILURE) {
        my_putstr_err(NO_PLAYER);
        return (FAILURE);
    }
    return (SUCCESS);
}