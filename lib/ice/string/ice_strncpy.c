/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strncpy.c
*/

void ice_strncpy(char *dest, const char *src, int n)
{
    int i = 0;

    for (; (src[i]) && (i < n) ; i++)
        dest[i] = src[i];

    dest[i] = '\0';
}
