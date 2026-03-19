#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int my_show_param_array( struct info_param *par){
    int i =0;
    while (par[i].str != 0) {
    my_putstr(par[i].str);
    my_putchar('\n');
    my_put_nbr(par[i].length);
    my_putchar('\n');
    int j = 0;
    while (par[i].word_array[j] != 0) 
    {
        my_putstr(par[i].word_array[j]);
        my_putchar('\n'); 
        j++;
    }
    i++;
    }
    return 0;
}