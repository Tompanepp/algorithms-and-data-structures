#include "linkedlist.h"
#include <stdlib.h>
#include "node.h"

linkedlist new (datatype type)
{
    linkedlist temp = {NULL, 0, type};
    return temp;
}

void add(linkedlist *collection, void *value)
{
    
    node *n = newnode(value, NULL);
    save_datatype(collection->type, value, n->value);

    if (collection->head != NULL)
    {
        node *currentnode = collection->head;
        while (currentnode->next != NULL)
            currentnode = currentnode->next;
        currentnode->next = n;
    }
    else
    {
        collection->head = n;
    }

    collection->length += 1;
}