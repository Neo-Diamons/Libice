/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_snprintf.c
*/

#include <stdlib.h>

#include "ice/assert.h"
#include "ice/printf/private.h"

ull_t ice_snprintf(char *str, ull_t n, const char *format, ...)
{
    va_list args;
    buffer_t buffer = {0};

    ASSERT_RET(str != NULL && format != NULL, (ull_t)(-1));
    buffer.str = str;
    buffer.left = n;
    buffer.add = addn_buffer;
    va_start(args, format);
    ASSERT_RET(!handle_format(&buffer, format, args), (ull_t)(-1));
    va_end(args);
    buffer.str[buffer.len] = '\0';
    return buffer.len;
}
