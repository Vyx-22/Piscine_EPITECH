#include <stdio.h>
#include <unistd.h>

int my_getnbr_base(char const *str, char const *base){
    
    int i = 0;
    int j = 0;
    int signe = 1;
    int debut_chaine;
    int long_base;
    int nbr = 0;

    
    // --- Étape 1 : Vérifier que la base est valide
    while (base[i] != '\0'){
        j++;
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

    long_base = i;

    if (long_base >= 2)
    { 
        i = 0;
     // --- Étape 2 : Gestion des signes 
        while (str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '-')
                signe = signe * -1;
            i++;
        }

        /* Début réel du nombre */
        debut_chaine = i;

   
     // --- Étape 3 : Conversion en décimal
        while (str[debut_chaine] != '\0')
        {   
            j = 0;
            while (base[j] != '\0' && base[j] != str[debut_chaine])
            {
                j= i+1;
            }
            if (base[j] == '\0')
            {
                return 0;
            }
             
            nbr = (nbr * long_base)+ j;
            debut_chaine++;
        }
        
     // --- Étape 4 : Appliquer le signe 
        nbr = nbr * signe;

        return nbr;     
    }

    return 0;
}