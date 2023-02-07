#include <criterion/criterion.h>

#include "ice/string.h"

Test(ice_strlen, basic) {
    char *str = "Hello World!";
    unsigned long long len = ice_strlen(str);

    cr_assert_eq(len, 12, "ice_strlen() returned %lli instead of 12", len);
}

Test(ice_strlen, null) {
    char *str = NULL;
    unsigned long long len = ice_strlen(str);

    cr_assert_eq(len, 0, "ice_strlen() returned %lli instead of 0", len);
}

Test(ice_strlen, empty) {
    char *str = "";
    unsigned long long len = ice_strlen(str);

    cr_assert_eq(len, 0, "ice_strlen() returned %lli instead of 0", len);
}

Test(ice_strcpy, basic) {
    char str1[15] = {0};
    char str2[] = "Hello World!";

    ice_strcpy(str1, str2);

    cr_assert_str_eq(str1, str2, "ice_strcpy() returned %s instead of Hello World!", str1);
}

Test(ice_strncpy, basic) {
    char str1[15] = {0};
    char str2[] = "Hello World!";

    ice_strncpy(str1, str2, 5);

    cr_assert_str_eq(str1, "Hello", "ice_strncpy() returned %s instead of Hello World!", str1);
}

Test(ice_strcat, basic) {
    char str1[15] = {0};
    char str2[] = " World!";

    ice_strcpy(str1, "Hello");
    ice_strcat(str1, str2);

    cr_assert_str_eq(str1, "Hello World!", "ice_strcat() returned %s instead of Hello World!", str1);
}

Test(ice_strncat, basic) {
    char str1[15] = {0};
    char str2[] = " World!";

    ice_strcpy(str1, "Hello");
    ice_strncat(str1, str2, 6);

    cr_assert_str_eq(str1, "Hello World", "ice_strncat() returned %s instead of Hello World!", str1);
}