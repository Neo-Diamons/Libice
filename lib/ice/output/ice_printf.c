/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf.c
*/

#include <stdarg.h>
#include <malloc.h>
#include <unistd.h>

#include "ice/types.h"
#include "ice/printf/const.h"

static void search_conversion(buffer_t *buffer, const char *format,
    ull_t *i, va_list args)
{
    for (; format[*i] ; (*i)++) {
        switch (format[*i]) {
            case '#': buffer->flags |= FLAG_HASH; continue;
            case '0': buffer->flags |= FLAG_ZERO; continue;
            case '-': buffer->flags |= FLAG_MINUS; continue;
            case ' ': buffer->flags |= FLAG_SPACE; continue;
            case '+': buffer->flags |= FLAG_PLUS; continue;
        }

        if (buffer->flags & FLAG_ZERO && buffer->flags & FLAG_MINUS)
            buffer->flags &= ~FLAG_ZERO;
        if (buffer->flags & FLAG_SPACE && buffer->flags & FLAG_PLUS)
            buffer->flags &= ~FLAG_SPACE;

        buffer->width = 0;
        if ('0' < format[*i] && format[*i] <= '9') {
            for (; '0' <= format[*i] && format[*i] <= '9'; (*i)++)
                buffer->width = buffer->width * 10 + format[*i] - '0';
        }

        buffer->precision = -1;
        if (format[*i] == '.') {
            buffer->precision = 0;
            (*i)++;
            for (; '0' <= format[*i] && format[*i] <= '9'; (*i)++)
                buffer->precision = buffer->precision * 10 + format[*i] - '0';
        }

        for (int k = 0; conversion[k].conversion; k++) {
            if (format[*i] == conversion[k].conversion) {
                conversion[k].func(buffer, args);
                return;
            }
        }
    }
}

ull_t ice_printf(const char *format, ...)
{
    va_list args;
    ull_t i = 0;
    buffer_t buffer = {0};

    buffer.str = malloc(sizeof(char) * 1024);
    buffer.left = 1024;
    va_start(args, format);
    for (; format[i] ; i++) {
        if (format[i] == '%') {
            i++;
            search_conversion(&buffer, format, &i, args);
        } else
            add_to_buffer(&buffer, format[i]);
    }
    write(1, buffer.str, buffer.len);
    free(buffer.str);
    va_end(args);
    return i;
}
