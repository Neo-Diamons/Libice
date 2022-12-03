/*
** EPITECH PROJECT, 2022
** libice
** File description:
** ice/output.h
*/

#ifndef ICE_OUTPUT_H
    #define ICE_OUTPUT_H

    /**
     * @brief Print int the stdout.
     * @param str that will be printed.
     * @return Nothing.
     */
    int ice_puts(const char *str);

    /**
     * @brief Print in the stderr.
     * @param str that will be printed.
     * @return Nothing.
     */
    int ice_perror(const char *str);

#endif /* !ICE_OUTPUT_H */
