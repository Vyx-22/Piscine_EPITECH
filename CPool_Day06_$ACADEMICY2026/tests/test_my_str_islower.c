#include <criterion/criterion.h>

int my_str_islower(const char *str);

Test(my_str_islower, only_lowercase) {
    cr_assert_eq(my_str_islower("helloworld"), 1);
}

Test(my_str_islower, mixed_case) {
    cr_assert_eq(my_str_islower("HelloWorld"), 0);
}

Test(my_str_islower, empty_string) {
    cr_assert_eq(my_str_islower(""), 1);
}