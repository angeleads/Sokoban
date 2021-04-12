/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** function to split a string with specified character
*/

#include "lib.h"

int check_space(char *str, int i, char car)
{
    while (str[i] == car)
        i++;
    return (i);
}

char **my_str_to_word_array(char car, char *str)
{
    int length = my_strlen(str);
    char **arr = malloc(sizeof(char *) * (length + 2));
    int i = 0;
    int j = 0;
    int x = 0;

    arr[0] =  malloc(sizeof(char) * (length + 1));
    if (arr == NULL || arr[0] == NULL)
        return (NULL);
    i = check_space(str, i, car);
    while (str[i] != '\0') {
        if (str[i] == car) {
            j++;
            i++;
            x = 0;
            arr[j] = malloc(sizeof(char) * (length + 1));
            i = check_space(str, i, car);
        } else {
            arr[j][x] = str[i];
            x++;
            i++;
        } arr[j][x] = '\0';
    }
    arr[j + 1] = NULL;
    return (arr);
}