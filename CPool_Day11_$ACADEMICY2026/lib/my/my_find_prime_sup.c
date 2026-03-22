#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_find_prime_sup(int nb){
     if (nb > 1)
    {
    // calcule de la racine carree approcimative
        int j = 1 ;

        while (nb >= j*j )
        {
            j++;
        }

    //-----------------
        int divise = 0;
    
        for (int i = 2; i <= j; i++)
        {
            if (nb % i == 0)
                {
                    divise++;
                }
        }

        if (divise == 0 )
        {
            return nb;
        }
        
        return my_find_prime_sup(nb+1);
        
    }
     else
    {
        return 2; // le plus petit nombre premier vu que nb <0
    }
}