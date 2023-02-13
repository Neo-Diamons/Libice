/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice/int.h
*/

#ifndef ICE_INT_H
    #define ICE_INT_H

    #define MAX(a, b) ((a) > (b) ? (a) : (b))
    #define MIN(a, b) ((a) < (b) ? (a) : (b))

/**
 * @brief #include "ice/int.h"
 * @param nb that will be printed.
 * @param base that will be printed.
 * @return Len of the int.
 */
int ice_intlen(long long nb);

/**
 * @brief #include "ice/int.h"
 * @param nb that will be printed.
 * @param buffer int will be add.
 * @return Nothing.
 */
void ice_itoa(long long nb, char *buffer);

/**
 * @brief #include "ice/int.h"
 * @param str that will be analysed.
 * @return The int extract from the str.
 */
long long ice_atoi(const char *str);

#endif /* !ICE_INT_H */
