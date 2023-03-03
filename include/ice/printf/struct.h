/*
** EPITECH PROJECT, 2023
** libice
** File description:
** struct.h
*/

#ifndef LIBICE_STRUCT_H
    #define LIBICE_STRUCT_H

    #include <stdbool.h>

    #include "ice/types.h"

typedef struct buffer_s {
    char *str;
    ull_t left;
    ull_t len;
} buffer_t;

typedef struct flags_s {
    char flag;
    bool (*func)(buffer_t*, va_list);
} flags_t;

#endif //LIBICE_STRUCT_H
