#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_str_isalpa(char const *str){
    int i = 0;
    
    while (str[i] != '\0'){
        if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z') && !(str[0] == ' ' && str[1] == '\0' ) )
        {
            return 0;
        }
        i++;
    }

    return 1;  
}