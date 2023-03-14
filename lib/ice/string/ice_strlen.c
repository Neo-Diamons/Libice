/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strlen.c
*/

#include "ice/assert.h"

ull_t ice_strlen(const char *str)
{
    ull_t i = 0;

    ASSERT_RET(str, 0);
    for (; str[i]; i++);
    return i;
}
