#include <stdio.h>
#include <unistd.h>
#include "my.h"

void my_swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

