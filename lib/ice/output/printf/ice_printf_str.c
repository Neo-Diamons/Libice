/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_str.c
*/

#include "ice/macro.h"
#include "ice/printf/printf.h"

bool ice_printf_str(buffer_t *buffer, va_list args)
{
    char *str = va_arg(args, char *);

    return adds_to_buffer(buffer, str);
}
