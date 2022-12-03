/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice_strncat.c
*/

#include "ice/string.h"

void ice_strncat(char *dest, const char *src, int n)
{
    ice_strncpy((dest + ice_strlen(dest)), src, n);
}
