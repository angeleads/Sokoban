/*
** EPITECH PROJECT, 2021
** read_file.c
** File description:
** function to read the file
*/

#include "sokoban.h"

char *read_file(char *file, int size)
{
    char *buffer = malloc(sizeof(char) * (size + 1));
    int fd = open(file, O_RDONLY);

    if (fd == FAILURE || buffer == NULL) {
        free(buffer);
        return (NULL);
    }
    if (read(fd, buffer, size) == FAILURE) {
        free (buffer);
        return (NULL);
    }
    buffer[size] = '\0';
    if (buffer == NULL || close(fd) == FAILURE)
        return (NULL);
    return (buffer);
}