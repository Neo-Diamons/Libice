/*
** EPITECH PROJECT, 2022
** list
** File description:
** list_add.c
*/

#include "stdlib.h"
#include "list.h"



static unsigned int list_add_node(list_t *list, list_node_t *node)
{
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

unsigned int list_add(list_t *list, void *value)
{
    list_node_t *node = malloc(sizeof(list_node_t));

    if ((list == NULL) || (value == NULL) || (node == NULL))
        return 0;

    node->value = value;
    node->next = NULL;
    node->prev = NULL;

    return list_add_node(list, node);
}
