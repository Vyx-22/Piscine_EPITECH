#include <stdio.h>
#include <unistd.h>

int my_putnbr_base(int nbr, char const *base){
     
    int i = 0;
    int j = 0;
    long nbr_copie = nbr;
    
    while (base[i] != '\0'){
        j = i+1;
        while (base[j] != '\0')
        {
            if (base[j] == '+'|| base[j] == '-'|| base[j] == ' '|| base[j] < 32 || base[j] > 126 ||( base[j] == base[i] && i != j))
            {
                return 0;
            }
            j++;
        }
        i++;
    }

    if (i>= 2) {
        if (nbr < 0)
        {   
            my_putchar('-');
            nbr_copie = -nbr;
        }

        if (nbr >= i)
        {
        my_putnbr_base(nbr_copie / i, base);
        }
            
        my_putchar(base[nbr_copie % i]);

    }
    return 0;   
    
}