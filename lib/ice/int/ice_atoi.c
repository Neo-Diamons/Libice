/*
** EPITECH PROJECT, 2022
** libice/int
** File description:
** ice_atoi.c
*/

long long ice_atoi(const char *str)
{
    int i = 0;
    long long nb = 0;
    int signe = 1;

    for (; (str[i] == '+') || (str[i] == '-') ; i++)
        if (str[i] == '-')
            signe *= -1;
    for (; ('0' <= str[i]) && (str[i] <= '9') ; i++)
        nb = nb * 10 + str[i] - 48;
    nb *= signe;

    return nb;
}
