#ifndef MA_LISTE_CHAINEE_H 
#define MA_LISTE_CHAINEE_H

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

int my_list_size( linked_list_t const *begin);
#endif