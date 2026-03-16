#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, convert_uppercase) {
    char str[6] = "HELLO";
    cr_assert_str_eq(my_strlowcase(str), "hello");
}

Test(my_strlowcase, mixed_case) {
    char str[6] = "HeLLo";
    cr_assert_str_eq(my_strlowcase(str), "hello");
}

Test(my_strlowcase, empty_string) {
    char str[1] = "";
    cr_assert_str_eq(my_strlowcase(str), "");
}