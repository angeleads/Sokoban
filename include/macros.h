/*
** EPITECH PROJECT, 2021
** macros.h
** File description:
** include file for macros
*/

#ifndef MACROS_H_
#define MACROS_H_

/*********OUTPUTS*********/
#define ERROR_OUTPUT 84
#define SUCCESS 1
#define FAILURE -1

/*********ERROR_MESSAGES*********/
#define WRONG_ARGUMENT "Error: Your argument should only be a file\n"
#define INVALID_CHARACTER "ERROR: Invalid characters use, run -h\n"
#define INVALID_NBR_X_O "ERROR: The nbr of Xs should be the same nbr of Os\n"
#define NO_PLAYER "ERROR: There's no player in your map\n"
#define NO_BOX "ERROR: There's no box in your map\n"
#define NO_STORAGE "ERROR: There's no storage in your map\n"
#define ERROR_SIZE "ERROR: Trouble while getting size\n"
#define INVALID_ARGS "ERROR: Invalid arguments\n"
#define EMPTY_BUFFER_OR_INVALID_SIZE "ERROR: Invalid size or empty buffer\n"
#define PROBLEM "ERROR: Problem occured:\n"
#define WIN_MESSAGE "EEY! YOU WON!"

/*********DIMENSSION*********/
#define ROWS 0
#define COLUMNS 0
#define HALF 2

/*********CHARACTERS*********/
#define MAP 1
#define PLAYER 'P'
#define BOX 'X'
#define STORAGE 'O'
#define WALLS '#'
#define END_LINE '\n'
#define SPACE 32
#define MAX_ARGS 2

/*********ERROR_HANDLING*********/
#define NB_ERR_FUNC 5

/*********KEYS*********/
#define MOVE_RIGHT 67
#define MOVE_LEFT 68
#define MOVE_UP 65
#define MOVE_DOWN 66

#define NB_MOVE_ACTION 4

#endif /* !MACROS_H_ */