/*
** EPITECH PROJECT, 2021
** sokoban.c
** File description:
** main function of the sokoban
*/

#include "sokoban.h"

int sokoban(char *file)
{
    t_game *info = init_struct(file);

    if (info == NULL || check_all_error(info->map_str) == ERROR_OUTPUT)
        return (ERROR_OUTPUT);
    game_loop(info);
    return (SUCCESS);
}