#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_showstr(char const *str){

    int i = 0;
    char base[17]="0123456789abcdef";
    int nbr = 0;
    
    while (str[i] != '\0')
    {
        if ((str[i] < 32 || str[i] > 126))
        {   
            my_putchar('\\');
            nbr = str[i];

            my_putchar(base[nbr / 16]);

            while (nbr >= 16)
            {
                my_putchar(base[nbr / 16]);
                nbr = nbr / 16;
            }
            if (nbr < 16)
            {
            my_putchar(base[nbr % 16]);
            }
           
        }
        else
        {
            my_putchar(str[i]);
        }
        
        i++;
        
    }
    return 0;
}