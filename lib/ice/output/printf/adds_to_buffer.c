/*
** EPITECH PROJECT, 2023
** libice
** File description:
** adds_to_buffer.c
*/

#include "ice/printf/printf.h"

bool adds_to_buffer(buffer_t *buffer, char *str)
{
    for (int i = 0; str[i] ; i++)
        ASSERT_RET(!add_to_buffer(buffer, str[i]), true);
    return false;
}
