/*
** EPITECH PROJECT, 2022
** libice/string
** File description:
** ice_strcmp.c
*/

int ice_strncmp(const char* str1, const char* str2, unsigned int n)
{
    unsigned int i = 0;

    for (; (str1[i]) && (i < n) ; i++) {
        if (str1[i] < str2[i])
            return str1[i] - str2[i];
        if (str1[i] > str2[i])
            return str1[i] - str2[i];
    }

    if (str1[i] == str2[i])
        return 0;

    return -str2[i];
}
