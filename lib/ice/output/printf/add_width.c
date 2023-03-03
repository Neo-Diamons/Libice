/*
** EPITECH PROJECT, 2023
** libice
** File description:
** add_width.c
*/

#include "ice/string.h"
#include "ice/printf/printf.h"

static bool add_width_len(buffer_t *buffer, ull_t len, char c)
{
    for (ull_t i = len ; i < buffer->width ; i++)
        ASSERT_RET(!add_to_buffer(buffer, c), true);
    return false;
}

bool add_unsigned_width(buffer_t *buffer, char *str)
{
    ull_t len = ice_strlen(str);

    if (buffer->flags & FLAG_HASH) len += 2;

    if (!(buffer->flags & FLAG_MINUS)) {
        if (buffer->flags & FLAG_ZERO) {
            ASSERT_RET(!add_width_len(buffer, len, '0'), true);
        } else
        ASSERT_RET(!add_width_len(buffer, len, ' '), true);
    }
    ASSERT_RET(!adds_to_buffer(buffer, str), true);
    if (buffer->flags & FLAG_MINUS)
        ASSERT_RET(!add_width_len(buffer, len, ' '), true);
    return false;
}

bool add_signed_width(buffer_t *buffer, char *str)
{
    ull_t len = ice_strlen(str);

    if (buffer->flags & FLAG_SPACE || buffer->flags & FLAG_PLUS) len++;

    if (!(buffer->flags & FLAG_MINUS)) {
        if (buffer->flags & FLAG_ZERO) {
            ASSERT_RET(!add_width_len(buffer, len, '0'), true);
        } else
            ASSERT_RET(!add_width_len(buffer, len, ' '), true);
    }
    ASSERT_RET(!adds_to_buffer(buffer, str), true);
    if (buffer->flags & FLAG_MINUS)
        ASSERT_RET(!add_width_len(buffer, len, ' '), true);
    return false;
}

bool add_width(buffer_t *buffer, char *str)
{
    ull_t len = ice_strlen(str);

    if (!(buffer->flags & FLAG_MINUS))
        ASSERT_RET(!add_width_len(buffer, len, ' '), true);
    ASSERT_RET(!adds_to_buffer(buffer, str), true);
    if (buffer->flags & FLAG_MINUS)
        ASSERT_RET(!add_width_len(buffer, len, ' '), true);
    return false;
}
