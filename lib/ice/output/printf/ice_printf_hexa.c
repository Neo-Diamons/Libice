/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_hexa.c
*/

#include "ice/int.h"
#include "ice/printf/printf.h"

bool ice_printf_hexa(buffer_t *buffer, va_list args)
{
    char str[100];

    if (buffer->flags & FLAG_HASH)
        ASSERT_RET(!adds_to_buffer(buffer, "0x"), true);

    ice_btoa(va_arg(args, unsigned int), str, "0123456789abcdef");
    ASSERT_RET(!adds_to_buffer(buffer, str), true);

    return false;
}
