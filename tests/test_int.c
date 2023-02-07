#include <criterion/criterion.h>

#include "ice/int.h"

Test(ice_itoa, digit_to_array) {
    char buffer[11];

    ice_itoa(7, buffer);

    cr_assert_str_eq(buffer, "7", "Digit should be handled, get %s", buffer);
}

Test(ice_itoa, negative_digit_to_array) {
    char buffer[11];

    ice_itoa(-3, buffer);

    cr_assert_str_eq(buffer, "-3", "Negative digit should be handled, get %s", buffer);
}


Test(ice_itoa, max_long_long_to_array) {
    char buffer[20];

    ice_itoa(9223372036854775807, buffer);

    cr_assert_str_eq(buffer, "9223372036854775807", "Max int should be handled, get %s", buffer);
}

Test(ice_itoa, min_long_long_to_array) {
    char buffer[20];

    ice_itoa(-9223372036854775807, buffer);

    cr_assert_str_eq(buffer, "-9223372036854775807", "Min int should be handled, get %s", buffer);
}
