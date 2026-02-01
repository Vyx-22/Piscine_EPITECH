#include <stdio.h>
#include <unistd.h>



int my_print_realpha(){
    char c = 'z'; 

    while (c >='a')
    {
       my_putchar(c);
       c--;
    } 
    return 0;
}
