/*
** EPITECH PROJECT, 2021
** move_left.c
** File description:
** function for the player to move to the left
*/

#include "sokoban.h"

t_player move_left(t_game *map)
{
    map->player = get_coord(map, PLAYER);

    if (map->map_array[map->player.y][map->player.x - 1] != BOX &&
        map->map_array[map->player.y][map->player.x - 1] != WALLS) {
            map->map_array[map->player.y][map->player.x] = SPACE;
            map->map_array[map->player.y][map->player.x - 1] = PLAYER;
    } else if (map->map_array[map->player.y][map->player.x - 1] == BOX &&
        map->map_array[map->player.y][map->player.x - 2] != BOX &&
        map->map_array[map->player.y][map->player.x - 2] != WALLS) {
            map->map_array[map->player.y][map->player.x] = SPACE;
            map->map_array[map->player.y][map->player.x - 1] = PLAYER;
            map->map_array[map->player.y][map->player.x - 2] = BOX;
    }
    return (map->player);
}