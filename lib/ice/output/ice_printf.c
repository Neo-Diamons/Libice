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

static void search_flag(buffer_t *buffer, const char *format,
    ull_t i, va_list args)
{
    for (int j = 0; FLAGS[j].flag ; j++) {
        if (format[i] == FLAGS[j].flag) {
            FLAGS[j].func(buffer, args);
            break;
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
        if (format[i] == '%')
            search_flag(&buffer, format, ++i, args);
        else
            add_to_buffer(&buffer, format[i]);
    }
    write(1, buffer.str, buffer.len);
    free(buffer.str);
    va_end(args);
    return i;
}
