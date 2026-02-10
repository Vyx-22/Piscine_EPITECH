#include <stdio.h>
#include <unistd.h>


int my_evil_str(char *str){

    int i = 0;
    int j = 0;
    int k = 0;
    char temp;


    while (!str[i] == '\0')
    {  
        i++;
    }

    i = i-1;

    while (j < i )
    {
       temp = str[j];
        str[j] = str[i];
        str[i] = temp;
 
        i--;
        j++; 
    }
    
    while (!str[k] == '\0')
    {  
        my_putchar(str[k]) ;
        k++;
    }

    return 0;
}
