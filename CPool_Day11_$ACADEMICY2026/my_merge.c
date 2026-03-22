#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"

void my_merge(
    linked_list_t **begin1,
    linked_list_t *begin2,
    int (*cmp)(const void *, const void *)
){
    linked_list_t debut;
    linked_list_t *actuel = &debut;
    linked_list_t *l1 = *begin1;
    linked_list_t *l2 = begin2; 
   if (begin2 == NULL)
    {
        return;
    }

    while (l1 != NULL && l2 != NULL) {
        if (cmp(l1->data, l2->data) <= 0) {
            actuel->next = l1;
            l1 = l1->next;
        } else {
            actuel->next = l2;
            l2 = l2->next;
        }
        actuel = actuel->next;
    }
    if (l1 != NULL)
        actuel->next = l1;
    else
        actuel->next = l2;

    
    *begin1 = debut.next;
    
}