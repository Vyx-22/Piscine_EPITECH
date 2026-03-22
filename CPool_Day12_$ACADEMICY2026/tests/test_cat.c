#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <fcntl.h>
#include <unistd.h>

// Prototype de ta fonction à tester (celle qui est dans cat/main.c)
void my_display(int fd);

// Fonction pour rediriger la sortie standard (stdout) vers un tube
// pour que Criterion puisse lire ce que ton programme affiche.
void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

// TEST 1 : Vérifier que my_display affiche bien le contenu d'un fichier existant
Test(my_display, display_normal_file, .init = redirect_all_stdout)
{
    // On crée un fichier temporaire pour le test
    int fd = open("test_file.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    write(fd, "Hello Epitech", 13);
    close(fd);

    // On ouvre ce fichier et on lance ta fonction
    int fd_read = open("test_file.txt", O_RDONLY);
    my_display(fd_read);
    close(fd_read);

    // On vérifie si ce qui a été affiché correspond à ce qu'on attend
    cr_assert_stdout_eq_str("Hello Epitech");
    
    // Nettoyage
    unlink("test_file.txt");
}

// TEST 2 : Vérifier que my_display ne crash pas avec un mauvais FD
Test(my_display, display_invalid_fd, .init = redirect_all_stdout)
{
    my_display(-1);
    // On vérifie juste que le programme n'a rien écrit (ou géré l'erreur)
    cr_assert_stdout_eq_str("");
}
