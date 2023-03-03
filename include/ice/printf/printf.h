/*
** EPITECH PROJECT, 2023
** libice
** File description:
** printf.h
*/

#ifndef LIBICE_PRINTF_H
    #define LIBICE_PRINTF_H

    #include <stdarg.h>
    #include <stdbool.h>

    #include "ice/macro.h"
    #include "ice/printf/struct.h"

bool add_to_buffer(buffer_t *buffer, char c);

bool ice_printf_char(buffer_t *buffer, va_list args);

bool ice_printf_str(buffer_t *buffer, va_list args);

bool ice_printf_percent(buffer_t *buffer, va_list UNUSED(args));

bool ice_printf_int(buffer_t *buffer, va_list args);

bool ice_printf_uint(buffer_t *buffer, va_list args);

bool ice_printf_binary(buffer_t *buffer, va_list args);

bool ice_printf_octal(buffer_t *buffer, va_list args);

bool ice_printf_hexa(buffer_t *buffer, va_list args);

bool ice_printf_hexa_upper(buffer_t *buffer, va_list args);

bool ice_printf_ptr(buffer_t *buffer, va_list args);

#endif /* !LIBICE_PRINTF_H */
