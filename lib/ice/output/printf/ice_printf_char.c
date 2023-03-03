/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_char.c
*/

#include "ice/printf/printf.h"

bool ice_printf_char(buffer_t *buffer, va_list args)
{
    char c = va_arg(args, int);

    for (ull_t i = 1 ; i < buffer->width ; i++)
        ASSERT_RET(!add_to_buffer(buffer, ' '), true);
    return add_to_buffer(buffer, c);
}
