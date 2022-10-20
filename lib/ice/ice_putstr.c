/*
** EPITECH PROJECT, 2022
** ice_pustr
** File description:
** ice_putstr
*/

#include <unistd.h>

int ice_strlen(char *str);

void ice_putstr(char *str)
{
    int len = 0;

    len = ice_strlen(str);
    write(1, str, len);
}
