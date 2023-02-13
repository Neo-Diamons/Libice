/*
** EPITECH PROJECT, 2022
** list
** File description:
** list_remove.c
*/

#include <stdlib.h>

#include "list.h"

void *list_remove(list_t *list, ULL index)
{
    void *value;
    list_node_t *node;

    if ((list->size <= index) || (list == NULL))
        return NULL;

    node = list->head;
    for (ULL i = 0; i < index; i++)
        node = node->next;

    list_pop_node(list, node);

    value = node->value;
    free(node);

    return value;
}
