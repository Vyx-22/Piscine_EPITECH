#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *my_strncpy(char *dest, char const *src, int n){

    int i = 0;
    
    for ( i = 0; i < n; i++)
    {
        dest[i]= src[i];
    }

    dest[n] = '\0';

    return dest;
}