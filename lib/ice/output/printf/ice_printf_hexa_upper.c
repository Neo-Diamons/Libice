/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_hexa_upper.c
*/

#include "ice/int.h"
#include "ice/printf/printf.h"

bool ice_printf_hexa_upper(buffer_t *buffer, va_list args)
{
    char str[100];

    if (buffer->flags & FLAG_HASH)
        ASSERT_RET(!adds_buffer(buffer, "0X"), true);

    ice_btoa(va_arg(args, unsigned int), str, "0123456789ABCDEF");
    ASSERT_RET(!add_unsigned_width(buffer, str), true);

    return false;
}
