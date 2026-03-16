#include <criterion/criterion.h>

int my_str_isupper(const char *str);

Test(my_str_isupper, only_uppercase) {
    cr_assert_eq(my_str_isupper("HELLOWORLD"), 1);
}

Test(my_str_isupper, mixed_case) {
    cr_assert_eq(my_str_isupper("HelloWorld"), 0);
}

Test(my_str_isupper, empty_string) {
    cr_assert_eq(my_str_isupper(""), 1);
}