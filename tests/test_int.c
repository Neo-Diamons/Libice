#include <criterion/criterion.h>

#include "ice/int.h"

Test(ice_atoi, digit_to_int) {
    int result = (int)ice_atoi("7");

    cr_assert_eq(result, 7, "Digit should be handled, get %d", result);
}

Test(ice_atoi, zero_to_int) {
    int result = (int)ice_atoi("0");

    cr_assert_eq(result, 0, "Zero should be handled, get %d", result);
}

Test(ice_atoi, negative_digit_to_int) {
    int result = (int)ice_atoi("-3");

    cr_assert_eq(result, -3, "Negative digit should be handled, get %d", result);
}

Test(ice_atoi, max_long_long_to_int) {
    long long result = ice_atoi("9223372036854775807");

    cr_assert_eq(result, 9223372036854775807, "Max long long should be handled, get %lli", result);
}

Test(ice_atoi, min_long_long_to_int) {
    long long result = ice_atoi("-9223372036854775807");

    cr_assert_eq(result, -9223372036854775807, "Min long long should be handled, get %lli", result);
}

Test(ice_itoa, digit_to_array) {
    char buffer[11];

    ice_itoa(7, buffer);

    cr_assert_str_eq(buffer, "7", "Digit should be handled, get %s", buffer);
}

Test(ice_itoa, zero_to_array) {
    char buffer[11];

    ice_itoa(0, buffer);

    cr_assert_str_eq(buffer, "0", "Zero should be handled, get %s", buffer);
}

Test(ice_itoa, negative_digit_to_array) {
    char buffer[11];

    ice_itoa(-3, buffer);

    cr_assert_str_eq(buffer, "-3", "Negative digit should be handled, get %s", buffer);
}


Test(ice_itoa, max_long_long_to_array) {
    char buffer[20];

    ice_itoa(9223372036854775807, buffer);

    cr_assert_str_eq(buffer, "9223372036854775807", "Max long long should be handled, get %s", buffer);
}

Test(ice_itoa, min_long_long_to_array) {
    char buffer[20];

    ice_itoa(-9223372036854775807, buffer);

    cr_assert_str_eq(buffer, "-9223372036854775807", "Min long long should be handled, get %s", buffer);
}
