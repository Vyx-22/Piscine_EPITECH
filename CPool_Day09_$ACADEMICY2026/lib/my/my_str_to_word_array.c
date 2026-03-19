#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char **my_str_to_word_array( char const *str){
int j = 0;
int nbr_mot =0;


if (str[0] == '\0')
    return NULL;
if ((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= '0' && str[0] <= '9'))
{ 
    nbr_mot ++;
}
while (str[j] != '\0')
{    
    
    if (!((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9')) && str[j+1] != '\0')
    { 
        if (((str[j+1] >= 'a' && str[j+1] <= 'z') || (str[j+1] >= 'A' && str[j+1] <= 'Z') || (str[j+1] >= '0' && str[j+1] <= '9')))
        {
            nbr_mot++;
        }
        
    }
    j++;
}

char **tab = malloc(sizeof(char *) * (nbr_mot + 1));
j= 0;
int longueur = 0;
int k = 0;
int debut = 0;
while (str[j] != '\0')
{
    if (((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9')) && (j == 0 || !((str[j - 1] >= 'a' && str[j - 1] <= 'z') || (str[j - 1] >= 'A' && str[j - 1] <= 'Z') || (str[j - 1] >= '0' && str[j - 1] <= '9'))))
    {
        debut = j;
    }

    if (((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9')) && !((str[j + 1] >= 'a' && str[j + 1] <= 'z') || (str[j + 1] >= 'A' && str[j + 1] <= 'Z') || (str[j + 1] >= '0' && str[j + 1] <= '9')))
    {
        longueur = j - debut + 1;
        tab[k] = malloc(sizeof(char) * (longueur + 1));
        
        int m = 0;
        while (m < longueur)
        {
            tab[k][m] = str[debut + m];
            m++;
        }
        tab[k][m] = '\0';
        k++;
    }
    j++;
}
tab[k] = NULL;
return (tab);
}