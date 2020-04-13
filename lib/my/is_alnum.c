/*
** EPITECH PROJECT, 2019
** Minishell Project
** File description:
** By Patrick Eiermann
*/

#include "my.h"

int is_alnum(char c)
{
    if (c == 32)
        return (1);
    if (c < '!' || c > 126)
        return (0);
    else return (1);
}