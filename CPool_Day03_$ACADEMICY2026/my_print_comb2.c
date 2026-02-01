#include <stdio.h>
#include <unistd.h>

 

int my_print_comb2(){

    int x = 0;
    int y = 0;
    char a;
    char b;
    char c;
    char d;
    

        for ( x = 0; x <= 98; x++)
        { 
            for ( y = x+1; y <=99; y++)
                {
                    if (x<y)
                    {    
                        a = (x / 10) + '0';
                        b = (x % 10) + '0';
                        c = (y / 10) + '0';
                        d = (y % 10) + '0';
                        my_putchar(a);
                        my_putchar(b);
                        my_putchar(' ');
                        my_putchar(c);
                        my_putchar(d);

                        if ( x == 98 && y== 99 )
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
