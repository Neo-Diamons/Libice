/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_memset.c
*/

#include <stdlib.h>

#include "ice/assert.h"

void *ice_memset(void *s, int c, ull_t n)
{
    ASSERT_RET(s, NULL)
    for (ull_t i = 0 ; i < n ; i++)
        ((char *)s)[i] = (char)c;
    return s;
}
