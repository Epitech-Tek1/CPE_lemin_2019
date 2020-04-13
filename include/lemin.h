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

typedef enum {
  FALSE = 0,
  TRUE = 1
} Bool;

typedef struct lem_in_s
{
    char *content;
} lem_in_t;

int parse_file(lem_in_t *lemin);
int start_engine(lem_in_t *lemin);
int check_buffer(lem_in_t *lemin);

#endif /* LEMIN_H */