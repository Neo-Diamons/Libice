/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_calloc.c
*/

#include <malloc.h>

#include "ice/assert.h"

void *ice_calloc(ull_t nmemb, ull_t size)
{
    void *ptr = malloc(nmemb * size);

    ASSERT_RET(ptr, NULL);
    for (ull_t i = 0; i < nmemb * size; i++)
        ((char *)ptr)[i] = 0;
    return ptr;
}
