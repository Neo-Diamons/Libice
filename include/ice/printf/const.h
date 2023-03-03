/*
** EPITECH PROJECT, 2023
** libice
** File description:
** const.h
*/

#ifndef LIBICE_CONST_H
    #define LIBICE_CONST_H

    #include "ice/printf/printf.h"

const flags_t FLAGS[] = {
    {'d', ice_printf_int},
    {'i', ice_printf_int},
    {'u', ice_printf_uint},
    {'o', ice_printf_octal},
    {'x', ice_printf_hexa},
    {'X', ice_printf_hexa_upper},
    {'c', ice_printf_char},
    {'s', ice_printf_str},
    {'p', ice_printf_ptr},
    {'b', ice_printf_binary},
    {'%', ice_printf_percent},
    {'n', ice_printf_len},
    {'\0', NULL}
};

#endif //LIBICE_CONST_H
