/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice_perror.c
*/

#include <unistd.h>
#include "ice/string.h"

int ice_perror(const char *str)
{
    return write(2, str, ice_strlen(str));
}
