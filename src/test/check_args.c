/*
** EPITECH PROJECT, 2021
** check_args.c
** File description:
** function to check the arguments
*/

#include "sokoban.h"

int check_args(int argc, char **argv)
{
    if (argc != MAX_ARGS) {
        my_putstr_err(INVALID_ARGS);
        return (ERROR_OUTPUT);
    } else if (argv[1][0] == '-' && argv[1][1] == 'h') {
        helpfile();
        return (FAILURE);
    }
    return (SUCCESS);
}