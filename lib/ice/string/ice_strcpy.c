/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice_strcpy.c
*/

void ice_strcpy(char *dest, const char *src)
{
    int i = 0;

    for (; src[i] ; i++)
        dest[i] = src[i];

    dest[i] = '\0';
}
