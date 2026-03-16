#include <stdio.h>
#include <unistd.h>

char *my_strcapitalize(char *str){
    int i = 0;
    
    while (str[i] != '\0')
    { 
        if((str[i] >= 'a' && str[i] <= 'z') && (str[i-1] == ' ' || str[i-1] == '-' || str[i-1] == '+'))
        {
            str[i] = str[i] -32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z' && str[i-1] != ' ' )
        {
            str[i] = str[i] + 32;
        }
        i++;
    }

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] -32;
    }

    return str;

}