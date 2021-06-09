#include <stdlib.h>
#include <stdio.h>

#ifndef MEMORY_ALLOCATOR_H
#define MEMORY_ALLOCATOR_H

/*
    allocate memory of specified size and retrn pointer to first byte
        @size = size of memory
*/
void *allocate_memory(int size);

#endif