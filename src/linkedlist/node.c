#include "../memory_cell/memory_allocator.h"
#include "node.h"

node * newnode() {
    node *n = (node*)allocate_memory(sizeof(node));
    return n;
}
