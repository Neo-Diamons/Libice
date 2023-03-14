/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_memchr.c
*/

#include <stdlib.h>

#include "ice/assert.h"

void *ice_memchr(const void *s, int c, ull_t n)
{
    ASSERT_RET(s, NULL)
    for (ull_t i = 0 ; i < n ; i++)
        if (((char *)s)[i] == c)
            return (void *)&((char *)s)[i];
    return NULL;
}
