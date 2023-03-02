/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice/int.h
*/

#ifndef ICE_INT_H
    #define ICE_INT_H

    #include "ice/types.h"

    #define MAX(a, b) ((a) > (b) ? (a) : (b))
    #define MIN(a, b) ((a) < (b) ? (a) : (b))

/**
 * @brief #include "ice/int.h"
 * @param nb The int to get the len.
 * @return Len of the int.
 */
us_t ice_intlen(ll_t nb);

/**
 * @brief #include "ice/int.h"
 * @param nb The int to convert.
 * @param buffer int will be add.
 */
void ice_itoa(ll_t nb, char *buffer);

/**
 * @brief #include "ice/int.h"
 * @param str The str to convert.
 * @return The int extract from the str.
 */
ll_t ice_atoi(const char *str);

#endif /* !ICE_INT_H */
