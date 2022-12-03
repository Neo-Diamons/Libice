/*
** EPITECH PROJECT, 2022
** list
** File description:
** list_remove.c
*/

#include <stdlib.h>
#include "list.h"

static void link_node(list_t *list, list_node_t *node)
{
    if (node->prev != NULL)
        node->prev->next = node->next;
    if (node->next != NULL)
        node->next->prev = node->prev;
    if (node == list->head)
        list->head = node->next;
    if (node == list->tail)
        list->tail = node->prev;
}

void *list_remove(list_t *list, unsigned int index)
{
    void *value;
    list_node_t *node;

    if ((list->size <= index) || (list == NULL))
        return NULL;
    
    node = list->head;
    for (unsigned int i = 0; i < index; i++)
        node = node->next;

    link_node(list, node);

    value = node->value;
    free(node);
    list->size--;

    return value;
}
