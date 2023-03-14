/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_float.c
*/

#include "ice/int.h"
#include "ice/assert.h"
#include "ice/printf/private.h"

bool ice_printf_float(buffer_t *buffer, va_list args)
{
    double nb = va_arg(args, double);
    char str[100];

    if (nb >= 0) {
        if (buffer->flags & FLAG_SPACE)
            ASSERT_RET(!buffer->add(buffer, ' '), true)
        if (buffer->flags & FLAG_PLUS)
            ASSERT_RET(!buffer->add(buffer, '+'), true)
    }

    if (buffer->prec == (ull_t)(-1))
        buffer->prec = 6;
    ice_ftoa(nb, str, (int)buffer->prec);
    ASSERT_RET(!add_signed_width(buffer, str), true)

    return false;
}
