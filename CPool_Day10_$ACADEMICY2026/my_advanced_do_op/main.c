#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "my_opp.h"
#include "operator.h"

int main(int argc, char **argv)
{
    if (argc != 4)
        return (84);

    int a = my_getnbr(argv[1]);
    int b = my_getnbr(argv[3]);
    
    for (int i = 0; g_opptab[i].op != NULL; i++) 
    {
        if (strcmp(argv[2], g_opptab[i].op) == 0)  
        {
            int result = g_opptab[i].func(a, b);
            my_putnbr(result);
            my_putchar('\n');
            return 0;
        }
    }
    my_usage(a,b);
    return 0;
}