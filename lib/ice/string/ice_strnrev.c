/*
** EPITECH PROJECT, 2023
** libice/string
** File description:
** ice_strnrev.c
*/

#include <stddef.h>

#include "ice/assert.h"
#include "ice/string.h"

void ice_strnrev(char *str, ull_t n)
{
    ull_t i = 0;
    ull_t j = n;

    ASSERT_VOID(str && ice_strlen(str) >= n);
    for (; i < j; i++, j--)
        ice_strswap(str, i, j);
}
