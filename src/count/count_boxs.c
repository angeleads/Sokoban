/*
** EPITECH PROJECT, 2021
** count_boxs.c
** File description:
** function to count the nbr of boxes
*/

#include "sokoban.h"

int count_boxes(char *str)
{
    int x = 0;
    int counter = 0;

    while (str[x] != '\0') {
        if (str[x] == BOX)
            counter++;
        x++;
    }
    return (counter);
}