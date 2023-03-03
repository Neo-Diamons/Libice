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
    char str[100];

    ice_ftoa(va_arg(args, double), str, 6);
    ASSERT_RET(!adds_to_buffer(buffer, str), true);

    return false;
}
