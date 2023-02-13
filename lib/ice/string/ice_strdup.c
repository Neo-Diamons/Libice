/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_strdup.c
*/

#include <stdlib.h>

#include "ice/string.h"

char *ice_strdup(const char *str)
{
    char *new = malloc(sizeof(char) * (ice_strlen(str) + 1));

    if ((new == NULL) || (str == NULL))
        return NULL;

    ice_strcpy(new, str);

    return new;
}
