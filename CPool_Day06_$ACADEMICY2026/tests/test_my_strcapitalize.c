#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, capitalize_sentence) {
    char str[50] = "hey, how are you? 42WORds forty-two; fifty+one";
    cr_assert_str_eq(my_strcapitalize(str), 
                     "Hey, How Are You? 42Words Forty-Two; Fifty+One");
}

Test(my_strcapitalize, empty_string) {
    char str[1] = "";
    cr_assert_str_eq(my_strcapitalize(str), "");
}