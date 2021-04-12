/*
** EPITECH PROJECT, 2021
** check_storage.c
** File description:
** function to check the storage
*/

#include "sokoban.h"

int check_storage(char *str)
{
    if (my_find_char(str, STORAGE) == FAILURE) {
        my_putstr_err(NO_STORAGE);
        return (FAILURE);
    }
    return (SUCCESS);
}