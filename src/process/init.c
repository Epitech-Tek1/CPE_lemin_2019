/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "lemin.h"

static int _nindex(char *string, char const c, int n)
{
    char *tmp = _memalloc(_strlen(string));

    for (int index = 0; n != index; *++string) {
        if (*string == c) index++;
        if (index == n) break;
    }
    *++string;
    for (int i = 0; string[i] && string[i] != c; i++)
        tmp[i] = string[i];
    return (_atoi(tmp));
}

bool init_room_distance(lemin_t *lemin)
{
    int i = 0;

    for (i = 0; lemin->anthill.anthill[i]; i++);
    NROOM = i;
    if (!(ROOM_COOR = malloc(sizeof(vector2i *) * (NROOM + 2)))) return (false);
    ROOM_COOR[0].x = _nindex(lemin->anthill.startend_room[0], ' ', 1);
    ROOM_COOR[0].y = _nindex(lemin->anthill.startend_room[0], ' ', 2);
    for (int i = 1, n = 0; i != NROOM; i++, n++) {
        ROOM_COOR[i].x = _nindex(lemin->anthill.anthill[n], ' ', 1);
        ROOM_COOR[i].y = _nindex(lemin->anthill.anthill[n], ' ', 2);
    }
    ROOM_COOR[NROOM].x = _nindex(lemin->anthill.startend_room[1], ' ', 1);
    ROOM_COOR[NROOM].y = _nindex(lemin->anthill.startend_room[1], ' ', 2);
    return (true);
}