#include <stdio.h>
#include <unistd.h>


int my_putstr(char const *str){
    int i = 0;
    while (!str[i] == '\0')
    {  
        i++;
    }

    return i;
} 
