#include <criterion/criterion.h>

int my_str_isnum(const char *str);

Test(my_str_isnum, only_numbers) {
    cr_assert_eq(my_str_isnum("123456"), 1);
}

Test(my_str_isnum, numbers_and_letters) {
    cr_assert_eq(my_str_isnum("123abc"), 0);
}

Test(my_str_isnum, empty_string) {
    cr_assert_eq(my_str_isnum(""), 1);
}