#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

void my_concat_list(
    linked_list_t **begin1,
    linked_list_t *begin2
){
    if (*begin1 == NULL)
    {
        *begin1-> = begin2;
    }
    else
    {
        while (*begin1 != NULL)
        { 
            *begin = (*begin)->next;
        }
        *begin2 = begin1;
    }
    

}