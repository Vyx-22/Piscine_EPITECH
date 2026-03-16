#include <criterion/criterion.h>

char *my_strstr(char *str, char *to_find);

Test(my_strstr, substring_found_in_middle)
{
    cr_assert_str_eq(my_strstr("HelloWorld", "World"), "World");
}

Test(my_strstr, substring_at_beginning)
{
    cr_assert_str_eq(my_strstr("HelloWorld", "Hello"), "HelloWorld");
}

Test(my_strstr, substring_not_found)
{
    cr_assert_null(my_strstr("HelloWorld", "Bye"));
}

Test(my_strstr, substring_equals_string)
{
    cr_assert_str_eq(my_strstr("Hello", "Hello"), "Hello");
}

Test(my_strstr, empty_substring)
{
    cr_assert_str_eq(my_strstr("HelloWorld", ""), "HelloWorld");
}

Test(my_strstr, empty_string)
{
    cr_assert_null(my_strstr("", "Hello"));
}