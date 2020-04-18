/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat_nf(char *str1, char *str2)
{
    char *ret = malloc(my_strlen(str1) + my_strlen(str2) + 1);
    char *tmp = ret;

    if (ret == NULL) {
        free(ret);
        return (NULL);
    }
    while (str1 && *str1) {
        *tmp = *str1++;
        tmp++;
    }
    while (str2 && *str2) {
        *tmp = *str2++;
        tmp++;
    }
    *tmp = '\0';
    return (ret);
}

char *my_strcat(char *str1, char *str2)
{
    int i = 0;
    int i2 = 0;

    if (str1 == NULL) return (NULL);
    while (str1[i]) i++;
    while (str2[i2]) {
        str1[i] = str2[i2];
        i++;
        i2++;
    }
    str1[i] = '\0';
    return (str1);
}

char *my_strncat_nf(char *str1, char *cpy, int size)
{
    char *ret = malloc(my_strlen(str1) + size + 1);
    char *tmp = ret;

    if (ret == NULL) {
        free(ret);
        return (NULL);
    }
    while (str1 && *str1) {
        *tmp = *str1++;
        tmp++;
    }
    for (int i = 0; i < size; ++i) {
        *tmp = *cpy++;
        tmp++;
    }
    *tmp = '\0';
    return (ret);
}

char *my_strncat(char *str1, char *cpy, int size)
{
    char *ret = my_strncat_nf(str1, cpy, size);

    freeif(str1);
    freeif(cpy);
    return (ret);
}
