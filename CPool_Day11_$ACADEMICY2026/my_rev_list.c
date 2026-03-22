#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

void my_rev_list( linked_list_t **begin){
    linked_list_t *precedent = NULL;
    linked_list_t *actuel = *begin;
    linked_list_t *suivant = actuel->next;

    while (actuel != NULL)
    { suivant = actuel->next;
      actuel->next = precedent;
     precedent= actuel;
     actuel= suivant;
    }
    *begin = precedent;
}