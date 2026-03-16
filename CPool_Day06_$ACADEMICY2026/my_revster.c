#include <stdio.h>
#include <unistd.h>

char *my_revster(char *str){

    int i = 0;
    int j = 0;
    int taille_chaine = 0;
    char temp;
    
    while (str[i] != '\0')
    {
        i++;
    }
    taille_chaine = i-1;

    while (taille_chaine > j )
    {
        temp = str[j];
        str[j]= str[taille_chaine];
        str[taille_chaine] = temp;
        taille_chaine--;
        j++;
    }


    return str;
}
