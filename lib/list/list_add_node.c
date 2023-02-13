/*
** EPITECH PROJECT, 2022
** list
** File description:
** list_add_node.c
*/

#include <stdlib.h>

#include "list.h"

unsigned int list_add_node(list_t *list, list_node_t *node)
{
    if (list == NULL || node == NULL)
        return 0;

    list->size++;
    if (list->tail == NULL) {
        list->head = node;
        list->tail = node;
        return 0;
    }

    list->tail->next = node;
    node->prev = list->tail;
    list->tail = node;

    return list->size - 1;
}
