/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "lemin.h"
#include "../lib/my/my.h"

void clear_string(lemin_t *lemin)
{
    for (int i = 0; lemin->file_tab[i] != NULL; i++) {
        for (int j = 0; lemin->file_tab[i][j] != '\0'; j++) {
            if (lemin->file_tab[i][j] == '#' && lemin->file_tab[i][0] != '#') {
                lemin->file_tab[i][j - 1] = '\0';
                break;
            }
        }
    }
}

int many_space(char *str)
{
    int res = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            res++;
    }
    return (res);
}

int get_pos_file(lemin_t *lemin)
{
    int j = 0;
    
    lemin->anthill.anthill = malloc(sizeof(char * ) * 200);
    for (int i = 1 ; lemin->file_tab[i] != NULL; i++) {
        if (my_strcmp("##start", lemin->file_tab[i - 1]) == 0)
            i++;
        if (my_strcmp("##end", lemin->file_tab[i - 1]) == 0)
            i++;
        if (many_space(lemin->file_tab[i]) == 2) {
            lemin->anthill.anthill[j] = malloc(sizeof(char) * 100);
            lemin->anthill.anthill[j] = my_strcat_nf(lemin->tunnel.near_room[j], lemin->file_tab[i]);
            printf("room = %s\n", lemin->file_tab[i]);
            j++;
        }
    }
    printf("%d\n", j);
    lemin->anthill.anthill[j] = NULL;
}

int get_tunnel(lemin_t *lemin)
{
    int j = 0;

    lemin->tunnel.near_room = malloc(sizeof(char *) * 20);
    for (int i = 1 ; lemin->file_tab[i] != NULL; i++) {
        if (lemin->file_tab[i][0] == '#')
            i++;
        if (many_space(lemin->file_tab[i]) == 0) {
            lemin->tunnel.near_room[j] = lemin->file_tab[i];
            j++;
        }
    }
    lemin->tunnel.near_room[j] = NULL;
}

int get_pos(lemin_t *lemin, char *to_search)
{
    int i;

    for (i = 0; my_strcmp(lemin->file_tab[i], to_search) != 0; i++);
    return (i);
}