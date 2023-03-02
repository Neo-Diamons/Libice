/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strlen.c
*/

#include <stddef.h>

#include "ice/macro.h"

ull_t ice_strlen(const char *str)
{
    ull_t i = 0;

    ASSERT_RET(IS_NOT_NULL(str), 0);
    for (; str[i] ; i++);

    return i;
}
