#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *my_strstr(char *str, char const *to_find){
    int i = 0;
    int j = 0;
    
    if (to_find[0] == '\0')
    {
        return str;
    }
    
        while (str[i] != '\0' )
        {   
            j= 0;
            if (to_find[j]== str[i])
            {
                while (to_find [j] != '\0' && to_find[j]== str[i+j] )
                {
                    j++;
                } 

                if (to_find[j] == '\0')
                {
                return &str[i];
                }
                 
            }
        
                i++;
                
        }
        
    return 0;
    
    
}