#include <stdio.h>
#include <unistd.h>

int my_is_prime(int nb){
    
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
            return 1;
        }

        return 0;
        
    }
     else
    {
        return 0;
    }
}