/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_memcmp.c
*/

#include <stdlib.h>

#include "ice/macro.h"

int ice_memcmp(const void *s1, const void *s2, ull_t n)
{
    ASSERT_RET(IS_NOT_NULL(s1), 0);
    ASSERT_RET(IS_NOT_NULL(s2), 0);
    for (ull_t i = 0 ; i < n ; i++)
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
    return 0;
}