/*
** EPITECH PROJECT, 2021
** set_move.c
** File description:
** set pointer f for movement
*/

#include "sokoban.h"

void set_move(t_game *map, int key)
{
    int x = 0;
    t_pointers *flag_list = set_move_pointers();
    t_pointers *flag_rec = set_rec_pointer();

    if (flag_list == NULL || flag_rec == NULL)
        return;
    while (flag_list[x].move_func != NULL) {
        if (key == flag_rec[x].key)
            flag_list[x].move_func(map);
        x++;
    }
    free(flag_list);
    free(flag_rec);
}