 #include <stdio.h>
#include <unistd.h>

void my_putchar(char c) {
    write (1, &c, 1);
} 

int my_put_nbr(int nb) {

    int a = 0;
    int resul = 0;

    /*faire une copie de nb pour l'utiliser*/ int nb1 = nb;

        if (nb < 0)
        {
            my_putchar('-');
            nb = -nb;
            nb1 = nb;
        }
        
        while (nb1 > 9 )
        {   
            resul = nb1 / 10;
            nb1 = resul;
            a++;

        } 

    
        if (a==0)
        {
           my_putchar(nb +'0') ;
           my_putchar('\n');
        } 
        else {
         
            int i;
            int puissance = 10;
            int aff;
        
            for ( i = 1; i < a; i++) { puissance = puissance* 10;}

            while (puissance != 1)
            {   
                aff = nb / puissance;
                my_putchar(aff + '0');
                nb = nb % puissance;
                
                puissance = puissance/10;
            }

            if (puissance == 1)
            {    
                my_putchar(nb +'0');
                my_putchar('\n');

            }
        }      
    return 0;
}

int main(void){
            my_put_nbr(0);
            my_put_nbr(21);
            my_put_nbr(-21);
            my_put_nbr(25654931);
            my_put_nbr(-25654931);
            return 0;
        }
