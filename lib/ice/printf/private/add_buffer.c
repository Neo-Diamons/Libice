/*
** EPITECH PROJECT, 2023
** libice
** File description:
** add_to_buffer.c
*/

#include <malloc.h>

#include "ice/macro.h"
#include "ice/printf/struct.h"

static bool realloc_buffer(buffer_t *buffer)
{
    char *new_str = malloc(sizeof(char) * (buffer->len + 1024));

    ASSERT_RET(IS_NOT_NULL(new_str), true);
    buffer->left = 1024;
    for (ull_t i = 0 ; i < buffer->len ; i++)
        new_str[i] = buffer->str[i];
    free(buffer->str);
    buffer->str = new_str;
    return false;
}

bool add_buffer(buffer_t *buffer, char c)
{
    if (buffer->left == 0)
        ASSERT_RET(realloc_buffer(buffer) == false, true);
    buffer->str[buffer->len] = c;
    buffer->len++;
    buffer->left--;
    return false;
}

bool adds_buffer(buffer_t *buffer, char *str)
{
    for (ull_t i = 0; str[i] ; i++)
        ASSERT_RET(!buffer->add(buffer, str[i]), true);
    return false;
}

bool addn_buffer(buffer_t *buffer, char c)
{
    if (buffer->len >= buffer->left) return false;

    buffer->str[buffer->len] = c;
    buffer->len++;
    buffer->left--;

    return false;
}