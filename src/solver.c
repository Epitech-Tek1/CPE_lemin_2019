/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** solver
*/

#include "lemin.h"

char *prev_room(lemin_t *lemin, int i)
{
    char *proom = _memalloc(my_strlen(lemin->tunnel.near_room[i]));
    int o = 0;

    for (int j = 0; lemin->tunnel.near_room[i][j] &&
    lemin->tunnel.near_room[i][j] != '-'; j++) {
        proom[o] = lemin->tunnel.near_room[i][j];
        o++;
    }
    return (proom);
}

char *next_room(lemin_t *lemin, int i)
{
    char *nroom = _memalloc(my_strlen(lemin->tunnel.near_room[i]));
    int o = 0;
    int c = 0;
    int m = i;

    for (int n = 0; lemin->tunnel.near_room[m][n] != '-'; n++)
        c++;
    for (int j = c + 1; lemin->tunnel.near_room[i][j] != '\0'; j++) {
        nroom[o] = lemin->tunnel.near_room[i][j];
        o++;
    }
    nroom[o] = '\0';
    return (nroom);
}

char **check_next_start_room(lemin_t *lemin)
{
    lemin->tunnel.path[0] = lemin->anthill.room_name[0];
    for (int i = 0; lemin->tunnel.near_room[i] != NULL; i++) {
        if (_strcmp(lemin->tunnel.path[0], prev_room(lemin, i)) == true) {
            lemin->tunnel.path[1] = next_room(lemin, i);
            return (lemin->tunnel.path);
        }
    }
    return (lemin->tunnel.path);
}

int path_finding(lemin_t *lemin)
{
    int n = 0;
    int p = 0;

    for (int i = 0; ROOM_NAME[i]; i++) {
        if (_strlen(ROOM_NAME[i]) > n) n = i;
    }
    lemin->tunnel.path = malloc(sizeof(char *) * (lemin->anthill.nroom + 3));
    for (int i = 0; lemin->anthill.nroom + 2 != i; i++)
        lemin->tunnel.path[i] = _memalloc(_strlen(ROOM_NAME[n]));
    lemin->tunnel.path = check_next_start_room(lemin);
    for (p = 2; p < lemin->anthill.nroom + 2; p++) {
        for (int i = 0; lemin->tunnel.near_room[i] != NULL; i++) {
            if (_strcmp(lemin->tunnel.path[p - 1], prev_room(lemin, i))) {
                lemin->tunnel.path[p] = next_room(lemin, i);
            }
        }
    }
    lemin->tunnel.path[p] = NULL;
    return (true);
}