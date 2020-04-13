/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** pour include tout
*/

#ifndef LEMIN_H
#define LEMIN_H

#define ERROR_EXIT 84
#define NORMAL_EXIT 0

typedef struct lem_in_s
{
    char *buffer;
} lem_in_t;

int parse_file(lem_in_t *lemin);
int start_engine(lem_in_t *lemin);

#endif /* LEMIN_H */