/*
** EPITECH PROJECT, 2022
** ice_getnbr
** File description:
** ice getnbr
*/

int ice_getnbr(char *str)
{
    int i = 0;
    int nb = 0;
    int signe = 1;
    int lenmax = 0;
    long nbmax = 0;

    for (; (str[i] == '+') || (str[i] == '-') ; i++)
        if (str[i] == '-')
            signe *= -1;
    for (; ('0' <= str[i]) && (str[i] <= '9') ; i++) {
        nb = nb * 10 + str[i] - 48;
        nbmax = nbmax * 10 + str[i] - 48;
        lenmax += 1;
    }
    if ((2147483647 < nbmax) || (10 < lenmax))
        nb = 0;
    nb *= signe;

    return nb;
}
