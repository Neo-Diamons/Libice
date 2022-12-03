/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice_strlen.c
*/

int ice_strlen(const char *str)
{
    int i = 0;

    for (; str[i] ; i++);

    return i;
}
