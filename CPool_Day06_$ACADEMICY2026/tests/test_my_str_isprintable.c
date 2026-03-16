#include <criterion/criterion.h>

int my_str_isprintable(const char *str);

Test(my_str_isprintable, printable_chars) {
    cr_assert_eq(my_str_isprintable("Hello World!123"), 1);
}

Test(my_str_isprintable, non_printable_chars) {
    char str[5] = {'a', 'b', 1, 'd', '\0'};
    cr_assert_eq(my_str_isprintable(str), 0);
}

Test(my_str_isprintable, empty_string) {
    cr_assert_eq(my_str_isprintable(""), 1);
}