/*
** EPITECH PROJECT, 2022
** list
** File description:
** list.h
*/

#ifndef LIST_H
    #define LIST_H

    #include "list/struct.h"

    list_t *list_create(void);

    unsigned int list_add(list_t *list, void *value);

    void *list_get(list_t *list, unsigned int index);

    void *list_remove(list_t *list, unsigned int index);

    void list_destroy(list_t *list);

    void list_sort(list_t *list, int (*cmp)(void *, void *));

#endif /* !LIST_H */
