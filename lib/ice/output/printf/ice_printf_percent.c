/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_percent.c
*/

#include "ice/printf/printf.h"

bool ice_printf_percent(buffer_t *buffer, va_list UNUSED(args))
{
    return add_to_buffer(buffer, '%');
}
