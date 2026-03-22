#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

int my_list_size( linked_list_t const *begin){
    int i =0;
    while (begin != NULL)
    { begin = begin->next;
       i++;
    }
    return i;
}