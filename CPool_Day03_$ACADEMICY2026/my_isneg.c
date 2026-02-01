#include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
    write (1, &c, 1);
}

int my_isneg( int n){
    
    if (n < 0)
    {
        my_putchar('n');
    }
    else if( n >= 0)
    {
        my_putchar('p');
    }
    
    return 0;
}

int main(void){
    int n = 3;
    my_isneg(n);
}