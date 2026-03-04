#include <stdio.h>
#include <unistd.h>

int my_compute_factorial_it(int nb){

    int resultat = 1;

    if ( nb < 0)
    {
        resultat = 0;
    }
    else
    {  
       while (nb > 0) 
        {
            resultat = resultat* nb;
            nb--;
        }
    }
    
    return resultat;
}
