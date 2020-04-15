/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "lemin.h"

static int get_file(lemin_t *lemin)
{
    int i;
 
    for (i = 0; read(0, lemin->content + i, 1) > 0 && i < 5000; i++);
    lemin->content[i] = '\0';
    printf("%s\n", lemin->content);
    return (NORMAL_EXIT);
}

static int check_content(lemin_t *lemin)
{
    if (lemin->content[0] == '\0')
        return (ERROR_EXIT);
    if (check_buffer(lemin) == FALSE)
        return (ERROR_EXIT);
    return (NORMAL_EXIT);
}

int parse_file(lemin_t *lemin)
{
    get_file(lemin);
    if (check_content(lemin) == ERROR_EXIT)
        return (ERROR_EXIT);
    return (NORMAL_EXIT);
}