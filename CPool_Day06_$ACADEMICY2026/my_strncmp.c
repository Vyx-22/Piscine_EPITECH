#include <stdio.h>
#include <unistd.h>

char *my_strcmp(char const *s1, char const *s2, int n){
    int i = 0;
    while (s1[i] <= s1[n] && s2[i] <= s2[n] ) 
    {   
        if (s1[i] != s2[i])
        {
           if ((s1[i]-s2[i]) < 0 )
           {
            return -(s1[i]-s2[i]);
           }
            return s1[i]-s2[i] ;
        }
        i++;
    }
    return 0;

}