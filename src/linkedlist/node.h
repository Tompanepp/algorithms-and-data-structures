#include "../memory_cell/memory_allocator.h"

#ifndef NODE_H
#define NODE_H

typedef struct node
{
    void *value;
    struct node *next;
} node;

/*node * newnode(void *value, node *next) {
    node *n = (node*)allocate_memory(sizeof(node));
    //*new_node->value = value;
    //*new_node->next = next;
    return n;
}*/
#endif