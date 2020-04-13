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

typedef struct tunnel_s
{
    char **near_room;
} tunnel_t;

typedef struct anthill_s
{
    anth_t *anth;
    size_t nanth;
    int ac;
<<<<<<< HEAD
    char **anthill;
    tunnel_t *tunnel;
=======
    char **anthill; // room ni en dessous de start ou de end
>>>>>>> 3d89e71c68b1c6be3790df6e3f13d7a76ab36c87
    char **startend_room;
    char **av;
} anthill_t;

<<<<<<< HEAD
=======
typedef struct tunnel_s
{
    char **near_room; // la je mais les tunnels
} tunnel_t;


>>>>>>> 3d89e71c68b1c6be3790df6e3f13d7a76ab36c87
typedef struct lemin_s
{
    anthill_t anthill;
    anthill_t tunnel;
    char *content;
    char **file_tab;
} lemin_t;


#endif /* !STRUCT_H_ */