/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019 [WSL: Debian]
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct anth_s
{
    char *anthman;
    char *position;
} anth_t;

typedef struct tunnel_s
{
    char **near_room;
} tunnel_t;

typedef struct anthill_s
{
    anth_t *anth;
    size_t nanth;
    int ac;
    int nroom;
    char **anthill;
    char **startend_room;
    char **av;
    vector2i *room_coordinates;
} anthill_t;

typedef struct lemin_s
{
    anthill_t anthill;
    tunnel_t tunnel;
    char *content;
    char **file_tab;
} lemin_t;

#endif /* !STRUCT_H_ */