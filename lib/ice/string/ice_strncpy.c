/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strncpy.c
*/

#include "ice/types.h"

void ice_strncpy(char *dest, const char *src, ULL n)
{
    ULL i = 0;

    for (; (src[i]) && (i < n) ; i++)
        dest[i] = src[i];

    dest[i] = '\0';
}
