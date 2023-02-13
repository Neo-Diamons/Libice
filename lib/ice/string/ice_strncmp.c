/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strcmp.c
*/

#include "ice/types.h"

char ice_strncmp(const char* str1, const char* str2, ULL n)
{
    ULL i = 0;

    for (; (str1[i]) && (i < n) ; i++) {
        if (str1[i] < str2[i])
            return (char)(str1[i] - str2[i]);
        if (str1[i] > str2[i])
            return (char)(str1[i] - str2[i]);
    }

    if (str1[i] == str2[i])
        return 0;

    return (char)(-str2[i]);
}
