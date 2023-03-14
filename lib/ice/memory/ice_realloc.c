/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_realloc.c
*/

#include <stdlib.h>

#include "ice/assert.h"

void *ice_realloc(void *ptr, ull_t size)
{
    ull_t i = 0;
    void *new_ptr = NULL;

    ASSERT_RET(ptr, NULL);
    ASSERT_RET(size, NULL);
    new_ptr = malloc(size);
    ASSERT_RET(new_ptr, NULL);
    for (; ((char *)ptr)[i]; i++)
        ((char *)new_ptr)[i] = ((char *)ptr)[i];
    ((char *)new_ptr)[i] = '\0';
    free(ptr);
    return new_ptr;
}