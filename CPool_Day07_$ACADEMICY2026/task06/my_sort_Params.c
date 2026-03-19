#include <stdio.h>
#include <unistd.h>
#include "my.h"


int main(int argc, char **argv){
    
int petit ;
int i=0;
int j=0;
char *temp = NULL;

while (i < argc)
{   petit = i;
    j= i+1;
    while (j < argc)
    {
        if((my_strcmp(argv[j],argv[petit])) < 0)
        {petit = j;}

        j++;
    }
    if (petit != i)
    {
       temp = argv[i];
       argv[i] = argv[petit];
       argv[petit] = temp;


    }
    i++;
}

i=0;
while (i < argc)
{
    my_putstr(argv[i]);
    my_putchar('\n');
    i++;
}

return 0;
}