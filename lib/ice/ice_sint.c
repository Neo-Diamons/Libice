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
    int len = 0;
    char *str = 0;

    for (; i < nb ; i *= 10) {
        len++;
    }
    str = malloc(sizeof(char) * len);
    str[i] = '\0';
    for (i = len - 1 ; 0 <= i ; i--) {
        str[i] = 48 + nb % 10;
        nb /= 10;
    }

    return str;
}
