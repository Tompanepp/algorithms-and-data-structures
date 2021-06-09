#include "linkedlist.h"
#include <stdio.h>
#include <assert.h>

int main()
{
    printf("Test creating Integer linkedlist\n");
    linkedlist numbers = new (INT);
    assert(numbers.head == NULL);
    assert(numbers.length == 0);
    assert(numbers.type == INT);
    
    printf("Test adding an item to the linked list\n");
    add(&numbers, 2);
    return 0;
}