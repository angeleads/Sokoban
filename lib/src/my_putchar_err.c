/*
** EPITECH PROJECT, 2021
** my_putchar_err
** File description:
** function print character error ouput
*/

#include "lib.h"

void my_putchar_err(char c)
{
    write(2, &c, 1);
}