/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_len.c
*/

#include <stdlib.h>

#include "ice/printf/private.h"

bool ice_printf_len(buffer_t *buffer, va_list args)
{
    int *len = va_arg(args, int *);

    ASSERT_RET(IS_NOT_NULL(len), true);

    *len = (int)buffer->len;
    return false;
}
