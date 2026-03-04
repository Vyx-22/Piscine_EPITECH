#include <stdio.h>
#include <unistd.h>

int my_compute_square_root(int nb){

    if (nb > 0)
    {
        int i = 1 ;

        while (nb >= i*i)
        {
            i++;
        }
        
        if ( (nb / i) == i &&( nb % i) == 0)
        {
            return i;
        } else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    
    
}