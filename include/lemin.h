/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** pour include tout
*/

#ifndef LEMIN_H
#define LEMIN_H

#define ERROR_EXIT 84
#define NORMAL_EXIT 0

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#include "struct.h"
#include "function.h"
#include "../lib/_maths/include/maths.h"
#include "../lib/_stat/include/stat.h"
#include "../lib/_string/include/string.h"
#include "../lib/my/my.h"

typedef enum {
  FALSE = 0,
  TRUE = 1
} Bool;

#endif /* LEMIN_H */