/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_int.c
*/

#include "ice/int.h"
#include "ice/printf/printf.h"

bool ice_printf_int(buffer_t *buffer, va_list args)
{
    int nb = va_arg(args, int);
    char str[12];

    if (nb >= 0) {
        if (buffer->flags & FLAG_SPACE)
            ASSERT_RET(!add_buffer(buffer, ' '), true);
        if (buffer->flags & FLAG_PLUS)
            ASSERT_RET(!add_buffer(buffer, '+'), true);
    }

    ice_itoa(nb, str);
    ASSERT_RET(!add_signed_width(buffer, str), true);

    return false;
}
