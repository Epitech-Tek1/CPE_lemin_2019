/*
** EPITECH PROJECT, 2019
** Minishell Project
** File description:
** By Patrick Eiermann
*/

#include "my.h"

int is_alnum(char c)
{
    if (c == 39)
        return (0);
    if (c < '!' || c > 126)
        return (0);
    else return (1);
}