/*
** EPITECH PROJECT, 2023
** libice
** File description:
** add_width.c
*/

#include "ice/string.h"
#include "ice/assert.h"
#include "ice/printf/private.h"

static bool add_width_len(buffer_t *buffer, ull_t len, char c)
{
    for (ull_t i = len ; i < buffer->width ; i++)
        ASSERT_RET(!buffer->add(buffer, c), true)
    return false;
}

bool add_unsigned_width(buffer_t *buffer, char *str)
{
    ull_t len = ice_strlen(str);
    ull_t width_len;

    if (buffer->flags & FLAG_HASH) len += 2;

    width_len = buffer->prec != (ull_t) (-1) ? MAX(len, buffer->prec) : len;
    if (!(buffer->flags & FLAG_MINUS)) {
        if (buffer->flags & FLAG_ZERO) {
            ASSERT_RET(!add_width_len(buffer, width_len, '0'), true)
        } else
        ASSERT_RET(!add_width_len(buffer, width_len, ' '), true)
    }
    if (buffer->prec != (ull_t)(-1))
        for (; len < buffer->prec ; len++)
            ASSERT_RET(!buffer->add(buffer, '0'), true);
    ASSERT_RET(!adds_buffer(buffer, str), true);
    if (buffer->flags & FLAG_MINUS)
        ASSERT_RET(!add_width_len(buffer, width_len, ' '), true)
    return false;
}

bool add_signed_width(buffer_t *buffer, char *str)
{
    ull_t len = ice_strlen(str);
    ull_t width_len;

    if (buffer->flags & FLAG_SPACE || buffer->flags & FLAG_PLUS) len++;

    width_len = buffer->prec != (ull_t) (-1) ? MAX(len, buffer->prec) : len;
    if (!(buffer->flags & FLAG_MINUS)) {
        if (buffer->flags & FLAG_ZERO) {
            ASSERT_RET(!add_width_len(buffer, width_len, '0'), true)
        } else
            ASSERT_RET(!add_width_len(buffer, width_len, ' '), true)
    }
    if (buffer->prec != (ull_t)(-1))
        for (; len < buffer->prec ; len++)
            ASSERT_RET(!buffer->add(buffer, '0'), true);
    ASSERT_RET(!adds_buffer(buffer, str), true);
    if (buffer->flags & FLAG_MINUS)
        ASSERT_RET(!add_width_len(buffer, width_len, ' '), true)
    return false;
}

bool add_width(buffer_t *buffer, char *str)
{
    ull_t len = ice_strlen(str);

    if (!(buffer->flags & FLAG_MINUS))
        ASSERT_RET(!add_width_len(buffer, len, ' '), true)
    ASSERT_RET(!adds_buffer(buffer, str), true);
    if (buffer->flags & FLAG_MINUS)
        ASSERT_RET(!add_width_len(buffer, len, ' '), true)
    return false;
}
