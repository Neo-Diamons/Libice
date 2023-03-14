/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_array_len.c
*/

#include "ice/assert.h"

ull_t ice_array_len(void **array)
{
    ull_t i = 0;

    ASSERT_RET(array, 0);
    for (; ((char **)array)[i]; i++);
    return i;
}
