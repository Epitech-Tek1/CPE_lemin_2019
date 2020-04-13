/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "../lib/my/my.h"
#include "../include/lemin.h"

static void init_struct(lem_in_t *lemin)
{
    lemin->content = malloc(sizeof(char) * 4000);
    lemin->content[0] = '\0';
}

static void free_struct(lem_in_t *lemin)
{
    free(lemin->content);
    free(lemin);
}

static int lem_in(int gc, char **gv, lem_in_t *lemin)
{

    if (lemin == NULL)
        return (ERROR_EXIT);
    init_struct(lemin);
    if (parse_file(lemin) == ERROR_EXIT)
        return (ERROR_EXIT);
    if (start_engine(lemin) == ERROR_EXIT)
        return (ERROR_EXIT);
    return (NORMAL_EXIT);
}

int main(int gc, char **gv)
{
    lem_in_t *lemin = malloc(sizeof(lem_in_t));

    int output = lem_in(gc, gv, lemin);
    free_struct(lemin);
    return (output);
}