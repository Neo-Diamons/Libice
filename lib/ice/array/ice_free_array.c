/*
** EPITECH PROJECT, 2023
** libice
** File description:
** free_array.c
*/

#include <stdlib.h>

#include "ice/assert.h"

void ice_free_array(void **array)
{
    ASSERT_VOID(array);
    for (ull_t i = 0; array[i]; i++)
        free(array[i]);
    free(array);
}
