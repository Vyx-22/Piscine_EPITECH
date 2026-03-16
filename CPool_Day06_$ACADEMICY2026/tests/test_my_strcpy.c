#include <criterion/criterion.h>


Test(my_strcpy, copy_string_into_empty_array) {
    char dest[6] = {0};
    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strcpy, return_value_is_dest) {
    char dest[6] = {0};
    char *copy = my_strcpy(dest, "Hello");
    cr_assert_str_eq(copy, "Hello");
}