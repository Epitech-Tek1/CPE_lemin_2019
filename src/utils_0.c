/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "lemin.h"

void clear_string(lemin_t *lemin)
{
    for (int i = 0; lemin->file_tab[i] != NULL; i++) {
        for (int j = 0; lemin->file_tab[i][j] != '\0'; j++) {
            if (lemin->file_tab[i][0] == '#') {
                i++;
                break;
            }
            printf("%c\n", lemin->file_tab[i][j]);
            if (lemin->file_tab[i][j] == "#") {
                my_printf("result here = %s\n",lemin->file_tab[i]);
                lemin->file_tab[i][j] = '\0';
                break;
            }
        }
        my_printf("here is = %s\n",lemin->file_tab[i]);
    }
}

int many_space(char *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == '\0') {
            res--;
            break;
        }
        if (str[i] == ' ')
            res++;
    }
    //printf("res = %d\n", res);
    return (res);
}

int get_pos_file(lemin_t *lemin)
{
    int j = 0;

    lemin->anthill.anthill = malloc(sizeof(char *) * 20);
    for (int i = 1 ; lemin->file_tab[i] != NULL; i++) {
        if (my_strcmp(lemin->file_tab[i - 1], "##start") == 0 || my_strcmp(lemin->file_tab[i - 1], "##end") == 0)
            i++;
        if (lemin->file_tab[i][0] == '#')
            i++;
        if (many_space(lemin->file_tab[i]) == 2) {
            lemin->anthill.anthill[j] = lemin->file_tab[i];
            //printf("content = %s\n", lemin->anthill.anthill[j]);
            j++;
        }
    }
    lemin->anthill.anthill[j] = NULL;
}

int get_tunnel(lemin_t *lemin)
{

}

int get_pos(lemin_t *lemin, char *to_search)
{
    int i;

    for (i = 0; my_strcmp(lemin->file_tab[i], to_search) != 0; i++);
    return (i);
}