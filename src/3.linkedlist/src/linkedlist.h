#include "node.h"

#include "../../headers/datatype.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct linkedlist
{  
    node *head;
    int length;
    datatype type;
} linkedlist;
#endif

/*
    creates and returns a linked list for the specified
        @type = data type of values to store
*/
linkedlist new(datatype type);