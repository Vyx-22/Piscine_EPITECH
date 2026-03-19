#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src){
   int longueur_chaine = 0;
   
   longueur_chaine = my_strlen(src) ;
   char *dest = malloc(sizeof(char) * (longueur_chaine + 1));
   if (dest == NULL)
   {
    return NULL;
   }
   
   my_strcpy(dest,src);
   return dest;
}