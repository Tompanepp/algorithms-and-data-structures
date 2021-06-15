#include "../memory_cell/memory_allocator.h"

#ifndef NODE_H
#define NODE_H

typedef struct node
{
    void *value;
    struct node *next;
} node;

node * newnode();

#endif