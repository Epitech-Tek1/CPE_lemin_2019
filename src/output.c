/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** output
*/

#include "lemin.h"

int display_rooms(lemin_t *lemin)
{
    for (int i = 0; lemin->anthill.anthill[i] != NULL; i++)
        _putstr(lemin->anthill.anthill[i], 1);
    return (EXIT_SUCCESS);
}

int display_tunnels(lemin_t *lemin)
{
    for (int i = 0; lemin->tunnel.near_room[i] != NULL; i++)
        _putstr(lemin->tunnel.near_room[i], 1);
    return (EXIT_SUCCESS);
}

int display_output(lemin_t *lemin)
{
    _putstr("#number_of_ants\n", 1);
    _printf("%ld\n", lemin->anthill.nanth);
    _putstr("#rooms\n", 1);
    _putstr("##start\n", 1);
    _putstr(lemin->anthill.startend_room[0], 1);
    _putstr("##end\n", 1);
    _putstr(lemin->anthill.startend_room[1], 1);
    display_rooms(lemin);
    _putstr("#tunnels\n", 1);
    display_tunnels(lemin);
    _putstr("#moves\n", 1);
    return (EXIT_SUCCESS);
}