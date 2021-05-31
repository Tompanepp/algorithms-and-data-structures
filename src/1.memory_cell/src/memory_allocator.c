#include "memory_allocator.h"

void *allocate_memory(int size)
{
    void *first_address;
    if ((first_address = malloc(size)) != NULL)
        return first_address;
    else
    {
        printf("Failed to allocate memory for the array");
        exit(1);
    }
}