/*
** EPITECH PROJECT, 2020
** lemin_2019 [WSL: Debian]
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

typedef struct anthill_s
{
    anth_t *anth;
    size_t nanth;
    int ac;
    char **anthill;
    char **startend_room;
    char **av;
} anthill_t;

typedef enum near_room_t {next = 0, past = 1};

typedef struct tunnel_s
{
    char **near_room;
} tunnel_t;


typedef struct lemin_s
{
    anthill_t anthill;
    char *content;
    char **file_tab;
} lemin_t;


#endif /* !STRUCT_H_ */