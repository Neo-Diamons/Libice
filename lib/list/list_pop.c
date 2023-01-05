/*
** EPITECH PROJECT, 2022
** list
** File description:
** list_pop.c
*/

#include <stdlib.h>
#include "list.h"

void *list_pop(list_t *list, unsigned int index)
{
    list_node_t *node;

    if ((list->size <= index) || (list == NULL))
        return NULL;

    node = list->head;
    for (unsigned int i = 0; i < index; i++)
        node = node->next;

    return list_pop_node(list, node);
}
