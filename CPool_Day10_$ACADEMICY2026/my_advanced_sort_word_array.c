#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int my_advanced_sort_word_array(char **tab, int (*cmp)(char const *, char const *)){
int petit ;
int i=0;
int j=0;
char *temp = NULL;

while (tab[i] != NULL)
{   petit = i;
    j= i+1;
    while (tab[j] != NULL)
    {
        if((cmp(tab[j],tab[petit])) < 0)
        {petit = j;}

        j++;
    }
    if (petit != i)
    {
       temp = tab[i];
       tab[i] = tab[petit];
       tab[petit] = temp;

    }
    i++;
} 
return 0;
}