/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** process_room_distance
*/

#include "lemin.h"

bool process_room_distance(lemin_t *lemin)
{
    size_t *distance = malloc(sizeof(int) * NROOM);

    if (!distance) return (false);
    for (int i = 0; i != NROOM; i++)
        distance[i] = _dist_roth(ROOM_COOR[i], ROOM_COOR[i + 1]);
    return (true);
}