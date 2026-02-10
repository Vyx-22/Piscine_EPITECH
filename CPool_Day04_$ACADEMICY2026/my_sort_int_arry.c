#include <stdio.h>
#include <unistd.h>

void my_sort_int_array( int *arry, int size){

    int i = 0;
    int j = 0;
    int indice_min = 0;
    int temp = 0;
    
    for ( i = 0; i <= size -2; i++)
    {    indice_min = i;
        for (j = i +1; j < size - 1; j++)
        {
            if (arry[j]< arry[indice_min] )
            {
                indice_min = j;
            }
            
        }
        
        if (indice_min != i)
        {
            temp = arry[i];
            arry[i] = arry[indice_min];
            arry[indice_min] = temp;
        }
        

    }
    
}

