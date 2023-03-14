/*
** EPITECH PROJECT, 2023
** libice
** File description:
** assert.h
*/

#ifndef LIBICE_ASSERT_H
    #define LIBICE_ASSERT_H

    #include "ice/output.h"

    #define ASSERT(a, b, c)\
        if (!(a)) {\
            ice_dputs(2, "\e[33m");\
            ice_dputs(2, d);\
            ice_dputs(2, "\e[0m"); \
            return c;\
        }
    #define ASSERT_RET(a, b) if (!(a)) return (b);
    #define ASSERT_VOID(a) if (!(a)) return;

#endif //LIBICE_ASSERT_H
