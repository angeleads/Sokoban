/*
** EPITECH PROJECT, 2021
** get_size.c
** File description:
** function to get the size of a file
*/

#include "sokoban.h"

int get_size(char *file)
{
    struct stat sb;

    if (stat(file, &sb) == FAILURE) {
        my_putstr_err(ERROR_SIZE);
        return (ERROR_OUTPUT);
    }
    return (sb.st_size);
}