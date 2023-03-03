/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_ptr.c
*/

#include "ice/int.h"
#include "ice/printf/printf.h"

bool ice_printf_ptr(buffer_t *buffer, va_list args)
{
    char str[12];

    ASSERT_RET(!adds_to_buffer(buffer, "0x"), true);

    ice_btoa(va_arg(args, unsigned int), str, "0123456789abcdef");
    ASSERT_RET(!adds_to_buffer(buffer, str), true);

    return false;
}
