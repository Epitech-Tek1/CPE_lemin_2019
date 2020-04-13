/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include "lemin.h"

static bool (*process_fct[])(lemin_t *) =
{

};

bool process(lemin_t *lemin)
{
    for (int i = 0; process_fct[i]; i++)
        if (!process_fct[i](lemin)) return (false);
    return (true);  
}