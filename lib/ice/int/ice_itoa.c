/*
** EPITECH PROJECT, 2022
** libice/int
** File description:
** ice_itoa.c
*/

#include <stdbool.h>

#include "ice/types.h"

static void strrev_sized(char *buffer, UC i)
{
    char tmp;

    for (short j = 0 ; j <= i / 2 ; j++) {
        tmp = buffer[j];
        buffer[j] = buffer[i - j];
        buffer[i - j] = tmp;
    }
}

void ice_itoa(long long nb, char *buffer)
{
    UC i = 0;
    bool sign = 0;

    if (nb < 0) {
        nb = -nb;
        sign = 1;
    }
    for (; nb >= 10 ; i++) {
        buffer[i] = (char)(48 + nb % 10);
        nb /= 10;
    }
    buffer[i] = (char)(48 + nb % 10);
    if (sign) {
        buffer[i + 1] = '-';
        i++;
    }

    buffer[i + 1] = '\0';
    strrev_sized(buffer, i);
}
