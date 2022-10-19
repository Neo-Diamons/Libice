/*
** EPITECH PROJECT, 2022
** ice_putchar
** File description:
** ice_putchar
*/

#include <unistd.h>

void ice_putchar(char c)
{
    write(1, &c, 1);
}
