/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strlen.c
*/

#include <stddef.h>

#include "ice/types.h"

ULL ice_strlen(const char *str)
{
    ULL i = 0;

    if (str == NULL)
        return 0;

    for (; str[i] ; i++);

    return i;
}
