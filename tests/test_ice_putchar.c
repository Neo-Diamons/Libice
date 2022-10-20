#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <ice.h>

Test(ice_putchar, putchar)
{
    cr_redirect_stdout();
    ice_putchar('A');
    cr_assert_stdout_eq_str("A", "");
}
