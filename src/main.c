/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "lemin.h"

static void init_struct(lemin_t *lemin)
{
    lemin->content = malloc(sizeof(char) * 4000);
    lemin->content[0] = '\0';
}

static void free_struct(lemin_t *lemin)
{
    int tab_len = my_tablen(lemin->file_tab);

    free(lemin->content);
    for (int i = tab_len; i != 0; --i)
        free(lemin->file_tab[i]);
    free(lemin->file_tab);
    free(lemin);
}

static int lem_in(int gc, char **gv, lemin_t *lemin)
{
    if (lemin == NULL)
        return (ERROR_EXIT);
    init_struct(lemin);
    if (parse_file(lemin) == ERROR_EXIT)
        return (ERROR_EXIT);
    if (!process(lemin))
        return (ERROR_EXIT);
    return (NORMAL_EXIT);
}

int main(int gc, char **gv)
{
    lemin_t *lemin = malloc(sizeof(lemin_t));

    int output = lem_in(gc, gv, lemin);
    if (output == 84)
        for (int i = 0; lemin->file_tab[i]; i++)
            my_printf("%s\n", lemin->file_tab[i]);
    else display_output(lemin);
    free_struct(lemin);
    return (output);
}