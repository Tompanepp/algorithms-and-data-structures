#include "../src/linkedlist.h"
#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Test creating Integer linkedlist\n");
    linkedlist numbers = new (INT);
    assert(numbers.length == 0);
    
    printf("Test next one\n");
    
    return 0;
}