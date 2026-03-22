#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "my.h"

void my_display(int fd){
  char buffer[30000];
      int size = 0;
      while ((size = read(fd, buffer, 30000)) > 0)
      {
        write(1, buffer, size);
      }
      
} 

int main(int argc, char const *argv[])
{
    int fd = 0;
    if (argc == 1)
    {
       my_display(0);
    }
    if (argc > 1)
    {
        for ( int i = 1; i < argc; i++)
        {
           fd = open(argv[i],O_RDONLY);
            if (fd == -1)
            {
                write(2, "cat: ", 5);
                my_putstr(argv[i]);
                my_putstr(" : No such file or directory\n");
                return 84;
            }

           my_display(fd);
           close(fd);

        }
       
    }
    
    return 0;
}
