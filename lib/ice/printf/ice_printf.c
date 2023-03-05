/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf.c
*/

#include <malloc.h>
#include <unistd.h>

#include "ice/printf/private.h"

ull_t ice_printf(const char *restrict format, ...)
{
    va_list args;
    buffer_t buffer = {0};
    ull_t len;

    ASSERT_RET(IS_NOT_NULL(format), (ull_t)(-1));
    buffer.str = malloc(sizeof(char) * 1024);
    buffer.left = 1024;
    buffer.add = add_buffer;

    va_start(args, format);
    ASSERT_RET(!handle_format(&buffer, format, args), (ull_t)(-1));
    va_end(args);

    len = write(1, buffer.str, buffer.len);
    free(buffer.str);

    return len;
}
