/*
** EPITECH PROJECT, 2023
** libice/string
** File description:
** ice_strrev.c
*/

#include "ice/string.h"
#include "ice/assert.h"

void ice_strrev(char *str)
{
    ull_t i = 0;
    ull_t j = ice_strlen(str) - 1;

    ASSERT_VOID(str && j != (ull_t)(-1));
    for (; i < j ; i++, j--)
        ice_strswap(str, i, j);
}
