/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_sprintf.c
*/

#include <malloc.h>
#include <unistd.h>

#include "ice/printf/private.h"

ull_t ice_asprintf(char **restrict str, const char *restrict format, ...)
{
    va_list args;
    buffer_t buffer = {0};

    if (IS_NULL(str) || IS_NULL(format)) {
        *str = NULL;
        return (ull_t) (-1);
    }
    buffer.str = malloc(sizeof(char) * 1024);
    buffer.left = 1024;

    va_start(args, format);
    ASSERT_RET(!handle_format(&buffer, format, args), (ull_t)(-1));
    ASSERT_RET(!add_buffer(&buffer, '\0'), (ull_t)(-1));
    va_end(args);

    *str = buffer.len != (ull_t)(-1) ? buffer.str : NULL;

    return buffer.len;
}
