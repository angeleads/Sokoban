/*
** EPITECH PROJECT, 2021
** check_box.c
** File description:
** function to check the boxes
*/

#include "sokoban.h"

int check_box(char *str)
{
    if ((my_find_char(str, BOX) == FAILURE)) {
        my_putstr_err(NO_BOX);
        return (FAILURE);
    }
    return (SUCCESS);
}