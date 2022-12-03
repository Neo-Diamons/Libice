/*
** EPITECH PROJECT, 2022
** libice/int
** File description:
** ice_intlen.c
*/

int ice_intlen(long long nb)
{
    int i = 0;

    if (nb < 0) {
        nb = -nb;
        i++;
    }
    for (; nb >= 10 ; i++)
        nb /= 10;

    return i++;
}
