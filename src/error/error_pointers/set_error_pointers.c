/*
** EPITECH PROJECT, 2021
** set_error_pointers.c
** File description:
** function to set the pf for error handling
*/

#include "sokoban.h"

t_error *set_error_pointers(void)
{
    t_error *p_error = malloc(sizeof(t_error) * (NB_ERR_FUNC + 1));

    if (p_error == NULL)
        return (NULL);
    p_error[BOXS].error_func = &check_box;
    p_error[CHAR].error_func = &check_characters;
    p_error[PLAYERS].error_func = &check_player;
    p_error[STORAGES].error_func = &check_storage;
    p_error[X_O].error_func = &check_x_and_o;
    p_error[ERR_NULL].error_func = NULL;
    return (p_error);
}