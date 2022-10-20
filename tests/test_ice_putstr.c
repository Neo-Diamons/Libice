#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ice.h>

Test(ice_putstr, putstr)
{
    cr_redirect_stdout();
    ice_putstr("Hello World!");
    cr_assert_stdout_eq_str("Hello World!", "");
}
