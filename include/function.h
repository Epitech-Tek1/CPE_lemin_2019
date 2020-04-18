/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** pour include tout
*/

#ifndef FUNCTION_H
#define FUNCTION_H

int parse_file(lemin_t *lemin);
int check_buffer(lemin_t *lemin);


/*          process         */
bool process(lemin_t *lemin);
bool init_room_distance(lemin_t *lemin);
bool process_room_distance(lemin_t *lemin);


/*          utils           */
void clear_string(lemin_t *lemin);
int many_space(char *str);
int get_pos_file(lemin_t *lemin);
int get_tunnel(lemin_t *lemin);
int get_pos(lemin_t *lemin, char *to_search);

/*          output         */
int display_output(lemin_t *lemin);

/*          pathfinding         */
int path_finding(lemin_t *lemin);

#endif /* FUNCTION_H */