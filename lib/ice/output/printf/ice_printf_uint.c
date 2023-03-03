/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_uint.c
*/

#include "ice/int.h"
#include "ice/printf/printf.h"

bool ice_printf_uint(buffer_t *buffer, va_list args)
{
    char str[12];

    ice_utoa(va_arg(args, unsigned int), str);
    for (int i = 0; str[i] ; i++)
        ASSERT_RET(!add_to_buffer(buffer, str[i]), true);

    return true;
}
