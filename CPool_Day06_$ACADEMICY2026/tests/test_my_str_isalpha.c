#include <criterion/criterion.h>

int my_str_isalpha(const char *str);

Test(my_str_isalpha, only_letters) {
    cr_assert_eq(my_str_isalpha("HelloWorld"), 1);
}

Test(my_str_isalpha, letters_and_numbers) {
    cr_assert_eq(my_str_isalpha("Hello123"), 0);
}

Test(my_str_isalpha, empty_string) {
    cr_assert_eq(my_str_isalpha(""), 1);
}