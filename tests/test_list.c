#include <criterion/criterion.h>

#include "list.h"

Test(list_create, create_list) {
    list_t *list = list_create();

    cr_assert_neq(list, NULL, "list_create() returned NULL");
    cr_assert_eq(list->head, NULL, "list->head is not NULL");
    cr_assert_eq(list->tail, NULL, "list->tail is not NULL");
    cr_assert_eq(list->size, 0, "list->size is not 0");

    list_destroy(list);
}

Test(list_add, add_list) {
    list_t *list = list_create();
    cr_assert_neq(list, NULL, "list_create() returned NULL");

    bool r = list_add(list, "Hello");
    cr_assert_eq(r, false, "list_add() returned true");

    cr_assert_eq(list->head, list->tail, "list->head is not list->tail");
    cr_assert_str_eq(list->head->value, "Hello", "list->head->value is not Hello");
    cr_assert_eq(list->head->prev, NULL, "list->head->prev is not NULL");
    cr_assert_eq(list->head->next, NULL, "list->head->next is not NULL");
    cr_assert_eq(list->size, 1, "list->size is not 0");

    list_destroy(list);
}

Test(list_add, add_list_two_elements) {
    bool r;
    list_t *list = list_create();
    cr_assert_neq(list, NULL, "list_create() returned NULL");

    r = list_add(list, "Hello");
    cr_assert_eq(r, false, "list_add() returned true");

    r = list_add(list, "World!");
    cr_assert_eq(r, false, "list_add() returned true");

    cr_assert_neq(list->head, list->tail, "list->head is not list->tail");
    cr_assert_str_eq(list->head->value, "Hello", "list->head->value is not Hello");
    cr_assert_str_eq(list->tail->value, "World!", "list->tail->value is not World!");
    cr_assert_eq(list->head->prev, NULL, "list->head->prev is not NULL");
    cr_assert_eq(list->head->next, list->tail, "list->head->next is not list->tail");
    cr_assert_eq(list->tail->prev, list->head, "list->tail->prev is not list->head");
    cr_assert_eq(list->tail->next, NULL, "list->tail->next is not NULL");
    cr_assert_eq(list->size, 2, "list->size is not 0");

    list_destroy(list);
}

Test(list_add, add_list_to_uninitialized_list) {
    list_t *list = NULL;

    bool r = list_add(list, "Hello");
    cr_assert_eq(r, true, "list_add() returned false");
}
