#include <stdio.h>
#include <unistd.h>

int my_compute_power_it(int nb, int p){

    int resultat = 1;

    if (p < 0)
    {
        return 0;
    }
    else
    {
        while (!p == 0)
        {
            resultat = resultat * nb;
            p--;
        }
        return resultat;
    }
}