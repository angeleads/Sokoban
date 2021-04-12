/*
** EPITECH PROJECT, 2021
** check_all_errors.c
** File description:
** function to check all errors
*/

#include "sokoban.h"

int check_func(int(*error_func)(char *str), char *map)
{
    return (error_func(map));
}

int check_all_error(char *map)
{
    int x = 0;
    t_error *flag_list = set_error_pointers();

    if (flag_list == NULL)
        return (ERROR_OUTPUT);
    while (flag_list[x].error_func != NULL) {
        if (flag_list[x].error_func(map) == FAILURE)
            return (ERROR_OUTPUT);
        x++;
    }
    return (SUCCESS);
}