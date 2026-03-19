#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *my_strupcase(char *str){
    int i = 0;
    
    while (str[i] != '\0')
    { 
        if(str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
  
    return str;
}