#include "linkedlist.h"
#include <stdlib.h>

linkedlist new(datatype type) {
    linkedlist temp = {NULL, 0, type};
    return temp;
}

linkedlist add(linkedlist *collection, void *value) {
    node *currentnode = collection->head;
    /*node newnode = {value, NULL};
    while(currentnode->next != NULL)
        currentnode = currentnode->next;
    currentnode->next = newnode;*/
    return *collection;
}