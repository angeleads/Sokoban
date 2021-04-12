/*
** EPITECH PROJECT, 2021
** convert_game.c
** File description:
** function to convert map
*/

#include "sokoban.h"

char **convert_game(char *str)
{
    char **array = my_str_to_word_array('\n', str);
    return (array);
}