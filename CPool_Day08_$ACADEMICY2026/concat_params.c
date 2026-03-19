#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *concat_params(int argc, char **argv){
    int longueur_chaine = 0;
    int i = 0;
    while (i < argc)
    {
        longueur_chaine += my_strlen(argv[i]) +1;
        i++;
    }
    char *dest = malloc(sizeof(char) * (longueur_chaine + 1));
    if (dest == NULL)
    {
        return NULL;
    }
    my_strcpy(dest,argv[0]);
    my_strcat(dest,"\n");

    i = 1;
    while (i <= argc-1)
    {    
       
        if (i == argc-1)
        {
            my_strcat(dest, argv[i]);
        }
        else
        {   my_strcat(dest, argv[i]);
            my_strcat(dest,"\n");
        }
        
        i++;
    }
    return dest;
}