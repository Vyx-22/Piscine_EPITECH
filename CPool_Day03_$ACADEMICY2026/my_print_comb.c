#include <stdio.h>
#include <unistd.h>


int my_print_comb(void){

    int a, b, d;
    
        for ( a = 0 ; a <= 7; a++)
        {
           
    
            for ( b = a+1; b <= 8; b++)
            {
                
           
                for ( d = b+1 ; d <= 9; d++)
                {   my_putchar(a + '0');
                    my_putchar(b + '0');
                    my_putchar(d +'0');
                    
                    if ( a == 7 && b == 8 && d == 9 )
                    {
                       my_putchar(' ');

                    } else 
                    {
                        my_putchar(',');
                        my_putchar(' ');
                    }
                    
                    
                }
        
            }
        }
    
    
    return 0;
}

