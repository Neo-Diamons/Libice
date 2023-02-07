#include <criterion/criterion.h>

#include "ice/string.h"

Test(ice_strlen, basic) {
    char *str = "Hello World!";

    cr_assert_eq(ice_strlen(str), 12);
}