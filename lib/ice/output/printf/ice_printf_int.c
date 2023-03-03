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
    char str[12];

    ice_itoa(va_arg(args, int), str);
    for (int i = 0; str[i] ; i++)
        ASSERT_RET(!add_to_buffer(buffer, str[i]), true);

    return true;
}
