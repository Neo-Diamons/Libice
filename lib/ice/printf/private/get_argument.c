/*
** EPITECH PROJECT, 2023
** libice
** File description:
** get_argument.c
*/

#include "ice/printf/const.h"

void get_flags(buffer_t *buffer, const char *format, ull_t *i)
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

        return;
    }
}

void get_width(buffer_t *buffer, const char *format, ull_t *i, va_list args)
{
    if (format[*i] == '*') {
        buffer->width = va_arg(args, int);
        return;
    }

    buffer->width = 0;
    if ('0' >= format[*i] || format[*i] > '9') return;
    for (; '0' <= format[*i] && format[*i] <= '9'; (*i)++)
        buffer->width = buffer->width * 10 + format[*i] - '0';
}

void get_precision(buffer_t *buffer, const char *format, ull_t *i, va_list args)
{
    buffer->prec = -1;
    if (format[*i] != '.') return;
    (*i)++;

    if (format[*i] == '*') {
        buffer->prec = va_arg(args, int);
        return;
    }

    buffer->prec = 0;
    if ('0' > format[*i] || format[*i] > '9') return;
    for (; '0' <= format[*i] && format[*i] <= '9'; (*i)++)
        buffer->prec = buffer->prec * 10 + format[*i] - '0';
}

void get_conversion(buffer_t *buffer, char c, va_list args)
{
    for (int k = 0; conversion[k].conversion; k++) {
        if (c != conversion[k].conversion) continue;

        conversion[k].func(buffer, args);
        return;
    }
}
