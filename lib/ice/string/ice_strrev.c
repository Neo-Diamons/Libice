/*
** EPITECH PROJECT, 2023
** libice/string
** File description:
** ice_strrev.c
*/

#include <stddef.h>

#include "ice/macro.h"
#include "ice/types.h"
#include "ice/string.h"

void ice_strrev(char *str)
{
    ull_t i = 0;
    ull_t j = ice_strlen(str) - 1;

    ASSERT(IS_NOT_NULL(str) && j != (ull_t)(-1));
    for (; i < j ; i++, j--)
        ice_strswap(str, i, j);
}
