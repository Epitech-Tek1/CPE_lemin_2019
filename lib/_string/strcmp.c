/*
** EPITECH PROJECT, 2020
** CPE_dante_2019 [WSL: Debian]
** File description:
** strcp
*/

#include "string.h"
#define EQUAL compared[i] == comparing[i]
#define EXIST compared[i] && comparing[i]

bool
_strcmp(const char *restrict comparing, const char *restrict compared)
{
    for (int i = 0; EXIST; i++)
        if (!(EQUAL)) return (false);
    return (true);
}