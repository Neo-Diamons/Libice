/*
** EPITECH PROJECT, 2023
** libice
** File description:
** ice_printf_str.c
*/

#include <stdlib.h>

#include "ice/macro.h"
#include "ice/string.h"
#include "ice/assert.h"
#include "ice/printf/private.h"

bool ice_printf_str(buffer_t *buffer, va_list args)
{
    char *str = va_arg(args, char *);

    if (IS_NULL(str)) {
        str = "(null)";
        buffer->prec = (ull_t)(-1);
    }
    if (buffer->prec != (ull_t)(-1))
        str = ice_strndup(str, buffer->prec);
    ASSERT_RET(IS_NOT_NULL(str), true);
    ASSERT_RET(!add_width(buffer, str), true);
    if (buffer->prec != (ull_t)(-1))
        free(str);
    return false;
}
