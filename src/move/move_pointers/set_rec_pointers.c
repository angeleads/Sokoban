/*
** EPITECH PROJECT, 2021
** set_rec_pointer.c
** File description:
** function to recognize pointers
*/

#include "sokoban.h"

t_pointers *set_rec_pointer(void)
{
    t_pointers *rec_action = malloc(sizeof(t_pointers) * (NB_MOVE_ACTION + 1));

    if (rec_action == NULL)
        return (NULL);
    rec_action[UP].key = MOVE_UP;
    rec_action[DOWN].key = MOVE_DOWN;
    rec_action[RIGHT].key = MOVE_RIGHT;
    rec_action[LEFT].key = MOVE_LEFT;
    rec_action[MOVE_NULL].key = 0;
    return (rec_action);
}