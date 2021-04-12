/*
** EPITECH PROJECT, 2021
** count_storage.c
** File description:
** function to count the number of Os
*/

#include "sokoban.h"

int count_storage(char *str)
{
    int x = 0;
    int counter = 0;

    while (str[x] != '\0') {
        if (str[x] == STORAGE)
            counter++;
        x++;
    }
    return (counter);
}