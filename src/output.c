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
        my_printf(lemin->anthill.anthill[i], 1);
    return (EXIT_SUCCESS);
}

int display_tunnels(lemin_t *lemin)
{
    for (int i = 0; lemin->tunnel.near_room[i] != NULL; i++)
        my_printf(lemin->tunnel.near_room[i], 1);
    return (EXIT_SUCCESS);
}

int display_output(lemin_t *lemin)
{
    my_printf("#number_of_ants\n", 1);
    my_printf("%ld\n", lemin->anthill.nanth);
    my_printf("#rooms\n", 1);
    my_printf("##start\n", 1);
    my_printf(lemin->anthill.startend_room[0], 1);
    my_printf("##end\n", 1);
    my_printf(lemin->anthill.startend_room[1], 1);
    display_rooms(lemin);
    my_printf("#tunnels\n", 1);
    display_tunnels(lemin);
    my_printf("#moves\n", 1);
    return (EXIT_SUCCESS);
}