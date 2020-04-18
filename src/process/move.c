/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** move
*/

#include "lemin.h"
#define OUT lemin->anthill.output

static char *rm_rf(char *string)
{
    char *tmp = _memalloc(500);
    int i = 0;
    int n = 0;

    for (i = 0; string[i]; i++)
        if (string[i] || string[i - 1] != ' ') break;
    for (n = 0; string[i]; n++, i++)
        tmp[n] = string[i];
    tmp[n + 1] = '\0';
    return (tmp);
}

static void rm_first_occ(lemin_t *lemin, char *move, int i)
{
    if (i != 1) move = my_strcat(move, " ");
    move = my_strcat(move, "P");
    move = my_strcat(move, my_itoa(i, 10));
    move = my_strcat(move, "-");
    move = my_strcat(move, lemin->tunnel.path[1]);
}

static int npath(lemin_t *lemin, char **path)
{
    int i = 0;

    for (i = 0; i != NROOM; i++); return (i);
}

bool move(lemin_t *lemin)
{
    char **move = malloc(sizeof(char *) * 500);
    int i = 1;
    int n = 0;

    for (i = 1, n = 0; i != lemin->anthill.nanth + 2; i++, n++) {
        move[i] = _memalloc(500);
        if (i > 1) {
            if (i < lemin->anthill.nanth + 1) rm_first_occ(lemin, move[i], i);
            if (i != lemin->anthill.nanth + 2)
                move[i] = my_strcat(move[i - 1], move[i]);
            if (n >= npath(lemin, lemin->tunnel.path)) move[i] = rm_rf(move[i]);
        } else rm_first_occ(lemin, move[i], i);
        my_printf("%s\n", move[i]);
    }
    move[i - 1] = rm_rf(move[i - 1]);
    my_printf("%s\n", move[i - 1]);
}