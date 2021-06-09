#include "../datatype/datatype.h"
#include "node.h"

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct linkedlist
{  
    node *head;
    int length;
    datatype type;
} linkedlist;


/*
    creates and returns a linked list for the specified
        @type = data type of values to store
*/
linkedlist new(datatype type);

/*
    add a node at the end of linked list
        @value = value to store
    flow:
        iterate list
            until, @currentnode->next is NULL
                create @newnode with @value
                set current @currentnode->next to @newnode
*/
linkedlist add(linkedlist *collection, void *value);

/*
    store an item at the top 
        @value = value to store
*/
linkedlist add_to_top(void *value);


/*
    read an item at the end 
        @collection = collection to read from 
        @value = node to read
*/
node read(linkedlist *collection, void *value);

/*
    read an item at the top 
        @collection = collection to read from 
        @value = node to read
*/
node read_from_top(linkedlist *collection, void *value);

/*
    delete an item at the end 
        @collection = collection to read from 
        @value = node to read
*/
node delete(linkedlist *collection, void *value);
/*
    delete an item at the top 
        @collection = collection to read from 
        @value = node to read
*/
node delete_from_top(linkedlist *collection, void *value);
#endif