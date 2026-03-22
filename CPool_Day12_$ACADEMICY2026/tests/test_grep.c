#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <unistd.h>

// On déclare la fonction de recherche que tu as créée dans grep/main.c
void my_grep(char const *to_find, int fd);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

// TEST 1 : Vérifier que grep trouve une ligne contenant le mot
Test(my_grep, find_simple_word, .init = redirect_all_stdout)
{
    int fd = open("test_grep.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    write(fd, "hello world\nthis is epitech\ngrep is cool\n", 41);
    close(fd);

    int fd_read = open("test_grep.txt", O_RDONLY);
    my_grep("epitech", fd_read); // On cherche "epitech"
    close(fd_read);

    // On vérifie que seule la ligne contenant "epitech" a été affichée
    cr_assert_stdout_eq_str("this is epitech\n");
    unlink("test_grep.txt");
}

// TEST 2 : Vérifier que grep ne trouve rien si le mot n'existe pas
Test(my_grep, find_nothing, .init = redirect_all_stdout)
{
    int fd = open("test_none.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    write(fd, "no match here\n", 14);
    close(fd);

    int fd_read = open("test_none.txt", O_RDONLY);
    my_grep("zebra", fd_read);
    close(fd_read);

    cr_assert_stdout_eq_str("");
    unlink("test_none.txt");
}
