#include <stdio.h>
#include <unistd.h>

 

int my_getnbr(char const *str){
    
    int i = 0;
    int j = -1;
    int puissance = 1;
    int k = 0; //compteur
    int posi_prem_nbr ;
    int nombre = 0;
    int dernier_chiffre = 0;
   
    
    
        while ( str[i] <= '0' || str[i] >= '9')
    {
        i++; 
        posi_prem_nbr = i ; //position du premier chiffre
    
    } 
    
    
    while ((str[i] -'0') <= 9 )
    {  
        i++;  // a la fin de la boucle la position du dernier chiffre du nombre +1
        j++; // expo puissance 10 du nombre ex: 10= 1
    }

    
    for ( k = 0;  k < j; k++) { puissance = puissance* 10;}

    k = posi_prem_nbr;

    

        while ( !puissance == 0 && k <= i-1 && j < 10)
        {
            
            nombre = nombre + ((str[k] - '0')*puissance);
             
                puissance = puissance / 10;
                k++ ;
            
        }

        
        dernier_chiffre = nombre % 10;
        
        if (dernier_chiffre<0)
        {
            dernier_chiffre = -dernier_chiffre;
        }
        
           
      if (dernier_chiffre != (str[i-1] - '0') )
        {
            nombre = 0;
        } 
        
        if (str[posi_prem_nbr-1] == '-')
        {
            nombre = -nombre;
        }

    return nombre;

}

