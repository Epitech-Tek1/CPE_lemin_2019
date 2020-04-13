/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "../lib/my/my.h"
#include "../include/lemin.h"

static int parse_begin(lemin_t *lemin)
{
    lemin->file_tab = malloc((word_count_int_tab(lemin->content) + 1) * sizeof(char *));
    if (lemin->file_tab == NULL) {
        return (84);
    }
    return (0);
}

static int parse_file_to_tab(lemin_t *lemin)
{
    int j = 0;
    int i = -1;
    int len = 0;

    if (parse_begin(lemin) == 84)
        return (84);
    while (lemin->file_tab != NULL && lemin->content != NULL && lemin->content[++i] != '\0') {
        if (is_alnum(lemin->content[i]))
            len++;
        if (is_alnum(lemin->content[i]) == 1 && is_alnum(lemin->content[i + 1]) == 0) {
            if ((lemin->file_tab[j] = malloc((len + 1) * sizeof(char))) == 0)
                return (84);
            my_strncpy(lemin->file_tab[j], &lemin->content[i - len + 1], len);
            len = 0;
            j++;
        }
    }
    lemin->file_tab[j] = NULL;
    return (0);
}

int check_buffer(lemin_t *lemin)
{
    if (parse_file_to_tab(lemin) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    for (int i = 0; lemin->file_tab[i] != NULL; i++)
        my_printf("content = %s\n", lemin->file_tab[i]);
    return (TRUE);
}