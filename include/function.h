/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** pour include tout
*/

#ifndef FUNCTION_H
#define FUNCTION_H

int parse_file(lemin_t *lemin);
bool process(lemin_t *lemin);
int check_buffer(lemin_t *lemin);
int get_pos(lemin_t *lemin, char *to_search);

bool init_room_distance(lemin_t *lemin);

#endif /* FUNCTION_H */