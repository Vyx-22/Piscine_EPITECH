#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, convert_lowercase) {
    char str[6] = "hello";
    cr_assert_str_eq(my_strupcase(str), "HELLO");
}

Test(my_strupcase, mixed_case) {
    char str[6] = "HeLLo";
    cr_assert_str_eq(my_strupcase(str), "HELLO");
}

Test(my_strupcase, empty_string) {
    char str[1] = "";
    cr_assert_str_eq(my_strupcase(str), "");
}