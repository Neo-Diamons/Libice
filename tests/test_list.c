#include <criterion/criterion.h>

#include "list.h"

Test(list_create, create_list) {
    list_t *list = list_create();

    cr_assert_neq(list, NULL, "list_create() returned NULL");
    cr_assert_eq(list->head, NULL, "list->head is not NULL");
    cr_assert_eq(list->tail, NULL, "list->tail is not NULL");
    cr_assert_eq(list->size, 0, "list->size is not 0");
}