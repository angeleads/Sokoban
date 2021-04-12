/*
** EPITECH PROJECT, 2021
** helpfile
** File description:
** function used if help is needed
*/

#include "sokoban.h"

void helpfile(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representing the warehouse map, containing '#'\n");
    my_putstr("\tfor walls, 'P' for the player, 'X' for boxes and 'O' for\n");
    my_putstr("\tstorage locations.\n");
}