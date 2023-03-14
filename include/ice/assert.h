/*
** EPITECH PROJECT, 2023
** libice
** File description:
** assert.h
*/

#ifndef LIBICE_ASSERT_H
    #define LIBICE_ASSERT_H

    #include "ice/output.h"

    #define ASSERT_RET(a, b) if (!(a)) return (b)
    #define ASSERT_VOID(a) if (!(a)) return

#endif /* !LIBICE_ASSERT_H */
