/*
** EPITECH PROJECT, 2019
** Minishell Project
** File description:
** By Patrick Eiermann
*/

#include "my.h"

int	word_count_int_tab(char *str)
{
    int i = 0;
    int word = 1;

    while (str != NULL && str[i] != '\0') {
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0)
            word++;
        i++;
    }
    return (word);
}