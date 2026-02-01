#include <stdio.h>
#include <unistd.h>




int my_print_alpha(void) {

   char c = 'a'; 

  /* while (c <='z')
    {
       my_putchar(c);
       c++;
    } *
    
    for( char c = 'a' ; c <= 'z' ;c++) {
        my_putchar(c);
    } */
   do
   {
    my_putchar(c);
       c++;
   }
   while (c <= 'z');

    return 0;
}

