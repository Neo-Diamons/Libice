#include <criterion/criterion.h>
#include <ice.h>

Test(ice_getnbr, getnbr_maxint)
{
    cr_assert_eq(ice_getnbr("++--+-+-++-01234567890124567891103235466"), 0);
}

Test(ice_getnbr, getnbr_maxlong)
{
    cr_assert_eq(ice_getnbr("9223372036854775808"), 0);
}

Test(ice_getnbr, getnbr)
{
    cr_assert_eq(ice_getnbr("42"), 42);
}
