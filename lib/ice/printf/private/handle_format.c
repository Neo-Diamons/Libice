/*
** EPITECH PROJECT, 2023
** libice
** File description:
** handle_format.c
*/

#include "ice/printf/private.h"

void handle_format(buffer_t *buffer, const char *format, va_list args)
{
    ull_t i = 0;
    ull_t *p = &i;

    for (; format[i] ; i++)
        if (format[i] == '%') {
            i++;
            get_flags(buffer, format, p);
            get_width(buffer, format, p, args);
            get_precision(buffer, format, p, args);
            get_conversion(buffer, format[i], args);
        } else
            add_buffer(buffer, format[i]);
}
