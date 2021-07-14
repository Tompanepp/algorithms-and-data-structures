#include "linkedlist.h"
#include <stdlib.h>

linkedlist new (datatype type)
{
    linkedlist temp = {NULL, 0, type};
    return temp;
}

void add(linkedlist *collection, void *value)
{
    printf("creating node\n");
    node *n = newnode();
    node nn = {value, NULL};
    printf("node in hand\n");
    printf("saving data in node\n");
    /*
        seg fault when calling this
        save_datatype(collection->type, value, n->value);

    */
    save_datatype(collection->type, value, nn.value);
    
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