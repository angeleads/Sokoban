/*
** EPITECH PROJECT, 2021
** check_x_and_o.c
** File description:
** function to check if the number of Xs is the same as Os
*/

#include "sokoban.h"

int check_x_and_o(char *str)
{
    int x = count_boxes(str);
    int o = count_storage(str);
    int a = 0;

    while (str[a] != '\0') {
        if (x != o) {
            my_putstr_err(INVALID_NBR_X_O);
            return (FAILURE);
        }
        a++;
    }
    return (SUCCESS);
}