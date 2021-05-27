#ifndef NODE_H
#define NODE_H

typedef struct node
{
    void *value;
    struct node *next;
} node;
#endif