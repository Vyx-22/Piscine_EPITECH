#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *convert_base(char const *nbr, char const *base_from, char const *base_to){
    int i = 0;
    int j = 0;
    int signe = 1;
    int debut_chaine;
    int long_base_from = 0;
    int long_base_to = 0;
    int nbr_reel = 0;

    
    // --- Étape 1 : Vérifier que la base est valide
    while (base_from[i] != '\0'){
        j = i +1;
        while (base_from[j] != '\0')
        {
            if (base_from[j] == '+'|| base_from[j] == '-'|| base_from[j] == ' '|| base_from[j] < 32 || base_from[j] > 126 ||( base_from[j] == base_from[i] && i != j))
            {
                return NULL;
            }
            j++;
        }
       i++;
    } 
    i =0;
    while (base_to[i] != '\0'){
        j = i+1;
        while (base_to[j] != '\0')
        {
            if (base_to[j] == '+'|| base_to[j] == '-'|| base_to[j] == ' '|| base_to[j] < 32 || base_to[j] > 126 ||( base_to[j] == base_to[i] && i != j))
            {
                return NULL;
            }
            j++;
        }
        i++;
    }

    long_base_from =my_strlen(base_from);
    long_base_to = my_strlen(base_to);

    if (long_base_from >= 2)
    { 
        i = 0;
     // --- Étape 2 : Gestion des signes 
        while (nbr[i] == '+' || nbr[i] == '-')
        {
            if (nbr[i] == '-')
                signe = signe * -1;
            i++;
        }

        /* Début réel du nombre */
        debut_chaine = i;

   
     // --- Étape 3 : Conversion en décimal
        while (nbr[debut_chaine] != '\0')
        {   
            j = 0;
            while (base_from[j] != '\0' && base_from[j] != nbr[debut_chaine])
            {
                j ++;
            }
            if (base_from[j] == '\0')
            {
                return NULL;
            }
             
            nbr_reel = (nbr_reel * long_base_from)+ j;
            debut_chaine++;
        }
        if (nbr_reel == 0)
        {
          return "0";
        }
        
     
    char *tab = malloc(33 * sizeof(char)); 
    if (!tab) return NULL;
    i= 0;
        if (signe < 0 && nbr_reel != 0)
        {
            tab[0]= '-';
            i = 1;
        }
        while (nbr_reel > 0)
        {  
        
           tab[i]= base_to[nbr_reel % long_base_to];
            nbr_reel /= long_base_to;
            i++;
        }

        tab[i]='\0';
        return my_revstr(tab)  ; 
    }
    return NULL;
}