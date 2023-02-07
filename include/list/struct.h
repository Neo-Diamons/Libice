/*
** EPITECH PROJECT, 2022
** list
** File description:
** struct.h
*/

#ifndef LIST_STRUCT_H
    #define LIST_STRUCT_H

typedef struct list_node_s {
    void *value;
    struct list_node_s *next;
    struct list_node_s *prev;
} list_node_t;

typedef struct list_s {
    list_node_t *head;
    list_node_t *tail;
    unsigned int size;
} list_t;

#endif /* !LIST_STRUCT_H */
