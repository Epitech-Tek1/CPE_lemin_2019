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

#include "struct.h"
#include "../lib/_maths/include/maths.h"
#include "../lib/_stat/include/stat.h"
#include "../lib/_string/include/string.h"
#include "../lib/my/my.h"

typedef enum {
  FALSE = 0,
  TRUE = 1
} Bool;

int parse_file(lemin_t *lemin);
int start_engine(lemin_t *lemin);
int check_buffer(lemin_t *lemin);

#endif /* LEMIN_H */