#include "memory_allocator.h"
#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Integration Test - Can ask operating system for memory.\n");
    int *ptr = allocate_memory(sizeof(int));
    *ptr = 2;
    assert(*ptr == 2);
    return 0;
}