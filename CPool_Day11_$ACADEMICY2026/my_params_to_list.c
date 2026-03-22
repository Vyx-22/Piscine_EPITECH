#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "mylist.h"


linked_list_t *my_params_to_list(int ac, char * const *av){
    int i = 1;
    linked_list_t *node;               // on crée un pointeur vers un nœud
    
    linked_list_t *head = NULL;  // au départ, la liste est vide
    while (i <= ac)
    {
        node = malloc(sizeof(linked_list_t));  // on alloue de la mémoire pour le nœud 
        node->data = malloc(my_strlen(av[ac-i]) +1); //alloue pour la valleur du nœud
        my_strcpy( node->data ,av[ac-i]);
        node->next = head;  // le nouveau nœud pointe vers l’ancienne tête
        head = node;        // head devient le nouveau nœud
        i++;
    }
    
    
    return head;
}