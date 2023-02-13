/*
** EPITECH PROJECT, 2023
** libice/string
** File description:
** ice_strndup.c
*/

#include <stdlib.h>

#include "ice/int.h"
#include "ice/string.h"

char *ice_strndup(const char *str, ULL n)
{
    ULL len = MIN(ice_strlen(str), n);
    char *new = malloc(sizeof(char) * (len + 1));

    if ((new == NULL) || (str == NULL))
        return NULL;

    ice_strncpy(new, str, len);

    return new;
}
