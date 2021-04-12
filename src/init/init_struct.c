/*
** EPITECH PROJECT, 2021
** init_struct.c
** File description:
** function to initialize a structure
*/

#include "sokoban.h"

t_game *init_struct(char *str)
{
    t_game *info = malloc(sizeof(t_game));

    if (info == NULL)
        return (NULL);
    info->size = get_size(str);
    if (!(info->map_str = read_file(str, info->size))) {
        my_putstr_err(WRONG_ARGUMENT);
        return (NULL);
    }
    info->map_array = convert_game(info->map_str);
    info->map_cpy = convert_game(info->map_str);
    if (info->size == ERROR_OUTPUT || info->map_array == NULL)
        return (NULL);
    return (info);
}