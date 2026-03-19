#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"


struct info_param *my_params_to_array(int ac, char **av){
    struct info_param *tab = malloc((ac +1) * sizeof(struct info_param));
    int i =0; 

    for (i = 0; i < ac; i++)
    {
        tab[i].length = my_strlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = malloc((my_strlen(av[i]) + 1) * sizeof(char));
        my_strcpy(tab[i].copy, av[i]);
        tab[i].word_array = my_str_to_word_array(av[i]);
        
    }
    tab[ac].str = 0;  
    return tab;
}