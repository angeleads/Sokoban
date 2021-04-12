/*
** EPITECH PROJECT, 2021
** set_move_pointer.c
** File description:
** function to set the function pointers for movment
*/

#include "sokoban.h"

t_pointers *set_move_pointers(void)
{
    t_pointers *p_function = malloc(sizeof(t_pointers) * (NB_MOVE_ACTION + 1));

    if (p_function == NULL)
        return (NULL);
    p_function[UP].move_func = &move_up;
    p_function[DOWN].move_func = &move_down;
    p_function[RIGHT].move_func = &move_right;
    p_function[LEFT].move_func = &move_left;
    p_function[MOVE_NULL].move_func = NULL;
    return (p_function);
}