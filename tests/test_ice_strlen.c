#include <criterion/criterion.h>
#include <ice.h>

Test(ice_strlen, strlen)
{
    cr_assert_eq(ice_strlen("Hello"), 5);
}
