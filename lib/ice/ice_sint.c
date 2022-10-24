/*
** EPITECH PROJECT, 2022
** ice_sint
** File description:
** ice sint
*/

#include <stdio.h>
#include <stdlib.h>

char *ice_sint(int nb)
{
    int i = 1;
    int neg = 0;
    int len = 0;
    char *str = 0;
    if (nb < 0) {
        nb *= -1;
        neg++;
    }
    for (; i <= nb ; i *= 10)
        len++;
    str = malloc(sizeof(char) * (len + neg));
    str[i] = '\0';
    for (i = len - 1 ; 0 <= i ; i--) {
        str[i + neg] = 48 + nb % 10;
        nb /= 10;
    }
    if (neg) {
        str[0] = '-';
    }
    return str;
}
