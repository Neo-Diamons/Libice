/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strlen.c
*/

#include <stddef.h>

unsigned long long ice_strlen(const char *str)
{
    unsigned long long i = 0;

    if (str == NULL)
        return 0;

    for (; str[i] ; i++);

    return i;
}
