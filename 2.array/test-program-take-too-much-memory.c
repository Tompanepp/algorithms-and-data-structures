#include "array.h"
#include <stdio.h>

int main()
{
    array numbers = new (DOUBLE, 10);
    printf("number of customer ages %d \n", numbers.length);
    printf("first address %ld\n", (long int)numbers.first_address);
    printf("adding 2 at index 0\n");
    add(&numbers, 0, 2);
    printf("reading a value at index 0 is %d \n", read(&numbers, 0));

    printf("size of double %ld", sizeof(long double));
    array BIGARRAY = new (LONG_DOUBLE, 33554433);
    while (1 == 1)
    {
        printf("Just chilling");
    }
    return 0;
}