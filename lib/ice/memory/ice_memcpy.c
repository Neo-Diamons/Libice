/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_memcpy.c
*/

#include <stdlib.h>

#include "ice/assert.h"

void *ice_memcpy(void *dest, const void *src, ull_t n)
{
    ASSERT_RET(dest, NULL)
    ASSERT_RET(src, NULL)
    for (ull_t i = 0 ; i < n ; i++)
        ((char *)dest)[i] = ((char *)src)[i];
    return dest;
}
