#include <criterion/criterion.h>
#include <ice.h>

Test (ice_sint, sint) {
    cr_assert_str_eq(ice_sint(89), "89");
}
