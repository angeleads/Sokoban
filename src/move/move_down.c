/*
** EPITECH PROJECT, 2021
** move_up.c
** File description:
** function to move up
*/

#include "sokoban.h"

t_player move_down(t_game *map)
{
    map->player = get_coord(map, PLAYER);

    if (map->map_array[map->player.y + 1][map->player.x] != BOX &&
        map->map_array[map->player.y + 1][map->player.x] != WALLS) {
            map->map_array[map->player.y][map->player.x] = SPACE;
            map->map_array[map->player.y + 1][map->player.x] = PLAYER;
    } else if (map->map_array[map->player.y + 1][map->player.x] == BOX &&
        map->map_array[map->player.y + 2][map->player.x] != BOX &&
        map->map_array[map->player.y + 2][map->player.x] != WALLS) {
            map->map_array[map->player.y][map->player.x] = SPACE;
            map->map_array[map->player.y + 1][map->player.x] = PLAYER;
            map->map_array[map->player.y + 2][map->player.x] = BOX;
    }
    return (map->player);
}