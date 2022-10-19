/*
** EPITECH PROJECT, 2022
** ice_pustr
** File description:
** ice_putstr
*/

#include "ice.h"

void ice_putstr(char *str)
{
    int i = 0;

    for (; str[i] != 0 ; i++) {
        ice_putchar(str[i]);
    }
}
