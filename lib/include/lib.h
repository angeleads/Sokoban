/*
** EPITECH PROJECT, 2021
** lib.h
** File description:
** include file for library
*/

#ifndef LIB_H_
#define LIB_H_

#include <unistd.h>
#include <stdlib.h>

int my_arraylen(char **array);
void my_putchar(char c);
void my_putchar_err(char c);
void my_putstr(char *str);
void my_putstr_err(char *str);
int my_strlen(char *str);
void print_array(char **array);
char **my_str_to_word_array(char car, char *str);

#endif /* !LIB_H_ */
