/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice_putstr.c
*/

#include <unistd.h>
#include "ice/string.h"

int ice_puts(const char *str)
{
    return write(1, str, ice_strlen(str));
}
