/*
** EPITECH PROJECT, 2023
** libice
** File description:
** printf.h
*/

#ifndef LIBICE_PRINTF_H
    #define LIBICE_PRINTF_H

    #include "ice/types.h"

/**
 * @brief Print in the stdout.
 * @param format that will be printed.
 * @param ... that will be printed.
 * @return The len of the str.
 */
ull_t ice_printf(const char *format, ...);

#endif /* !LIBICE_PRINTF_H */
