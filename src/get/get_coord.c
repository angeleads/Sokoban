/*
** EPITECH PROJECT, 2021
** get_coord.c
** File description:
** get the coordinates of the player's position
*/

#include "sokoban.h"

t_player get_coord(t_game *map, char user)
{
    int		x;
    int		y;
    t_player coord;

    y = 0;
    while (map->map_array[y] != NULL) {
        x = 0;
        while (map->map_array[y][x] != '\0') {
            if (map->map_array[y][x] == user) {
                coord.x = x;
                coord.y = y;
            }
            x++;
        }
        y++;
    }
    return (coord);
}