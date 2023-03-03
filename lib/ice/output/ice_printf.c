/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf.c
*/

#include <malloc.h>
#include <unistd.h>

#include "ice/printf/printf.h"

ull_t ice_printf(const char *format, ...)
{
    va_list args;
    buffer_t buffer = {0};
    ull_t len;

    buffer.str = malloc(sizeof(char) * 1024);
    buffer.left = 1024;

    va_start(args, format);
    handle_format(&buffer, format, args);
    va_end(args);

    len = write(1, buffer.str, buffer.len);
    free(buffer.str);

    return len;
}
