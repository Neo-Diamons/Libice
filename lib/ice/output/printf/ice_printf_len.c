/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_len.c
*/

#include "ice/printf/printf.h"

bool ice_printf_len(buffer_t *buffer, va_list args)
{
    int *len = va_arg(args, int *);

    *len = (int)buffer->len;
    return false;
}