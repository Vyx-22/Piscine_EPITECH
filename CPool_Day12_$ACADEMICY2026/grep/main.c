#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "my.h"

void do_grep(int fd, char *to_find){
  char *ligne;
  char buffer[30000];
  char c;
  int debut;
  int longueur = 0;

    int size = 0;
    int i  ;
    while ((size = read(fd, buffer, 30000)) > 0)
    {    debut =0;
        for (i = 0; i < size; i++)
        {   
            if (buffer[i] == '\n')
            {
                longueur = i - debut + 1;
                ligne = malloc(longueur + 1);
                my_strncpy(ligne, &buffer[debut], longueur);

                if (my_strstr(ligne,to_find) != NULL)
                {
                    write(1,ligne, longueur);
                    ligne[longueur] = '\0';
                
                }
                free(ligne);
                debut = i + 1;
            }
                
        }
        
    }
      
}

int main(int argc, char const *argv[])
{
    int fd = 0;
    if (argc < 2)
    {
      return 84;
    }
    if (argc > 2)
    {
        for ( int i = 2; i < argc; i++)
        {
           fd = open(argv[i],O_RDONLY);
            if (fd == -1)
            {
                write(2, "cat: ", 5);
                my_putstr(argv[i]);
                my_putstr(" : No such file or directory\n");
                return 84;
            }
          
           do_grep(fd,argv[1]);
           close(fd);

        }
       
    }
    
    return 0;
}
