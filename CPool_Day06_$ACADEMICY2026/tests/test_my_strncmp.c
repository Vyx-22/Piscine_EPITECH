#include <criterion/criterion.h>

int my_strncmp(const char *s1, const char *s2, int n);

Test(my_strncmp, compare_first_three_chars) {
    cr_assert_eq(my_strncmp("abcdef", "abcxyz", 3), 0);
}

Test(my_strncmp, compare_more_than_length) {
    cr_assert(my_strncmp("abc", "abcd", 5) < 0);
}

Test(my_strncmp, zero_characters) {
    cr_assert_eq(my_strncmp("abc", "xyz", 0), 0);
}