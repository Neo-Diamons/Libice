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

    #define FLAG_HASH 0b00000001
    #define FLAG_ZERO 0b00000010
    #define FLAG_MINUS 0b00000100
    #define FLAG_SPACE 0b00001000
    #define FLAG_PLUS 0b00010000

typedef struct buffer_s {
    char *str;
    ull_t left;
    ull_t len;
    uc_t flags;
} buffer_t;

typedef struct conversion_s {
    char conversion;
    bool (*func)(buffer_t*, va_list);
} conversion_t;

//typedef struct flag_s {
//    bool hash;
//    enum {NO_PAD, ZERO, MINUS} zero_minus;
//    enum {NO_SIGN, SPACE, PLUS} space_plus;
//} flag_t;

#endif //LIBICE_STRUCT_H
