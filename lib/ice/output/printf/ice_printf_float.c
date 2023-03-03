/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_float.c
*/

#include "ice/int.h"
#include "ice/printf/printf.h"

bool ice_printf_float(buffer_t *buffer, va_list args)
{
    double nb = va_arg(args, double);
    char str[100];

    if (nb >= 0) {
        if (buffer->flags & FLAG_SPACE)
            ASSERT_RET(!add_to_buffer(buffer, ' '), true);
        if (buffer->flags & FLAG_PLUS)
            ASSERT_RET(!add_to_buffer(buffer, '+'), true);
    }

    ice_ftoa(nb, str, 6);
    ASSERT_RET(!add_signed_width(buffer, str), true);

    return false;
}
