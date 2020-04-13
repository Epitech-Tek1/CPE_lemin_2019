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

    for (i = 0; read(0, lemin->content + i, 1) > 0 && i < 4095; i++);
    lemin->content[i] = '\0';
}

static int check_content(lem_in_t *lemin)
{
    if (lemin->content[0] == '\0')
        return (ERROR_EXIT);

    return (NORMAL_EXIT);
}

int parse_file(lem_in_t *lemin)
{
    get_file(lemin);
    my_printf(lemin->content);
    if (check_content(lemin) == ERROR_EXIT)
        return (ERROR_EXIT);
    return (NORMAL_EXIT);
}