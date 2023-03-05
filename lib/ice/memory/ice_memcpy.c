/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_memcpy.c
*/

#include <stdlib.h>

#include "ice/macro.h"

void *ice_memcpy(void *dest, const void *src, ull_t n)
{
    ASSERT_RET(IS_NOT_NULL(dest), NULL);
    ASSERT_RET(IS_NOT_NULL(src), NULL);
    for (ull_t i = 0 ; i < n ; i++)
        ((char *)dest)[i] = ((char *)src)[i];
    return dest;
}
