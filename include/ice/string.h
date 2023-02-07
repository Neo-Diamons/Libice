/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice/string.h
*/

#ifndef ICE_STRING_H
    #define ICE_STRING_H

/**
 * @brief Get the len of the str.
 * @param str that will be analysed.
 * @return The len of the str.
 */
unsigned long long ice_strlen(const char *str);

/**
 * @brief Compare two str.
 * @param str1 that will be compared.
 * @param str2 that will be compared.
 * @return 0 if the str are equals, ascii difference if not.
 */
int ice_strcmp(const char *str1, const char *str2);

/**
 * @brief Copy the str.
 * @param dest that will be copied.
 * @param str that will be copied.
 * @return Nothing.
 */
void ice_strcpy(char *dest, const char *str);

/**
 * @brief Copy n first char of the str.
 * @param dest that will be copied.
 * @param str that will be copied.
 * @param n that will be copied.
 * @return Nothing.
*/
void ice_strncpy(char *dest, const char *str, int n);

/**
 * @brief Concat two str.
 * @param dest that will be concatenated.
 * @param str that will be concatenated.
 * @return Nothing.
 */
void ice_strcat(char *dest, const char *str);

/**
 * @brief Concat n first char of the str.
 * @param dest that will be concatenated.
 * @param str that will be concatenated.
 * @param n that will be concatenated.
 * @return Nothing.
 */
void ice_strncat(char *dest, const char *str, int n);

#endif /* !ICE_STRING_H */
