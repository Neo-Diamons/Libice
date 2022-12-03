/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strcmp.c
*/

int ice_strcmp(const char* str1, const char* str2)
{
    int i = 0;

    for (; str1[i] ; i++) {
        if (str1[i] < str2[i])
            return str1[i] - str2[i];
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
    }

    if (str1[i] == str2[i])
        return 0;

    return -str2[i];
}
