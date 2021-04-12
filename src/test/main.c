/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function for sokoban
*/

#include "../include/sokoban.h"

int main(int argc, char **argv)
{
    if (check_args(argc, argv) == ERROR_OUTPUT)
        return (ERROR_OUTPUT);
    return (sokoban(argv[MAP]));
}