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
