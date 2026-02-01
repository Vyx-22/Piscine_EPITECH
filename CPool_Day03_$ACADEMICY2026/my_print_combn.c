#include <stdio.h>
#include <unistd.h>
 

int my_print_combn(void){

  
    int n;
    int a, b, c, d, e, f, g, h, i;

    switch (n)
        {
        case 1:
             for ( a = 0; a <= 9; a++)
             {
                my_putchar(a + '0');
                
                if (a == 9)
                {
                    my_putchar(' ');
                } else 
                {   my_putchar(',');
                    my_putchar(' ');
                }
             }
             
            break;
        
        case 2:
            a = 0;
            b = 1; 
            for (a = 0; a <= 8; a++)
            { for (b = a+1; b <= 9; b++)
                {
                      my_putchar(a + '0');
                      my_putchar(b + '0');
                  
                    if (a == 8 && b == 9)
                    {
                        my_putchar(' ');
                    } else 
                    {   my_putchar(',');
                        my_putchar(' ');
                    }

                }
            }
             
            break;
        
        case 3:
            for ( a = 0 ; a <= 7; a++)
        {
            for ( b = a+1; b <= 8; b++)
            {
                for ( c = b+1 ; c <= 9; c++)
                {   my_putchar(a + '0');
                    my_putchar(b + '0');
                    my_putchar(c +'0');
                    
                    if ( a == 7 && c == 9 )
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
    
    
            break;
        
        case 4:
            for (a = 0; a <= 6; a++)
            {   for (b = a+1; b <= 7; b++)
                {   for ( c = b+1 ; c <= 8; c++)
                    {   for (d = c+1 ; d <= 9; d++)
                        {
                            my_putchar(a + '0');
                            my_putchar(b + '0');
                            my_putchar(c + '0');
                            my_putchar(d + '0');
                        
                            if (a == 6 && d == 9 )
                            {
                                my_putchar(' ');
                            } else 
                            {   my_putchar(',');
                                my_putchar(' ');
                            }
                        }
                    }
                }
            
            }
            break;
        
        case 5:
            for (a = 0; a <= 5; a++)
            {   for (b = a+1; b <= 6; b++)
                {   for ( c = b+1 ; c <= 7; c++)
                    {   for (d = c+1 ; d <= 8; d++)
                        {   for (e = d+1; e <= 9; e++)
                            {   my_putchar(a + '0');
                                my_putchar(b + '0');
                                my_putchar(c + '0');
                                my_putchar(d + '0');
                                my_putchar(e + '0');
                            
                                if (a == 5 && e == 9 )
                                {
                                    my_putchar(' ');
                                } else 
                                {   my_putchar(',');
                                    my_putchar(' ');
                                }
                            }
                        }
                    }
                }
             
            }
           
            
            break;

        case 6:
            for (a = 0; a <= 4; a++)
            {   for (b = a+1; b <= 5; b++)
                {   for ( c = b+1 ; c <= 6; c++)
                    {   for (d = c+1 ; d <= 7; d++)
                        {   for (e = d+1; e <= 8; e++)
                            {   for (f = e+1; f <= 9; f++ )
                                {

                                    my_putchar(a + '0');
                                    my_putchar(b + '0');
                                    my_putchar(c + '0');
                                    my_putchar(d + '0');
                                    my_putchar(e + '0');
                                    my_putchar(f + '0');

                                
                                    if (a == 4 && f == 9)
                                    {
                                        my_putchar(' ');
                                    } else 
                                    {   my_putchar(',');
                                        my_putchar(' ');
                                    }
                                }
                            }
                        }
                    }
                }
             
            }
            break;

        case 7:
            for (a = 0; a <= 3; a++)
            {   for (b = a+1; b <= 4; b++)
                {   for ( c = b+1 ; c <= 5; c++)
                    {   for (d = c+1 ; d <= 6; d++)
                        {   for (e = d+1; e <= 7; e++)
                            {   for (f = e+1; f <= 8; f++ )
                                { for (g = f+1; g <=9; g++)
                                    {  
                                        my_putchar(a + '0');
                                        my_putchar(b + '0');
                                        my_putchar(c + '0');
                                        my_putchar(d + '0');
                                        my_putchar(e + '0');
                                        my_putchar(f + '0');
                                        my_putchar(g + '0');

                                    
                                        if (a == 3 && g == 9)
                                        {
                                            my_putchar(' ');
                                        } else 
                                        {   my_putchar(',');
                                            my_putchar(' ');
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
             
            }
           
            break;
        
        case 8:
            for (a = 0; a <= 2; a++)
            {   for (b = a+1; b <= 3; b++)
                {   for ( c = b+1 ; c <= 4; c++)
                    {   for (d = c+1 ; d <= 5; d++)
                        {   for (e = d+1; e <= 6; e++)
                            {   for (f = e+1; f <= 7; f++ )
                                {   for (g = f+1; g <=8; g++)
                                    {   for (h = g+1; h <=9; h++) 
                                        {  
                                            my_putchar(a + '0');
                                            my_putchar(b + '0');
                                            my_putchar(c + '0');
                                            my_putchar(d + '0');
                                            my_putchar(e + '0');
                                            my_putchar(f + '0');
                                            my_putchar(g + '0');
                                            my_putchar(h + '0');

                                        
                                            if (a == 2  && h == 9 )
                                            {
                                                my_putchar(' ');
                                            } else 
                                            {   my_putchar(',');
                                                my_putchar(' ');
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
             
            }
           
            
            break;
        
        case 9:
             
            for (a = 0; a <= 1; a++)
            {   for (b = a+1; b <= 2; b++)
                {   for ( c = b+1 ; c <= 3; c++)
                    {   for (d = c+1 ; d <= 4; d++)
                        {   for (e = d+1; e <= 5; e++)
                            {   for (f = e+1; f <= 6; f++ )
                                {   for (g = f+1; g <=7; g++)
                                    {   for (h = g+1; h <=8; h++) 
                                        {  for (i = h+1; i <=9; i++)
                                            {  
                                                my_putchar(a + '0');
                                                my_putchar(b + '0');
                                                my_putchar(c + '0');
                                                my_putchar(d + '0');
                                                my_putchar(e + '0');
                                                my_putchar(f + '0');
                                                my_putchar(g + '0');
                                                my_putchar(h + '0');
                                                my_putchar(i + '0');

                                            
                                                if (a == 1  && i == 9 )
                                                {
                                                    my_putchar(' ');
                                                } else 
                                                {   my_putchar(',');
                                                    my_putchar(' ');
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
             
            }
           
             
            break;
        }  
    return 0;
}
