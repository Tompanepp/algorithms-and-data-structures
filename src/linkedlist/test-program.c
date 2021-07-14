#include "linkedlist.h"
#include <stdio.h>
#include <assert.h>

void printlinkedlist(linkedlist collection)
{
    if (collection.head != NULL)
    {
        node *currentnode = collection.head;
        while (currentnode->next != NULL)
        {
            printf("%d->", *(int *)currentnode->value);
            currentnode = currentnode->next;
        }
        printf("%d\n", *(int *)currentnode->value);
    }
    else
        printf("linkedlist is empty");
}
int main()
{
    printf("Test creating Integer linkedlist\n");
    linkedlist numbers = new (INT);
    assert(numbers.head == NULL);
    assert(numbers.length == 0);
    assert(numbers.type == INT);

    printf("Test adding an item to the linked list\n");
    int n1 = 2;
    printf("adding\n");
    add(&numbers, &n1);
    assert(numbers.length == 1);
    /*assert(*(int *)(numbers.head->value) == 2);
    
    assert(numbers.type == INT);
    int n2 = 5;
    add(&numbers, &n2);
    printlinkedlist(numbers);*/
    return 0;
}