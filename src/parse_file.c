/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "../lib/my/my.h"
#include "../include/lemin.h"

static void *get_file(lem_in_t *lemin)
{
    int i;

    for (i = 0; read(0, lemin->buffer + i, 1) > 0 && i < 4095; i++);
    lemin->buffer[i] = '\0';
}

int parse_file(lem_in_t *lemin)
{
    get_file(lemin);
    my_printf(lemin->buffer);
    return (NORMAL_EXIT);
}