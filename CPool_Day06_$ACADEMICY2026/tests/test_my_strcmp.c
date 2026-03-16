#include <criterion/criterion.h>

int my_strcmp(const char *s1, const char *s2);

Test(my_strcmp, equal_strings) {
    cr_assert_eq(my_strcmp("Hello", "Hello"), 0);
}

Test(my_strcmp, different_strings) {
    cr_assert(my_strcmp("Hello", "World") != 0);
}

Test(my_strcmp, empty_vs_nonempty) {
    cr_assert(my_strcmp("", "abc") < 0);
}

Test(my_strcmp, nonempty_vs_empty) {
    cr_assert(my_strcmp("abc", "") > 0);
}